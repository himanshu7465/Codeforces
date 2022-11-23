#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ct=0;
	cin>>n;
	int arr[n],brr[n];
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		arr[i]=a;
		brr[i]=b;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(i!=j && arr[i]==brr[j]) ct++;
	}
	cout<<ct;
	return 0;
}