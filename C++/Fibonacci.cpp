#include <iostream>
#include <vector>
using namespace std;

int Fibonaci(int);
int main()
{
    int number;
    cin >> number;
    number = Fibonaci(number);
    if(number)
    cout << number;
         
    return 0;
}

int Fibonaci(int a)
{   
    int array[25];
    int ix=0;
    if( a <=0 )
    {   
        cerr << "Wrong number"; 
        return 0 ;
    }
    array[1] = 1, array[2] = 1;
    for(ix=3;ix<=a;ix++)
    {
        array[ix] = array[ix-1] + array[ix-2];
    }
    return array[a];
}