#include <stdio.h>
using namespace std;

int main(){
	int n, i, j, cnt = 0;
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++){
		j=i;
		while(j!=0){
			j=j/10;
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
