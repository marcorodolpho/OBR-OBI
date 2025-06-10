#include <bits/stdc++.h>
using namespace std;


int main () {

    int Vc, Ec, Sc;
    cin >> Vc >> Ec >> Sc;

    int Vf, Ef, Sf;
    cin >> Vf >> Ef >> Sf;

    if (0 <= Vc && 0 <= Vf && 0 <= Ec & 0 <= Ef && Vc <=38 && Vf <=38 && Ec <=38 && Ef <=38 && -100 <= Sc && -100 <= Sf && Sc <= 100 && Sf <= 100) {
        int pointsCor = (Vc * 3) + Ec;
        int pointsFla = (Vf * 3) + Ef;
        
        if (pointsCor > pointsFla) {
            cout << "C";
        } else if (pointsFla > pointsCor) {
            cout << "F";
        } else if (pointsCor == pointsFla) {
            if (Sc > Sf) {
                cout << "C";
            } else if (Sf > Sc) {
                cout << "F";
            } else {
            cout << "=";
            }    
        } else {
            return 0;
        }
    }
}
