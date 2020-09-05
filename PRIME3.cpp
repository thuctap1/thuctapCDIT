#include<iostream>
#include<cstring>

using namespace std;
bool mark[10000];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        memset(mark, true, sizeof(mark));
        for (int i = 2; i * i <= n; i++) {
            if (mark[i]) {
                for (int j = i * i; j <= n; j += i) {
                    mark[j] = false;
                }
            }
        }
        for (int i = 2; i<=n;i++){
            if (mark[i]) cout<<i<<" ";
        }
        cout<<endl;
    }
}

