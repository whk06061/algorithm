#include <stdio.h>
using namespace std;
int b[10]; //대박! 계속 배열에 이상한 값 들어있어서 뭔가 헸더니 전역변수로 안써줘서 그런거였다! 모든 원소가 0이라는 것을 보장하기 위해서는
		   //전역변수로 선언해줘야된다. 
int main(){
	int n, i, max=-1, res=0;
	char a[101]; //자연수 길이가 100이면 int로 받을 수 없기 때문에 str으로 받음. 
	//freopen("input.txt","rt",stdin);
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++){
		n = a[i]-48; //숫자가 char형으로 들어있기 때문에 48 빼줘야 숫자됨. 
		b[n]++;
	}
	for(i=0;i<10;i++){
		if(max<b[i])
		{
			max=b[i];
			res=i;
		 } else if(max==b[i]){ //따로 이렇게 써주지 않고 위의 if문 조건에 max<=b[i] 써주면 됨. 왜냐하면 i를 차례대로 탐색하기 때문에 
		                       //자연스럽게 res에는 더 큰 i 값이 들어가게 됨. 
		 	if(res<i) res=i;
		 }
	}
	printf("%d",res);
	return 0;
}
