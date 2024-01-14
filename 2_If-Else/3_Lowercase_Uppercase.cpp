//To determine whether a given character is uppercase or lowercase

#include<iostream>
 
using namespace std;
 
int main()
{
 
    char ch;

    cout << "Enter the Character: ";
    cin >> ch;

    if(ch >= 97 && ch <= 122){
        cout << ch << " " << "is a Lower-Case letter";
    }

    else if (ch >= 65 && ch <= 90){
        cout << ch << " " << "is an Upper-Case letter";
    }

    else if (ch >= 48 && ch <= 57){
        cout << ch << " " << "is a Number";
    }

    else{
        cout << "Invalid";
    }


    
 
return 0;
}