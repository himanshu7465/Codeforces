#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x;
	for(int i=0;;i++){
		bool flag=false;
		x=n;
		if(x<0) x*=-1;
		while(x){
			int digit=x%10;
			if(i!=0 && digit%10==8 || digit%10==-8){
				cout<<i;
				return 0;
			}
			x/=10;
		}
		n++;
	}

	return 0;
}