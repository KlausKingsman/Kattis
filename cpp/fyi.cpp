#include <iostream>
#include <string>

using namespace std;

int main(){

    int number;
    int bob = 0; // came up with bob on fly lol
    cin >> number;

    for (int i=0; i<4; i++){
        number=number/10;
    }

    for (int j=0; j<3; j++){
        if (number % 555 == 0)
        bob++;
    }

    if (bob == 3)
        cout << 1;
    else
        cout << 0;
    
    getchar();
    getchar();

}