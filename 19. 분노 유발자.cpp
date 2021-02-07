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
		if(tmp[j-1]<=cur) { //현재 값이 최근 분노 유발자보다 크면  
			for(x=j-1;cur>=tmp[x] && x>0;x--){ //최근 분노 유발자는 분노 유발자가 아닌게 됨. 그러므로 현재 값으로 대체해줌. 
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
