#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	int i, j, z=0;
	char input[10];
	char output[10];
	char result[10];
	scanf("%s",&input); //문자열 받기
	for(i=0;i<10;i++){
		if((input[i]-48>=0) && (input[i]-48<=9)) output[j++]=input[i];
	}
	j--;
	for(i=0;i<=j;i++){
		if(output[i]!='0') z++;
		if((z==0)&&(output[i]=='0')){
			continue;
		} else result[i]= output[i];
	}
	printf("%s",result);
	return 0;
}
