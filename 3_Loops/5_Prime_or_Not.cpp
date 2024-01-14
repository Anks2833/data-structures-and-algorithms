// Tell whether a number is prime or not

#include<iostream>
 
using namespace std;
 
int main()
{
 
    int a;
    int i = 0;

    cout << "Enter a number to be checked: ";
    cin >> a;

    
    while(i < a){

        if(i <= 1){
            cout << "Not Prime";
        }

        else if(a%i == 0){
            cout << "Not Prime";
        }

        else{
            cout << "Prime";
        }

        i++;
    }

return 0;
}