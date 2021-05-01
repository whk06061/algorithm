#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
//	freopen("input.txt", "rt", stdin);
	int  n, i, x=2, y=1, tmp, cnt=0;
	scanf("%d", &n);
	while(n-y>0){
		tmp = n-y; //(x) + (x+1) + (x+2) ... = n 의 성질을 이용 
		if((tmp)%x==0){
			for(i=0; i<x-1; i++){
				printf("%d + ", tmp/x+i);
			}
			printf("%d = %d\n", tmp/x+i, n);
			cnt++;
		}
			y = y+x;
			x++;
	}
	printf("%d", cnt);
} 
	










