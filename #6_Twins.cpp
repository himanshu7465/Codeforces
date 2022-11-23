#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n,greater<int>());
	int ct=0,curr=0;
	for(int i=0;i<n;i++){
		curr= curr + arr[i];
		sum = sum - arr[i];
		if(curr<=sum){
			ct++;
		}
		else {
			cout<<++ct;
			return 0;
		}
	}
	return 0;
}