#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n, i, j, tmp;
//	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	vector<int> a(n+1);
	for(i=1; i<=n; i++) scanf("%d", &a[i]);
	for(i=n; i>0; i--){
		for(j=1; j<i; j++){
			if(a[j]>a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(i=1; i<=n; i++) printf("%d ", a[i]);
}



