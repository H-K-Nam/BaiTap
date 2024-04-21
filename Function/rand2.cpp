#include <bits/stdc++.h>
#define Max 100

using namespace std;

void random(int *a, int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        *(a+i)=rand()%49;
        cout << *(a+i) << " ";
    }
    cout << endl;
}

void func(int *a, int n)
{
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
            if((*(a+i)+*(a+j)+*(a+k))%25==0)
                cout << *(a+i) << " " << *(a+j) << " " << *(a+k) << '\n';
}

int main()
{
    int n; cin >> n;
    int a[Max];
    random(a, n);
    func(a, n);
    return 0;
}

