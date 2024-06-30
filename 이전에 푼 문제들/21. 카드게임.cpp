#include <stdio.h>

int main(){
	int i, a[10], b[10], scoreA=0, scoreB=0;
	char winner = 'D';
	//freopen("input.txt", "rt", stdin);
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<10; i++){
		if(a[i]==b[i]){
			scoreA += 1;
			scoreB += 1;
		}
		else if(a[i]>b[i]) {
			scoreA += 3;
			winner = 'A';
		}
		else {
			scoreB += 3;
			winner = 'B';
		}
	}
	printf("%d %d\n", scoreA, scoreB);
	if(scoreA == scoreB) printf("%c", winner);
	else if(scoreA>scoreB) printf("A");
	else printf("B");
	return 0;
}
