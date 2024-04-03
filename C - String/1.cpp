#include <bits/stdc++.h>
#define Max 10000

using namespace std;

int main()
{
    int n; cin >> n;
    int a[Max];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(a[i]==a[j])
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
