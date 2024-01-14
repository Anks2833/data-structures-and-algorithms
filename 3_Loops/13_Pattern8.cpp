// Implement the following pattern

/*

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    int i = 1;
    int count = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    while(i <= n){

        int j = 1;

        while(j <= i){
            cout << count << " ";
            count++;
            j++;
        }

        cout << endl;

        i++;

    }

    return 0;
}