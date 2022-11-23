#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	int arr[n][3], i, j, flag=0;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	for(j=0;j<3;j++){
		for(int i=0;i<n;i++){
			sum+=arr[i][j];
		}
		if(!sum) flag=1;
		else{
			flag=0;
			break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
