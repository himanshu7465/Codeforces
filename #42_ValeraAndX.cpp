#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	int lastIdx= n-1;
	char otherLetter = arr[0][1];
	char diagonalLetter = arr[0][0];
	for(int i=0;i<n;i++,lastIdx--){
		for(int j=0;j<n;j++){
			if(j==i || j==lastIdx){
				if(j==i){
					if(arr[i][j]!=diagonalLetter){
						cout<<"NO";
						return 0;
					}
				}
				if(j==lastIdx){
					if(arr[i][j]!=diagonalLetter){
						cout<<"NO";
						return 0;
					}
				} 
			}
			else{
				if(arr[i][j]!=otherLetter || arr[i][j]==diagonalLetter){
					cout<<"NO";
					return 0;
				}
			}
		}
	}
	cout<<"YES";

	return 0;
}