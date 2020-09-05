#include<bits/stdc++.h> 

using namespace std;

long long tim_uoc(long long n){
    long long temp = sqrt(n);
    for (long long i = 3; i <= temp; i = i + 2) {
        while (n%i == 0) {
            return i;
        }
    }

    if (n > 2){
    	return n;
	} 
}

int main() {
    int T;
    cin >> T;
    for (int test_case = 0; test_case < T; test_case++) {
        long long n;
        cin >> n;
    	for(long long i = 1; i <= n; i++){
    		if(i == 1){
    			cout<<1<<" ";
			}else if(i%2==0){
				cout<<2<<" ";
			}else{
				cout<<tim_uoc(i)<<" ";
			}
		}
        cout<<endl;
    }
    return 0;
}
