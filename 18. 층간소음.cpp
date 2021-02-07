#include <stdio.h>
using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	int n, m, tmp, i, sec=0, res=0;
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++){
		scanf("%d",&tmp);
		if(tmp>m){
			sec++;
			if(sec>=res) res = sec;
		}
		else sec=0;
	}
	if(res==0) printf("%d",-1);
	else printf("%d", res);
	return 0;
}
