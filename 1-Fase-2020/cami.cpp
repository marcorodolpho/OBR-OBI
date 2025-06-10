#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main () {

    int N_premid;
    cin >> N_premid;

    vector<string> sizes;


    string d;
    cin >> d;

    sizes.push_back(d);

    int P, M;
    cin >> P;
    cin >> M;

    string res = 0;
    for (string d : sizes) {
        res = d;
        cout << res;
    }

    cout << P << endl << M;

    


    return 0;
}