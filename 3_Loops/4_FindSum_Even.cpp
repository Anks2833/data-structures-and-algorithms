// Find sum of even numbers

#include<iostream>
 
using namespace std;
 
int main()
{
 
    int a;
    int i = 0;
    int sum = 0;

    cout << "Find the sum from 0 to?: ";
    cin >> a;

    while(i <= a){
        sum+=i;
        i+=2;
    }

    cout <<sum;

return 0;
}