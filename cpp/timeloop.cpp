
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = " Abracadabra\n"; 
    int times = 0;
    cin >> times;
    
    for(int i=1; i <= times; i++)
        cout << i << s;
    getchar();
    getchar();
    return 0;
}