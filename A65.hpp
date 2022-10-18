#include <iomanip>
#include <iostream>
using namespace std;

//initiate swap two function
void swaptwo(int&, int&);
void swap(int&, int&, int&);

// complete two functions 
void swap(int &a, int &b, int &c)
{
    string result;
    swaptwo(a, b);
    swaptwo(a, c);

}

// setting up swaptwo() ; to swap two values (a, b) to (b, a)
void swaptwo(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}