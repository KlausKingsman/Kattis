#include <iostream>
#include <string>

using namespace std;

int main(){
    int G, T, N;
    int item = 0, itemCount = 0; // making these = 0 worked
    int limit = 0;

    cin >> G >> T >> N;

    for (int i=0; i<N; i++){
        cin >> item;
        itemCount = item + itemCount;
    }

    limit = ((G - T)*(0.9)) - itemCount;

    cout << limit << endl;

    getchar();
    getchar();

}