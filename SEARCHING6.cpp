#include<iostream>
#include<cstdlib>

using namespace std;

long A[1000];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> A[i];
        long ans = A[0] + A[1];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long tmp = A[i] + A[j];
                if (abs(tmp) < abs(ans)) ans = tmp;
            }
        }
        cout<<ans<<endl;
    }
}