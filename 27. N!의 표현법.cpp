#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, cnt, tmp, flag=0;
	scanf("%d", &n);
	printf("%d! = ",n);
	for(i=2; i<=n; i++){
		flag=0; //���� i�� �Ҽ��� �ƴҶ��� �ǳʶٱ� ����
		cnt=0; //�Ҽ� i�� �� �� ����������  
		for(j=2; j<n; j++){
			if((i%j == 0)&&(i != j)){ //i�� �Ҽ��� �ƴϸ�  
				flag=1;
				break;
			}
		}
		if(flag==1) continue;
		for(j=2; j<=n; j++){ //for���� ���鼭 2���� n���� ���ʴ�� N!�� n�� �� ������ ���ԵǾ� �ִ��� ����Ͽ� ���
							//19�� �ڵ忡�� �Ҽ��� �ƴѰ� �ɷ��� ������ n�� �Ҽ���.   
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
