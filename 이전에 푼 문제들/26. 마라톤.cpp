#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	vector<int> a(n+1);
	vector<int> b(n+1);
	for(i=1; i<=n; i++){
		b[i] = i;
		scanf("%d", &a[i]);
		for(j=1; j<i; j++){
			if(a[i]>a[j]) b[i]--;
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ", b[i]);
	}
}
