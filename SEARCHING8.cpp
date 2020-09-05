#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long x;
        cin >> x;
        int count = 0;
        long tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp == x) count++;
        }
        if (count == 0) cout << -1 << endl;
        else cout << count << endl;
    }
}