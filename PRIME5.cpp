#include<bits/stdc++.h> 

using namespace std;

int so_nguyen_to(int n){
    int temp = sqrt(n);
    if (n < 2)
        return 0;
    for(int i = 2;i <= temp;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n; cin >> m;
        for(int i = n; i <= m; i++){
        	if(so_nguyen_to(i)){
        		cout<<i<<" ";
			}
		}
        cout<<endl;
    }
    return 0;
}
