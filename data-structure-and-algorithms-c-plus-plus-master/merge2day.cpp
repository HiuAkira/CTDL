#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int b[n],c[m];
	for(int &x:b) cin>>x;
	for(int &x:c) cin>>x;
	int i=0,j=0;
	while(i<n && j<m){
		if(b[i]<=c[j]){
			cout<<"b"<<i+1<<" ";
			++i;
		}else{
			cout<<"c"<<j+1<<" ";
			++j;
		}
	}
	while(i<n){
		cout<<"b"<<i+1<<" ";
		++i;
	}
	while(j<m){
		cout<<"c"<<j+1<<" ";
		++j;
	}
	return 0;
}
