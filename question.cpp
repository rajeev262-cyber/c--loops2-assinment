#include<iostream>
using namespace std ;
int main ()
{
    int  n;
    cout << "enter the nth term ";
    cin >> n ;
    int a = 1 ;
    int b = 1;
    int sum ;
    cout << 1 << " " << 1 << " " ;
    for (int i = 1 ; i<=n-2;i++)
    {
        sum = a + b;
        a = b ;
        b = sum ;
        cout << sum << " " ;
    }
    return 0 ;
}