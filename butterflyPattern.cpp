// butterfly pattern in c++
#include <iostream>
using namespace std;
int main(){
    int n=8;

// 1st half
    for (int i = 0; i < n/2; i++)
    {
        // stars
        for (int a = 0; a < n/2; a++)
        {
            if (a<=i)
            {
                cout << "*";
            }
            
        }

        //breaks
        for (int b = 0; b < 6-2*i; b++)
        {
            cout << " ";
        }

        //spaces 
        for (int c = 0; c < n/2; c++)
        {
            if (i>=c)
            {
                cout << "*";
            }
            
        }
        
        
        cout << endl;
    }

    // 2nd half
    for (int j = 0; j < n/2; j++)
    {
        //stars
        for (int a = 0; a < n/2; a++)
        {
            if (a <= 3-j)
            {
                cout << "*";
            }

            
        }

        // breaks
        for (int b = 0; b < 2*j; b++)
        {
            cout << " ";
        }
        
        //stars
        for (int c = 0; c < n/2; c++)
        {
         
            if (3-j >= c)
            {
                cout << "*";
            }   
        }
       cout << endl; 
    }
    
    
    return 0;
}
