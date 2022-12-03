#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	int watch=1, mins=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int l,r;
			cin>>l>>r;
			while(watch+x<=l){
				watch+=x;
			}
			mins+=r-watch;
			mins++;
			watch=r+1;
		}
	}
	cout<<mins;

	return 0;
}