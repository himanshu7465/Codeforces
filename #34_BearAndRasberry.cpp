#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,c,x;
	cin>>n>>c;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxProfit=INT_MIN;
	for(int i=0;i<n-1;i++){
		if((arr[i]-arr[i+1]-c)>0)
			maxProfit=max(arr[i]-arr[i+1]-c,maxProfit);
	}

	(maxProfit>0)?cout<<maxProfit:cout<<"0";
	return 0;
}