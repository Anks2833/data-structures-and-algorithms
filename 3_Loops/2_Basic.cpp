// To print even numbers using while loop

#include<iostream>
 
using namespace std;
 
int main()
{
 
    int a;
    int b = 0;

    cout << "Enter a: ";
    cin >> a;

    while(b <= a){
        cout << b;
        b+=2;
        cout << "\n";
    }

return 0;
}