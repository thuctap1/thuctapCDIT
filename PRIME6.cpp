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
    return n;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n; 
        for(int i = 2; i < n; i++){
        	int p = so_nguyen_to(i);
        	if(p){
        		int q = n - i;
        		if(so_nguyen_to(q)){
					cout<<p<<" "<<q;
					break;
				}
			}
		}
        cout<<endl;
    }
    return 0;
}
