#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int i=1;
	for(i=1;i<n-1;i++){
		bool left=arr[i-1]%2;
		bool right=arr[i+1]%2;
		bool curr=arr[i]%2;
		if(left!=right){
			if(curr==left) cout<<i+2;
			else cout<<i;
			return 0;
		}
	}
	cout<<n-1;
	return 0;
}