#include <stdio.h>
using namespace std;

int main(){
	//���� ����
	//�ƽ�Ű �ڵ� �̿��ؼ� �ҹ���ȭ
	//freopen("input.txt","rt",stdin);
	int i, p=0 /*�Űܴ������ position ����*/;
	char a[101],b[101];
	gets(a); //���! ó�� ���� �Լ�!(���� �ִ� ���ڿ� �о�ö� ���) 
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32;
			}
			else b[p++]=a[i];
		}
	} 
	b[p]='\0'; // �ʼ�! �̰� �����ָ� ���� �̻��� ���� ���� �� ����.  
	printf("%s",b);
	return 0;
}
