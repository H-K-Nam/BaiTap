#include <bits/stdc++.h>

using namespace std;

int atoi(char n)
{
    int x=0;
    x=(int)n-48;
    return x;
}

void Numb(int n)
{
    switch(n)
    {
    case 1:
        {
            cout << "one ";
            break;
        }
    case 2:
        {
            cout << "two ";
            break;
        }
    case 3:
        {
            cout << "three ";
            break;
        }
    case 4:
        {
            cout << "four ";
            break;
        }
    case 5:
        {
            cout << "five ";
            break;
        }
    case 6:
        {
            cout << "six ";
            break;
        }
    case 7:
        {
            cout << "seven ";
            break;
        }
    case 8:
        {
            cout << "eight ";
            break;
        }
    case 9:
        {
            cout << "nine ";
            break;
        }
    };
}

void Tens(int n)
{
    switch(n)
    {
    case 11:
        {
            cout << "eleven ";
            break;
        }
    case 12:
        {
            cout << "twelve ";
            break;
        }
    case 13:
        {
            cout << "thirdteen ";
            break;
        }
    case 14:
        {
            cout << "fourteen ";
            break;
        }
    case 15:
        {
            cout << "fifteen ";
            break;
        }
    case 16:
        {
            cout << "sixteen ";
            break;
        }
    case 17:
        {
            cout << "seventeen ";
            break;
        }
    case 18:
        {
            cout << "eighteen ";
            break;
        }
    case 19:
        {
            cout << "nineteen ";
            break;
        }
    case 10:
        {
            cout << "ten ";
            break;
        }
    };
}

void Dozen(int n)
{
    switch(n)
    {
    case 2:
        {
            cout << "twenty ";
            break;
        }
    case 3:
        {
            cout << "thirdty ";
            break;
        }
    case 4:
        {
            cout << "fourty ";
            break;
        }
    case 5:
        {
            cout << "fifty ";
            break;
        }
    case 6:
        {
            cout << "sixty ";
            break;
        }
    case 7:
        {
            cout << "seventy ";
            break;
        }
    case 8:
        {
            cout << "eighty ";
            break;
        }
    case 9:
        {
            cout << "ninety ";
            break;
        }
    };
}

void Hundr(string n)
{
    if(n[0]=='0')
    {
        if(n[1]=='0') Numb(atoi(n[2]));
        else if(n[1]=='1') Tens(10+atoi(n[2]));
        else {Dozen(atoi(n[1])); Numb(atoi(n[2])); }
    }
    else
    {
    Numb(atoi(n[0]));
    cout << "hundred ";
    if(n[1]=='0') Numb(atoi(n[2]));
        else if(n[1]=='1') Tens(10+atoi(n[2]));
        else {Dozen(atoi(n[1])); Numb(atoi(n[2])); }
    }
}

int main()
{
    string n;
    cin >> n;
    if(n=="0")
    {
        cout << "zero";
        return 0;
    }
    if(n[0]=='-')
    {
        cout << "negative ";
        n.erase(0, 1);
    }
    int len = n.length();
    bool check=false;
    if(len<=9 && len>=7)
    {
        switch(len)
        {
        case 7:
            {
                Numb(atoi(n[0]));
                n.erase(0, 1);
                break;
            }
        case 8:
            {
                if(n[0]=='1') Tens(atoi(n[0])*10+atoi(n[1]));
                else {Dozen(atoi(n[0])); Numb(atoi(n[1])); }
                n.erase(0, 2);
                break;
            }
        case 9:
            {
                Hundr(n.substr(0, 3));
                n.erase(0, 3);
                break;
            }
        };
        cout << "million ";
        len=6;
        check = true;
    }
    if((len>=4 && len<=6) || check)
    {
        switch(len)
        {
        case 4:
            {
                Numb(atoi(n[0]));
                n.erase(0, 1);
                cout << "thousand ";
                break;
            }
        case 5:
            {
                if(n[0]=='1') Tens(atoi(n[0])*10+atoi(n[1]));
                else {Dozen(atoi(n[0])); Numb(atoi(n[1])); }
                n.erase(0, 2);
                cout << "thousand ";
                break;
            }
        case 6:
            {
                if (n[0]=='0' && n[1]=='0' && n[2]=='0')
                    {n.erase(0, 3); break;}
                else{
                Hundr(n.substr(0, 3));
                n.erase(0, 3);
                cout << "thousand ";
                break;}
            }
        };
        len=3;
    }
    if((len>=1 && len<=3) || check)
    {
        switch(len)
        {
        case 1:
            {
                Numb(atoi(n[0]));
                break;
            }
        case 2:
            {
                if(n[0]=='1') Tens(atoi(n[0])*10+atoi(n[1]));
                else {Dozen(atoi(n[0])); Numb(atoi(n[1])); }
                break;
            }
        case 3:
            {
                Hundr(n.substr(0, 3));
                break;
            }
        };
    }
    return 0;
}
