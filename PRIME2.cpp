#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        if (n < 2){
            cout<<n<<endl;
            continue;
        }
        long long largestPrime = 1;
        while (n % 2 == 0) {
            largestPrime = 2;
            n = n / 2;
        }
        for (long long i = 3; i <= sqrt(n); i=i+2) {
            while (n % i == 0) {
                largestPrime = i;
                n = n / i;
            }
        }
        // nếu n là số nguyên tố > 2
        if (n > 2) largestPrime = n;
        cout << largestPrime << endl;
    }
    return 0;
}