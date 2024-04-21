#include <iostream>

using namespace std;

bool Prime(unsigned int n)
{
    if(n==0 || n==1) return false;
    for(int i=2;i<n;i++)
        if(n%i==0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=2;i<n;i++){
    if(Prime(i)) cout << i << " ";
    }
    return 0;
}
