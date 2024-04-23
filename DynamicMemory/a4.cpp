#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10;
    int *a = new int;
    a=&n;
    cout << *a;
    delete a;
    // delete chi giai phong vung nho duoc cap phat dong, ma a lai dang tro truc tiep
    // vao dia chi cua bien n
    return 0;
}

