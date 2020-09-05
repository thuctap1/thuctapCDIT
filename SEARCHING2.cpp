#include<iostream>

using namespace std;

long n, x, i;
long A[100000];
long ans;

int main() {
    int T;
    cin >> T;
    while (T--) {
        ans = -1;
        cin >> n >> x;
        for (i = 0; i < n; i++) {
            cin >> A[i];
            if (ans == -1 && A[i] == x) {
                ans = 1;
            }
        }
        cout << ans << endl;
    }
}