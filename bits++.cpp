#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    int op;
    cin >> op;
    for (int i = 0; i < op; i++) {
        string opt;
        cin >> opt;
        if (opt.find("++") != string::npos)
            x += 1;
        else
            x -= 1;
    }
    cout << x << endl;
    return 0;
}
