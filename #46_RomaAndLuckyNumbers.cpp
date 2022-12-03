#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int nums=n;
	for(int i=0;i<n;i++){
		int temp=arr[i], ct=0;
		while(temp){
			int digit=temp%10;
			if(digit==4 || digit==7) ct++;
			if(ct>k){
				nums--;
				break;
			}
			temp/=10;
		}
		ct=0;
	}
	cout<<nums;

	return 0;
}