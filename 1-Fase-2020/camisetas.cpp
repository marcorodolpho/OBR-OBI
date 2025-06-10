#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main () {

    int N_premid;
    cin >> N_premid;

    vector<int> sizes;

    for (int i = 1;; i++) {
        int d;
        cin >> d;

        sizes.push_back(d);
    }

    int P, M;
    cin >> P;
    cin >> M;

     if (1 <= N_premid && N_premid <= 1000 && 0 <= P, M && P, M <= 1000 && N_premid <= P + M) {
        if ((sizes.size() + 1) = N_premid) {
            cout << "S";
        } else {
            cout << "N";
        }
     }

    return 0;
}
