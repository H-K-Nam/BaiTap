#include <bits/stdc++.h>
#define Max 100

using namespace std;

int strLength(const char a[])
{
    int len = 0;
    while(a[len]!='\0')
    {
        len++;
    }
    return len;
}

void reverse(const char a[])
{
    char *ch = new char[Max];
    int len = strLength(a);
    for(int i=len-1;i>=0;--i)
        *(ch+len-i-1)=*(a+i);
    *(ch+len) = '\0';
    cout << "Reverse: " << ch << endl;
    delete[] ch;
}

void delete_char(const char a[], const char c)
{
    int len=strLength(a);
    cout << "Delete_char: ";
    for(int i=0;i<len;i++)
    {
        if(*(a+i)!=c) cout << *(a+i);
    }
    cout << endl;
}

void pad_right(const char a[], const int n)
{
    int len=strLength(a);
    if(len<n);
    {
        char *ch = new char[Max];
        for(int i=0;i<len;i++)
            *(ch+i)=*(a+i);
        for(int i=len;i<n;i++)
            *(ch+i)=' ';
        *(ch+n)='\0';
        cout << "Pad_right: " << ch << '.' << endl;
        delete[] ch;
    }
}

void pad_left(const char a[], const int n)
{
    int len=strLength(a);
    if(len<n)
    {
        char *ch = new char[Max];
        for(int i=0;i<n-len;i++)
            *(ch+i)=' ';
        for(int i=n-len;i<n;i++)
            *(ch+i)=*(a+i-n+len);
        *(ch+n) = '\0';
        cout << "Pad_left: " << ch << endl;
        delete[] ch;
    }
}

void truncate(const char a[], const int n)
{
    int len=strLength(a);
    if(len>n)
    {
        cout << "Truncate: ";
        for(int i=0;i<n;i++)
            cout << *(a+i);
        cout << endl;
    }
}

bool is_palindrome(const char a[])
{
    int len=strLength(a);
    for(int i=0;i<len/2;i++)
    {
        if(*(a+i)!=*(a+len-i-1))
        {
            return false;
        }
    }
    return true;
}

void trim_left(const char a[])
{
    if(*a==' ')
    {
        cout << "Trim_left: ";
        int len=strLength(a);
        int x=1;
        while(*(a+x)==' ')
            x++;
        for(int i=x;i<len;i++)
            cout << *(a+i);
        cout << endl;
    }
}

void trim_right(const char a[])
{
    int len=strLength(a);
    if(*(a+len-1)==' ')
    {
        cout << "Trim_right: ";
        int x=len-2;
        while(*(a+x)==' ')
            x--;
        for(int i=0;i<=x;i++)
            cout << *(a+i);
        cout << '.' << endl;
    }
}

int main()
{
    char a[Max]; cin.getline(a, Max);
    reverse(a);
    char ch; cin >> ch;
    delete_char(a, ch);
    int x; cin >> x;
    pad_right(a, x);
    int y; cin >> y;
    pad_left(a, y);
    int z; cin >> z;
    truncate(a, z);
    cout << "Is_palindrome: " << boolalpha << is_palindrome(a) << endl;
    trim_left(a);
    trim_right(a);
    return 0;
}

