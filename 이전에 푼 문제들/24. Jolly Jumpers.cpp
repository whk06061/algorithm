#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, sub, res=1;
	scanf("%d", &n);
	vector<int> a(n);
	vector<int> b(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]); //±»ÀÌ ¹è¿­·Î ¾È¹Þ¾Æµµ µÊ 
	}
	for(i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
			sub = a[i] - a[i+1];
		} else {
			sub = a[i+1] - a[i];
		}
		b[sub]++;
	}
	for(i=1; i<n; i++){
		if(b[i]!=1){
			res = 0;
			break;
		}
	}
	if(res == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
