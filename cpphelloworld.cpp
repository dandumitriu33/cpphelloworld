#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Hello world! " + to_string(i) << endl;
    }

    return 0;
}