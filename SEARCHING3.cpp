#include<iostream>

using namespace std;

long n;
long ans, tmp;

int main() {
    int T;
    cin >> T;
    while (T--) {
        ans = 0;
        cin >> n;
        for (long i = 1; i < n; i++) {
            cin >> tmp;
            if (ans == 0 && tmp != i) ans = i;
        }
        if (ans == 0) ans = n;
        cout << ans << endl;
    }
}