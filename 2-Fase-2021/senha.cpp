#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main () {

    int N, M, K;
    cin >> N >> M >> K; 
    
    string password;
    cin >> setw(N + 1) >> password;
    
    vector<string> pbl;

    if (password.length() == N) {
        if (1 <= N && N <= 500 && 1 <= M && M <= N && 1 <= K && K <= 26) {
            for (int i = 0; i < M; i++) {
                string w;
                cin >> w;

                pbl.push_back(w);
            }
            

            
            string res;
            for (string d : pbl) {
                res = d;
                cout << res << endl;
            }


        }
    }





    return 0;
}

