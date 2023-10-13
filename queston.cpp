#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the  number ";
    cin >> n ;
    int a = n ;
    int ld = 0 ;
    int r = 0 ;
    while (n>0)
    {
        ld = n %10 ;
        r = r*10 + ld ;
        n /= 10 ;
    }
    cout << "required answer is " <<  a + r ;
    return 0 ;
}