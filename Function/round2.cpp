#include <bits/stdc++.h>

using namespace std;

double rnd(double n)
{
    double tmp = n;
    while(tmp>1)
    {
        tmp--;
    }
    if(tmp>=0.5) return n+1-tmp;
    else return n-tmp;
}

int main()
{
    double n; cin >> n;
    cout << rnd(n);
    return 0;
}

