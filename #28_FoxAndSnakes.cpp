#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,LorR=1;
	cin>>n>>m;
	int arr[n][m];
	for(int r=1;r<=n;r++){
		for(int c=1;c<=m;c++){
			if(r & 1) cout<<'#';
			else{
				if(LorR & 1){
					if(c == m) cout<<'#';
					else cout<<'.';
				}
				else{
					if(c==1) cout<<'#';
					else cout<<'.';
				}
			}
		}
		if(!(r&1)) LorR++;
		cout<<"\n";
	}
	return 0;
}