#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n, i, j, idx, tmp, cnt=1;
//	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	for(i=0; i<n-1; i++){
		idx = i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	for(i=n-2; i>=0; i--){
		if(a[i]!=a[i+1]) cnt++;
		if(cnt==3){
			printf("%d", a[i]);
			break;
		}
	}
}



