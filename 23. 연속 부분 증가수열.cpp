#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, cnt=0, i, res=0;;
	scanf("%d", &n);
	vector<int> a(n); //크기가 n인 배열 동적 생성 & 모든 값은 0으로 초기화 되어 있음.  
	for(i=0; i<n; i++){
		scanf("%d", &a[i]); //굳이 배열로 안받아오 됨  
	}
	for(i=1; i<n; i++){
		if(a[i]>=a[i-1]){
			cnt++;
			if(cnt>res) res = cnt;
		} else cnt=0;
	}
	res++;
	printf("%d", res);
	return 0;
}
