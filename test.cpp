#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int a[100];
    memset(a,  2, sizeof(a));
    cout << a[0] <<endl;
    cout << a[1] <<endl;
    cout << a[10] <<endl;
    cout << a[50] <<endl;
    cout << a[99] <<endl;
    cout << a[100];

}
