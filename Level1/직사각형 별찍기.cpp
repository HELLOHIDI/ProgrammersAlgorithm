#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "*" << endl;
        }
        cout << " ";
    }
    return 0;
}
