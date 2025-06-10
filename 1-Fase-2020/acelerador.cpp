#include <iostream>

using namespace std;


int main () {

    int dof;
    cin >> dof;
    
    if (6 <= dof && dof <= 800008) {
        cout << (dof - 5)/8 << endl;
    }
    
    return 0;

}