#include <bits/stdc++.h>
using namespace std;

int main() {
	 int hour, min, sec;
     cin >> hour >> min >> sec;

     int time;
     cin >> time;

    sec = sec + time;


     if (0 <= hour && 0 <= min && 0 <= sec && 0 <= time && hour <= 23 && min <= 59 && sec <= 59 && time <= 1000000000) {
        if (sec > 59) {
            
            int sm = sec / 60;
            sec = sec % 60;

            min = min + sm;

            if (min > 59) {
                int mh = min / 60;
                min = min % 60;

                hour = hour + mh;
            }
        }

        cout << hour << endl << min << endl << sec;
     }
    
     return 0;
}