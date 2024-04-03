#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int n[a][b];
    int num=1; int x(0), y(b-1), z(1), t(a-1);
    while(num<=a*b)
    {
        for(int j=x;j<=y;j++)
        {
            n[x][j]=num; num++;
        }
        for(int i=z;i<=t;i++)
        {
            n[i][y]=num; num++;
        }
        y--;
        for(int j=y;j>=x;j--)
        {
            n[t][j]=num; num++;
        }
        t--;
        for(int i=t;i>=z;i--)
        {
            n[i][x]=num; num++;
        }
        z++; x++;

    }





    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            cout << n[i][j] << " ";
        cout << endl;
    }
    return 0;
}
