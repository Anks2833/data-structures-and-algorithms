// Implement the following pattern

/*

1
22
333
4444

*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    int i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {

        int j = 1;

        while (j <= i)
        {

            cout << i;
            j++;
        }

        cout << endl;

        i++;
    }

    return 0;
}