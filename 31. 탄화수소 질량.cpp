#include<stdio.h>
using namespace std;

int main(){
	int i, a=0, b=0, index;
	char input[10];
	scanf("%s", input);
	for(i=1; input[i] != 72; i++){
		a = a*10 + input[i]-48;
		
	}
	index = i;
	for(i = index+1; input[i] != '\0'; i++){
		b = b*10 + input[i]-48;
	}
	if(a==0) a=1;
	if(b==0) b=1;
	printf("%d ", 12*a + b);
}



