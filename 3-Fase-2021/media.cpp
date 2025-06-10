#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main() {

    int A, B;
    cin >> A >> B;

    int pos = B - A;
    int C = A - pos;

    if (1 <= A && A <= B && B <= 1000000000) {
        cout << C << endl;
    }


    return 0;
}