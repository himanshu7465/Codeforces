#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,d,jokes=0;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0;
	while(d){
		if(i<n && d>=arr[i]){
			d=d-arr[i];
			i++;
		}
		if(d>=5){
			d=d-5;
			jokes++;	
		}
		d=d-5;
		jokes++;
		if(d<0){
			jokes--;
			break;
		}
	}
	if(i==n) cout<<jokes;
	else cout<<"-1"; 

	return 0;
}