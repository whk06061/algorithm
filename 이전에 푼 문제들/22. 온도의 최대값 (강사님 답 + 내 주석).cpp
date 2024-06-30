#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, k, i, sum=0, res;
	scanf("%d %d", &n, &k);
	vector<int> a(n); //크기가 n인 배열 동적 생성 & 모든 값은 0으로 초기화 되어 있음.  
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<k; i++){
		sum += a[i];
	}
	res = sum;
	for(i=k; i<n; i++){
		sum = sum+a[i]-a[i-k];
		if(sum > res) res = sum;
	}
	printf("%d", res);
	return 0;
}
