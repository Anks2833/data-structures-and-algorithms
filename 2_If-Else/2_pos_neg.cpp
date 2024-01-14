// To tell whether a number is positive or negative

#include<iostream>
 
using namespace std;
 
int main()
{
 
    int a;

    cout << "Enter the value of the number ";
    cin >> a;

    if (a > 0)
    {
        cout << a << " " << "is positive";
    }

    else if (a < 0)
    {
        cout << a << " " << "is negative";
    }

    else{
        cout << a << " " << "is zero";
    }
    
    

return 0;
}