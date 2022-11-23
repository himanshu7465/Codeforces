#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> one, two, three;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x==1) one.push_back(i);
		else if(x==2) two.push_back(i);
		else if(x==3) three.push_back(i);
	}
	int minSize=min(one.size() , min(two.size(),three.size()));
	cout<<minSize<<"\n";
	for(int i=0;i<minSize;i++){
		cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<"\n";
	}

	return 0;
}