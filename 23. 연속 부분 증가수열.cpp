#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, cnt=0, i, res=0;;
	scanf("%d", &n);
	vector<int> a(n); //ũ�Ⱑ n�� �迭 ���� ���� & ��� ���� 0���� �ʱ�ȭ �Ǿ� ����.  
	for(i=0; i<n; i++){
		scanf("%d", &a[i]); //���� �迭�� �ȹ޾ƿ� ��  
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
