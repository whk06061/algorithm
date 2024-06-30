#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n, i, index=0;
//	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	vector<int> a(n), b(n);
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	for(i=0; i<n; i++){
		if(a[i]<0) b[index++] = a[i];
	}
	for(i=0; i<n; i++){
		if(a[i]>0) b[index++] = a[i];
	}
	for(i=0; i<n; i++) printf("%d ", b[i]);
}



