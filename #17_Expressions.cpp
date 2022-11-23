#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int mxNum=0;
	for(int i=0;i<10;i++){
		if(((a+b)*c)>mxNum){
			mxNum=(a+b)*c;
		}
		if((a*(b+c))>mxNum){
			mxNum=a*(b+c);
		}
		if((a*b*c)>mxNum){
			mxNum=a*b*c;
		}
		if((a+b+c)>mxNum){
			mxNum=a+b+c;
		}
	}
	cout<<mxNum;
	return 0;
}