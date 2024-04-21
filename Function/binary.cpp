#include <bits/stdc++.h>

using namespace std;

string binary(int n)
{
    string str;
    while(n>0)
    {
        str+=to_string(n%2);
        n/=2;
    }
    string tmp;
    int len=str.length();
    for(auto i=len-1;i>=0;i--)
        tmp+=str[i];
    return tmp;
}

int main()
{
    int n; cin >> n;
    cout << binary(n);
    return 0;
}

