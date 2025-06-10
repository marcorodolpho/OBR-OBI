#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int A;
    cin >> A;

    int B;
    cin >> B;

   if (1 <= A && A <= 1000000000 && 1 <= B & B <= 1000000000) { 

        string A_str = to_string(A);
        string B_str = to_string(B);

        vector<int> digitos1, digitos2;
        
        

        for (char x : A_str) digitos1.push_back(x - '0');
        for (char y : B_str) digitos2.push_back(y - '0');


        int size1 = digitos1.size();
        int size2 = digitos2.size();

        if (size1 < size2) {
            digitos1.insert(digitos1.begin(), size2 - size1, 0);
        } else if (size2 < size1) {
            digitos2.insert(digitos2.begin(), size1 - size2, 0);
    }
        
        vector<int> newA, newB;

        for (size_t i = 0; i < digitos1.size(); i++) {

            if (digitos1[i] == digitos2[i]) {

                newA.push_back(digitos1[i]);
                newB.push_back(digitos2[i]);    
                
                
            } else if (digitos1[i] > digitos2[i]) {
                newA.push_back(digitos1[i]);

            } else {
                newB.push_back(digitos2[i]);
            }
        }

        int resA = 0, resB = 0;

        if (newA.empty()) {
            resA = -1;
        } else {
            for (int d : newA) resA = resA * 10 + d;
        }
        
        
        if (newB.empty()) {
            resB = -1;
        } else {
            for (int d : newB) resB = resB * 10 + d;
        }

        cout << resB << " " << resA << endl;
   }

    return 0;
}
   
