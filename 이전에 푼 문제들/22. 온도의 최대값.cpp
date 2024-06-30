#include <stdio.h>
using namespace std;

int main(){
	int n, k, a[100001], b[100001],i, j=1, x, cnt=0, res=-2147400000, tmp=-2147400000, max=-2147400000, maxIndex;
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &k);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		if(a[i]>=max){
			max=a[i];
			if(a[i]==max) {
				b[j++] = i;
				cnt++;
			}
			else{
				cnt=1;
				j=1;
				b[j++] = i;
			}
		}
	}
		for(i=1;i<=cnt;i++){
			for(j=b[i]-k+1; j<=b[i]; j++){
				tmp = 0;
				if(j<1) continue; 
				if(j+k-1>n) break;
				for(x=j;x<=j+k-1;x++) {
					tmp += a[x];
				}
				
					if(res<tmp) res = tmp;
			}
		}
	
	printf("%d", res);
	return 0;
}
