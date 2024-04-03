#include <bits/stdc++.h>

using namespace std;

bool mirrorNum(int n)
{
    int x=n;
    int tmp=0;
    while(n>0)
    {
        tmp=tmp*10+(n%10);
        n/=10;
    }
    if(tmp==x) return true; else return false;
}


int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
    int a, b; cin >> a >> b;
    int dem(0);
    for(int i=a;i<=b;i++)
        if(mirrorNum(i))
    {
        dem++;
    }
    cout << dem << endl;
    }
    return 0;
}
