#include<iostream>
using namespace std;
int main(){
	int n,i,k;
	cout<<"dovrsuz sola surusme...\nmassivin olcusun gir: ";
	cin>>n; int a[n],b[n];
	cout<<"massivi gir:\n";
	for(i=0;i<n;i++){
	cin>>a[i];
	b[i]=0;}
	cout<<"surusme sayini gir: "; 
	cin>>k;
	i=n-1;
	while(i-k>=0){
	b[i-k]=a[i];
	i--;
	}
	for(i=0;i<n;i++)
	cout<<b[i]<<" ";
	return 0;
}
