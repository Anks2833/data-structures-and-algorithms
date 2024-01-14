//Implement the following pattern

/*

1
23
345
4567

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
        int val = i;

        while(j <= i){
            cout << val;
            val++;
            j++;
        }

        cout << endl;

        i++;

    }


    return 0;
    }