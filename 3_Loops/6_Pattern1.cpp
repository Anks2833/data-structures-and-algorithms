//Make this pattern
        /*

        ****
        ****
        ****
        ****

        */

#include<iostream>
 
using namespace std;
 
int main()
{
 
    int a;
    int i = 1;

    cout << "Enter no of rows: ";
    cin >> a;

    while(i <= a){

        int j = 1;

        while(j <= a){
        cout << "*";
        j++;
        }

        cout << endl;

        i++;
    }

 
return 0;
}