#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,ct=0,teams=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int temp=k;
	for(int i=0;i<n;i++){
		if(5-arr[i] >= k){
			ct++;
		}
	}
	cout<<ct/3;

	return 0;
}