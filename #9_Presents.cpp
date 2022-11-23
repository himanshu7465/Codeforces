#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	unordered_map<int,int>mpp;
	for(int i=1;i<=n;i++) mpp[arr[i-1]]=i;
	int i=1;
	unordered_map<int,int> :: iterator itr;
	while(n--){
		itr=mpp.find(i);
		cout<<itr->second<<" ";
		i++;
	}
	return 0;
}