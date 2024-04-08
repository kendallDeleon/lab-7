#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> nombres = {"Juan", "Maria", "Pedro", "Ana", "Luis"};

    cout << "Nombres sin ordenar:" << endl;
    for (const string& nombre : nombres) {
        cout << nombre << endl;
    }

    sort(nombres.begin(), nombres.end());

    cout << "\nNombres ordenados:" << endl;
    for (const string& nombre : nombres) {
        cout << nombre << endl;
    }

    return 0;
}
