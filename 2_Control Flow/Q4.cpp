/*Write a do-while loop that keeps asking the user for a password until they enter the
correct one. Limit to 3 attempts.
HINT Use a counter and break when correct or limit reached*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string pass_input;
    string correct_pass = "Admin123";
    int attempt = 0;
    
    do{
        cout << "Enter correct passworld : ";
        cin >> pass_input;
        attempt++;

        if(pass_input == correct_pass){
            cout << "ha chal aaja andar" << endl;
            break;
        }
        else{
            cout << "Galat hai bhai kya kar raha hai" << endl;
        }
    }
    while(attempt < 3);

    if (pass_input != correct_pass ){
        cout << "Chal ab bohot hogaya nikal ab tu." << endl;
    }
    
    return 0;
}