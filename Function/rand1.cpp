#include <bits/stdc++.h>

using namespace std;

void random(int n)
{
    srand(time(NULL));
    cout << rand()%n;
}

int main()
{
    int n; cin >> n;
    random(n);
    return 0;
}

