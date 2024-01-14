// Implement the following pattern

                    /*
                    
                    1234
                    1234
                    1234
                    1234
                    
                    */

    #include<iostream>
     
    using namespace std;
     
    int main()
    {
     
     int n;
     int i = 1;

     cout << "Enter n: ";
     cin >> n;

     while(i <= n){

        int j = 1;

        while(j <= n){

            cout << j;
            j++;
        }
        cout << endl;

        i++;

     }
     
    return 0;
    }
                    