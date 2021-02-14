#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, j, tmp, res;
	scanf("%d", &n);
	vector<int> a(n+1);
	for(i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(tmp>1){
			if(tmp%j==0){
				a[j]++;
				tmp = tmp/j;
			} else j++;
		}
	}
	if(a[2]>a[5]) res = a[5];
	else res = a[2];
	printf("%d", res);
}
