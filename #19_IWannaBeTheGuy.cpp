#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p,r;
	cin>>n>>p;
	set<int> X;
	for(int i=0;i<p;i++){
		int x;
		cin>>x;
		X.insert(x);
	}
	cin>>r;
	for(int i=0;i<r;i++){
		int y;
		cin>>y;
		X.insert(y);
	}
	int i=1;
	for(auto x : X){
		if(x==i){
			i++;
		}
	}
	if(i==n+1) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;
}