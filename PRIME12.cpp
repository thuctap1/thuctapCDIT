#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        int count = 0;
        int result = -1;
        while (n % 2 == 0) {
            count++;
            if (count == k){
                result = 2;
                break;
            }
            n = n / 2;
        }
        if (count < k){
            for (int i = 3; i<= sqrt(n);i=i+2){
                while (n % i == 0){
                    count ++;
                    if (count == k){
                        result = i;
                        break;
                    }
                    n=n/i;
                }
            }
        }
        if (n>2){
            count++;
            if (count == k) result = n;
        }
        cout<<result<<endl;
    }
    return 0;
}
