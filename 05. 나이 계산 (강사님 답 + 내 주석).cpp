#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	char a[20];
	int year, age;
	scanf("%s",&a); //문자열 받기 //cin의 역할을 그대로 함. (대신 파일에서 읽어옴) 
	//cin>>a; 이렇게 써도 됨. 
	if(a[7]=='1' || a[7]=='2'/*홑따옴표 필수*/) year=1900+((a[0]-48/*이렇게 해야 진짜 숫자*/)*10
		+(a[1]-48));
	else  year=2000+((a[0]-48/*이렇게 해야 진짜 숫자*/)*10+(a[1]-48));
	age=2019-year+1;
	printf("%d ",age);
	if(a[7]=='1' || a[7]=='3'/*홑따옴표 필수*/) printf("M\n");
	else printf("W\n"); 
	return 0;
}
