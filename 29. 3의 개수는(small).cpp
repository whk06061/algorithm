#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	int n, i, tmp, cnt=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		tmp = i;
		while(1){
			if(tmp%10 == 3) cnt++;
			tmp = tmp/10;
			if(tmp == 0) break;
		}
	}
	printf("%d", cnt);
}
