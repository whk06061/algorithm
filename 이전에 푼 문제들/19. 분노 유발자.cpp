#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	int n, i, cur, prev=0, tmp[101], j=1, cnt=0,x;
	scanf("%d %d",&n, &cur);
	tmp[j] = cur;
	cnt++; j++;
	for(i=2;i<=n;i++){
		scanf("%d",&cur);
		tmp[j] = cur;  
		cnt++;
		if(tmp[j-1]<=cur) { //���� ���� �ֱ� �г� �����ں��� ũ��  
			for(x=j-1;cur>=tmp[x] && x>0;x--){ //�ֱ� �г� �����ڴ� �г� �����ڰ� �ƴѰ� ��. �׷��Ƿ� ���� ������ ��ü����. 
				tmp[x] = cur;
				j--;
				cnt--;
			}
		}
		j++;
		
	}
	printf("%d",cnt-1);
	return 0;
}
