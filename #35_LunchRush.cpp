#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int maxJoy=INT_MIN, joy;
	for(int i=0;i<n;i++){
		int f,t;
		cin>>f>>t;
		if(t>k) joy=f-(t-k);
		else joy=f;

		maxJoy=max(maxJoy,joy);
	}

	cout<<maxJoy;

	return 0;
}