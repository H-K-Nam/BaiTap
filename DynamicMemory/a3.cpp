#include <bits/stdc++.h>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
//  Vi c chi la con tro tro den 1 phan cua vung nho ma a tro den, khi xoa c se chi giai phong
//  vung nho duoc cap phat cho c ma khong giai phong vung nho duoc cap phat cho a.
    return 0;
}

