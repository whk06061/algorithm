#include <stdio.h>
using namespace std;

int reverse(int x){
	int res=0;
	while(x!=0){
		res = res+x%10;
		if(x/10 > 0){ //여기서 굳이 이렇게 할 필요 없고 그냥 위의 코드를 res = res*10 + x%10 이렇게 써주면 됨. 
			res = res*10;
		}
		x= x/10;
	}
	return res;
}

bool isPrime(int x){
	int i, res, cnt=0;
	//if(x==1) return false; 1은 소수가 아니니까 이건 걸러줘야됨. 오 내 코드에서는 어차피 밑에서 걸러지네 ㅎㅎ 의도하지 않았는데  
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
