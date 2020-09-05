#include<iostream>

using namespace std;

long A[1000000];

long binarySearch(long a[], long l, long r, long x) {
    if (r >= l) {
        long mid = l + (r - l) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] > x) return binarySearch(a, l, mid - 1, x);
        return binarySearch(a, mid + 1, r, x);
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long n, x;
        cin >> n >> x;
        cin >> A[0];
        long reset_index = -1;
        for (long i = 1; i < n; i++) {
            cin >> A[i];
            if (reset_index == -1 && A[i] < A[0]) reset_index = i;
        }

        if (reset_index == -1) {
            cout << binarySearch(A, 0, n - 1, x) + 1 << endl;
        } else if (x == A[0]) {
            cout << 1 << endl;
        } else if (x > A[0]) {
            cout << binarySearch(A, 0, reset_index - 1, x) + 1 << endl;
        } else {
            cout << binarySearch(A, reset_index, n - 1, x) + 1 << endl;
        }

//        if (reset_index == -1) {
//            cout << x << endl;
//        } else if (x >= A[0]) {
//            cout << x - A[0] + 1 << endl;
//        } else {
//            cout << reset_index + x << endl;
//        }
    }
}