#include <bits/stdc++.h>

using namespace std;

void triangle(int n)
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2*n-1;++j)
        if(j>=n-i-1 && j<=n+i-1) cout << "*";
        else cout << " ";
        cout << endl;
    }

}

int main()
{
    int n; cin >> n;
    triangle(n);
    return 0;
}

