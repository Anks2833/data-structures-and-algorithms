#include<iostream>
 
using namespace std;
 
int main()
{
    int a;
    int b;
 
    // cout << "Hello" <<endl;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    if(a > b){
        cout << "a is greater";
    }

    else if (b > a)
    {
        cout << "b is greater";
    }

    else{
        cout << "a and b are equal";
    }
    
 
 
return 0;
}