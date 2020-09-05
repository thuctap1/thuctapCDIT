#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        long ans[1000] = {-1};
        long tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            for (int j = 0; j < k; j++) {
                if (ans[j] == -1 || ans[j] <= tmp) {
                    for (int l = k - 1; l > j; l--) ans[l] = ans[l - 1];
                    ans[j] = tmp;
                    break;
                }
            }
        }
        for (int i = 0; i < k; i++) cout << ans[i] << " ";
        cout << endl;
    }
}