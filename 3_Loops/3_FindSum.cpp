// Find the sum of numbers from 1 to n

#include<iostream>
 
using namespace std;
 
int main()
{
 
    int a;
    int i = 1;
    int sum = 0;

    cout << "Find the sum from 1 to?: ";
    cin >> a;

    while(i <= a){
        sum+=i;
        i++;
    }

    cout <<sum;

return 0;
}