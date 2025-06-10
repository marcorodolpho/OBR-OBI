#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main () {
    int A;
    cin >> A;

    int B;
    cin >> B;

    int contador = 0;

    if (1 <= A && 1 <= B && A <= 100000000 && B <= 100000000) {
        for (int i = 1;; i++) {
            
            long long potencia = 1LL * i * i * i * i * i * i;

            if (potencia > B) break;

            if (potencia >= A) {
                contador++;
            }
        }
    }

    cout << contador << endl;
    return 0;
}