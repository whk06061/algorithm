#include <stdio.h>
using namespace std;

int digit_sum(int x);

int main(){
	
	int n, a[100]/*입력받은 숫자 저장*/, b[100]/*각자리 수 합 저장*/, i, max=0, maxIndex=0;
	//freopen("input.txt","rt",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		b[i] = digit_sum(a[i]);
		if(b[i]>max){
			max=b[i];
			maxIndex=i;
		} else if(b[i]==max){
			if(a[maxIndex]<a[i]){
				maxIndex=i;
			}
		}
	}
	printf("%d",a[maxIndex]);
	return 0;
}

int digit_sum(int x){
	int j, sum=0;
	for(j=1;x!=0;j++){
		sum += x%10;
		x=(x-x%10)/10;
	}
    return sum;
}
