#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            i++;
        }
    }

    cout<<"Bilangan ganjil yang ada di stack: "<<i<<" ";

}