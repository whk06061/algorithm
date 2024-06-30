#include <stdio.h>
using namespace std;

int main(){
	int n, a[101], b[101], i, tmp;
	//freopen("input.txt", "rt", stdin);
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		tmp = a[i]-b[i];
		if((tmp==-2)||(tmp==1)) printf("A\n"); 
		else if ((tmp==-1)||(tmp==2)) printf("B\n");
		else if (tmp==0) printf("D\n");
	}
	return 0;
}
