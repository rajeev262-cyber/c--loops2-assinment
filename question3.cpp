#include<iostream>
using namespace std ;
int main ()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    int fact = 1 ;
    int a = n ;
    for (int i =1 ; i<=n ; i++)
    {
        fact = fact * i ;
        cout << fact << endl ;
    }
    if (a==0) cout << 1 ;
    return 0 ;
}