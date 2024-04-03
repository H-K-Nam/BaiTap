#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.length();
    for(int i=0;i<n;i++)
        if(s[i]!=s[n-i-1])
        {
            cout << "No" << endl;
            return 0;
        }
    cout << "Yes" << endl;
    return 0;
}
