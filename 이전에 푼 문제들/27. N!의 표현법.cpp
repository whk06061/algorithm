#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, cnt, tmp, flag=0;
	scanf("%d", &n);
	printf("%d! = ",n);
	for(i=2; i<=n; i++){
		flag=0; //만약 i가 소수가 아닐때는 건너뛰기 위해
		cnt=0; //소수 i가 몇 번 곱해지는지  
		for(j=2; j<n; j++){
			if((i%j == 0)&&(i != j)){ //i가 소수가 아니면  
				flag=1;
				break;
			}
		}
		if(flag==1) continue;
		for(j=2; j<=n; j++){ //for문을 돌면서 2부터 n까지 차례대로 N!에 n의 몇 제곱이 포함되어 있는지 계산하여 출력
							//19번 코드에서 소수가 아닌건 걸렀기 때문에 n은 소수임.   
			tmp = j;
			if(j%i == 0){
				while(j!=0){   
					if(j%i==0){
						cnt++;
						j = j/i;
					} else break;
				}
				j=tmp;
			}
		}
		printf("%d ", cnt);
	}
}
