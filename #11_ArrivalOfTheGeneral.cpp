#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int maxi=INT_MIN, mini=INT_MAX, k, kmin;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		maxi=max(maxi,arr[i]);
		mini=min(mini,arr[i]);
	}
	int minCount=0, maxCount=0;
	for(int i=0;i<n;i++){
		if(arr[i]==maxi){
			while(i){
				swap(arr[i],arr[i-1]);
				i--;
				maxCount++;
			}
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i]==mini){
			while(i!=n-1){
				swap(arr[i],arr[i+1]);
				i++;
				minCount++;
			}
			break;
		}
	}
	cout<<maxCount+minCount;
	return 0;
}