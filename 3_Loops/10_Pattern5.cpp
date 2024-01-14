//Implemnt the following pattern

                /*

                    123
                    456
                    789
                    
                */

    #include<iostream>
    
    using namespace std;
    
    int main()
    {
    
    int n;
    int i = 1;
    int count = 1;


    cout << "Enter n: ";
    cin >> n;

    while(i <= n){

        int j = 1;

        while(j <= n){
            cout << count;
            count++;
            j++;
        }

        cout << endl;

        i++;

    }


    
    return 0;
    }