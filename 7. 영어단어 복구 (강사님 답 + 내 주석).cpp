#include <stdio.h>
using namespace std;

int main(){
	//공백 제거
	//아스키 코드 이용해서 소문자화
	//freopen("input.txt","rt",stdin);
	int i, p=0 /*옮겨담기위한 position 변수*/;
	char a[101],b[101];
	gets(a); //대박! 처음 보는 함수!(공백 있는 문자열 읽어올때 사용) 
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32;
			}
			else b[p++]=a[i];
		}
	} 
	b[p]='\0'; // 필수! 이거 안해주면 끝에 이상한 문자 붙을 수 있음.  
	printf("%s",b);
	return 0;
}
