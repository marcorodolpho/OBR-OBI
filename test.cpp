#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> nums = {a, b, c, d};

    bool valid = true;

    for (int i : nums) {
        if (i < 1 && i > 100) {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << "F";
        return 0;
    }

    if ((a == c && b != d)||(b == d && a != c)) {
        cout << "V";
    } else  {
        cout << "F";
    }
}