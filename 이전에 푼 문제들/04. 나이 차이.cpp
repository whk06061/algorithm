#include <iostream>
using namespace std;

int main(){
	int n,i,min,max;
	cin>>n;
	int ages[n];
	for(i=0;i<n;i++){
		cin>>ages[i];
	}
	min=ages[0], max=ages[0];
	for(i=1;i<n;i++){
		if(ages[i]<min) min=ages[i];
		if(ages[i]>max)	max=ages[i];
	}
	cout<<max-min;
	return 0;
}
