#include <bits/stdc++.h>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;  //p va p2 cung tro toi 1 đia chi, khi xoa p -> p2 tro đen vung nho khong xac đinh.
    cout << *p2;
    delete p2;
    return 0;
}

