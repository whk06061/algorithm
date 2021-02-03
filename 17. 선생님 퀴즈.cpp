#include <stdio.h>
using namespace std;

int main(){
	int num, n, i, j, sum=0, res[11];
	//freopen("input.txt","rt",stdin);
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d",&n);
		sum=0;
		for(j=1;j<=n;j++){
			sum += j;
		}
		scanf("%d",&n);
		if(sum == n) res[i] = 1;
		else res[i] = 0;
	}
	for(i=1;i<=num;i++){
		if(res[i]==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
