#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,super=0;
	cin>>n;
	int l[n],r[n];
	for(int i=0;i<n;i++){
		cin>>l[i]>>r[i];
	}
	for(int i=0;i<n;i++){
		bool left=false, right=false, up=false, down=false;
		for(int j=0;j<n;j++){
			if(l[i]>l[j] && r[i]==r[j]) left=true;
			if(l[i]<l[j] && r[i]==r[j]) right=true;
			if(l[i]==l[j] && r[i]>r[j]) down=true;
			if(l[i]==l[j] && r[i]<r[j]) up=true;			
		}
		if(left and right and down and up) super++;
	}
	cout<<super;
	return 0;
}