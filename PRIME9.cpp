#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int oldN = n;
        // mảng để đánh dấu luỹ thừa của một thành phần
        int power[10001];
        // set mảng bằng 0
        memset(power, 0, sizeof(power));

        while (n % 2 == 0) {
            power[2]++;
            n = n / 2;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2) {
            while (n % i == 0) {
                power[i]++;
                n = n / i;
            }
        }
        // nếu n là số nguyên tố > 2
        if (n > 2) power[n]++;
        // in ra kết quả
        for (int i = 2; i <= oldN; i++) {
            if (power[i] > 0) {
                cout << i << " " << power[i] << " ";
            }
        }
        cout << endl;
    }
}