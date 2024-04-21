#include <bits/stdc++.h>

using namespace std;

double rnd(double n)
{
    double x;
    if(n-floor(n)>=0.5) x=ceil(n);
    else x=floor(n);
    return x;
}

int main()
{
    double n; cin >> n;
    cout << rnd(n);
    return 0;
}

