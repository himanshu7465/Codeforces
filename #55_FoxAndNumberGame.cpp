#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,g,x;
	cin>>n;
	int arr[n],mini=INT_MIN,sum=0;
	for(int i=0;i<n;i++){
		cin>>x;
		g=__gcd(g,x);
	}
	
	cout<<n*g;
		
	return 0;
}