#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x, chest=0, biceps=0, back=0, ch=1, bi=0, ba=0;
	for(int i=0;i<n;i++){
		cin>>x;
		if(ch!=0){
			chest+=x;
			ch=0,bi=1;
		}
		else if(bi!=0){
			biceps+=x;
			bi=0,ba=1;
		}
		else{
			back+=x;
			ba=0,ch=1;
		}
	}
	if(chest==max(chest,max(biceps,back)))
		cout<<"chest";
	else if(biceps==max(chest,max(biceps,back)))
		cout<<"biceps";
	else cout<<"back";
	
	return 0;
}