#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long n;
        cin >> n;
        long sm1, sm2 = -1, tmp;
        cin >> sm1;
        for (long i = 1; i < n; i++) {
            cin >> tmp;
            if (tmp < sm1) {
                sm2 = sm1;
                sm1 = tmp;
            } else if (tmp < sm2){
                sm2 = tmp;
            }
        }
        if (sm2 == -1) cout << -1 << endl;
        else cout << sm1 << " " << sm2 << endl;
    }
}