#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	char a[20];
	int year, age;
	scanf("%s",&a); //���ڿ� �ޱ� //cin�� ������ �״�� ��. (��� ���Ͽ��� �о��) 
	//cin>>a; �̷��� �ᵵ ��. 
	if(a[7]=='1' || a[7]=='2'/*Ȭ����ǥ �ʼ�*/) year=1900+((a[0]-48/*�̷��� �ؾ� ��¥ ����*/)*10
		+(a[1]-48));
	else  year=2000+((a[0]-48/*�̷��� �ؾ� ��¥ ����*/)*10+(a[1]-48));
	age=2019-year+1;
	printf("%d ",age);
	if(a[7]=='1' || a[7]=='3'/*Ȭ����ǥ �ʼ�*/) printf("M\n");
	else printf("W\n"); 
	return 0;
}
