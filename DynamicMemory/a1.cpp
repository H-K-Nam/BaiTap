#include <bits/stdc++.h>
#define Max 100

using namespace std;


char* concat(const char *a, const char *b)
{
    int len=strlen(a)+strlen(b);
    char *n = new char[len];
    strcpy(n, a);
    strcat(n, b);
        delete[] n;
    return n;

}


int main()
{
    char a[] = "Hello ";
    char b[] = "world!";
    cout << concat(a, b);
    return 0;
}

