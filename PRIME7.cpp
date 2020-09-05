#include<bits/stdc++.h> 

using namespace std;
int sphenic(int n){
	int j = 2;
	int dem = 0;
	while(n>1){
		if(n%j==0){
			dem++;
			n = n/j;
		}
		if(n%j==0)
			return 0;
		j++;
	}
	if(dem == 3) return 1;
	else return 0;
}
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n; 
        cout<<sphenic(n);
        cout<<endl;
    }
    return 0;
}
