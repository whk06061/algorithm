#include <stdio.h>
using namespace std;

int reverse(int x){
	int res=0;
	while(x!=0){
		res = res+x%10;
		if(x/10 > 0){ //���⼭ ���� �̷��� �� �ʿ� ���� �׳� ���� �ڵ带 res = res*10 + x%10 �̷��� ���ָ� ��. 
			res = res*10;
		}
		x= x/10;
	}
	return res;
}

bool isPrime(int x){
	int i, res, cnt=0;
	//if(x==1) return false; 1�� �Ҽ��� �ƴϴϱ� �̰� �ɷ���ߵ�. �� �� �ڵ忡���� ������ �ؿ��� �ɷ����� ���� �ǵ����� �ʾҴµ�  
	for(i=1; i<=x;i++){
		if(x%i ==0) cnt++;
	}
	if(cnt==2) return true;
	else return false;
}

int main(){
	int n, a, i, reverseNum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		reverseNum = reverse(a);
		if(isPrime(reverseNum)){
			printf("%d ",reverseNum);
		}
	}
	return 0;
}
