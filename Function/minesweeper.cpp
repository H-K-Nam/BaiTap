#include <bits/stdc++.h>
#define Max 100

using namespace std;

void print(char a[][Max], int &m, int &n)
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

char itoa(int n)
{
    char x;
    x= (char)n+48;
    return x;
}

int mine(char a[][Max], int row, int col)
{
    int cnt=0;
    for(int i=1;i<=row;i++)
        for(int j=1;j<=col;j++)
        if(a[i][j]=='*') cnt++;
    return cnt;
}

int cntMine(char a[][Max], int row, int col, int iRow, int iCol)
{
    int dem=0;
    for(int i=iRow-1;i<=iRow+1;i++)
        for(int j=iCol-1;j<=iCol+1;j++)
        if(a[i][j]=='*') dem++;
    return dem;
}

int main()
{
    srand(time(NULL));
    int m, n, k; cin >> m >> n >> k;
    char a[Max][Max], b[Max][Max];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            {a[i][j]='.'; b[i][j]='.';}

    do
    {
        int randRow = rand()%m+1;
        int randCol = rand()%n+1;
        a[randRow][randCol] = '*';
    }
    while (mine(a, m, n)<k);


    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]=='.'){
            int x=cntMine(a, m, n, i, j);
            a[i][j]=itoa(x);}
        }
    }
    print(b, m, n);
    int attempt = 0;
    do
    {
        cout << "Please guess: ";
        int row, col; cin >> row >> col;
        if(a[row][col]=='*')
        {
            cout << "You're dead!\n";
            print(a, m, n);
            return 0;
        }
        else{
            b[row][col]=a[row][col];
            print(b, m, n);
            attempt++;
        }
    }
    while (attempt<=m*n-k);
    return 0;
}

