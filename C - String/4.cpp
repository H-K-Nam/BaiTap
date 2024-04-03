#include <bits/stdc++.h>
#define Max 100

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    char n[Max][Max];
    for(int i=0;i<a+2;i++)
        for(int j=0;j<b+2;j++)
        if(i==0 || j==0 || i==a+1 || j==b+1) n[i][j]='-';
        else cin >> n[i][j];
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(n[i][j]=='*') cout << "* ";
            else {
            int dem=0;
            for(int x=i-1;x<=i+1;x++)
            {
                for(int y=j-1;y<=j+1;y++)
                    if(n[x][y]=='*') dem++;
            }
            cout << dem << " ";
        }
        }
        cout << endl;
    }
    return 0;
}
