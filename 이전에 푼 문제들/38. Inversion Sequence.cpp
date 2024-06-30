#include<stdio.h>
#include<vector>
using namespace std;

int main(){	
//	freopen("input.txt", "rt", stdin);
	int n, i, j, index;	
	scanf("%d", &n);
	vector<int> input(n+1), result(n+1);
	for(i=1; i<=n; i++) scanf("%d", &input[i]);
	for(i=1; i<=n; i++){
		index = 0;
		for(j=1; j<=n; j++){
			if(result[j] == 0) index++;
			if(index == input[i]+1) break;
		}
		result[j] = i;
	}
	for(i=1; i<=n; i++) printf("%d ", result[i]);
}
