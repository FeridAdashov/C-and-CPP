#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"ededi daxil edin: ";
	cin>>n;
	for(i=1;i<=n;i++)
	if(n%i==0 && i%2==0)
	cout<<i<<' ';
	return 0;
}
