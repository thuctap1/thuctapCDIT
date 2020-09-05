#include<iostream>
#include<cstring>

using namespace std;

bool prime[1000001];

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        memset(prime, true, sizeof(prime));
        for (long long i = 2; i <= n; i++) {
            if (prime[i]) {
                for (long long j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }
        for (long long i = 2; i * i <= n; i++) {
            if (prime[i]) {
                cout << i * i << " ";
            }
        }
        cout << endl;
    }
}