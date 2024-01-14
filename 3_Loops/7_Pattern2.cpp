//Implement this pattern

            /*
            111
            222
            333            
            */


#include<iostream>
 
using namespace std;
 
int main()
{
 
    int n;
    int i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    while(i <= n){

        int j = 1;

        while(j <= n){

            cout << i;
            j++;
        }
        cout << endl;

        i++;
        
    }
 
return 0;
}