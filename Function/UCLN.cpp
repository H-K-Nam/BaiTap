#include <bits/stdc++.h>

using namespace std;

int check(int a, int b)
{
    if(a>b) return a;
    return b;
}

int UCLN(int a, int b)
{
    int x=check(a, b);
    while(x>1)
    {
        if(a%x==0 && b%x==0) return x;
        else x--;
    }
    return 1;
}

int main()
{
    int a, b; cin >> a >> b;
    cout << UCLN(a, b);
    return 0;
}
