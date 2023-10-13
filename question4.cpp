#include<iostream>
using namespace std ;
int main ()
{
    for (int i =1 ; i<= 500 ; i++)
    {
     
        int temp = i;
        int a = 0 ;
        while (temp > 0)
        {
          int  ld = temp % 10 ;
            a += ld * ld * ld ;
            temp /= 10 ;
        }
        if (a== i) cout << a << endl ;
    }
    
    
    return 0 ;
}