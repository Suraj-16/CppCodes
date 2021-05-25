#include<iostream>
using namespace std;
int main(){
	int n,x;
    cin>>n;
	int sumb = 0;
	int sumt = 0;
	for(int i=0;i<n-1;i++){
		cin>>x;
		sumb = sumb + x;
	}
    cout<<sumb<<endl;
	for(int i=1;i<(n*2);i = i+2){
		sumt = sumt + i;
	}
    cout<<sumt<<endl;
	cout<<sumt-sumb;
	return 0;
}