#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int n, i, j, tmp, index;
//	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++){
		for(j=0; j<i; j++){
			if(a[j]>a[i]){
				index = i;
				tmp = a[i];
				while(index>j){
					a[index] = a[index-1];
					index--;
				}
				a[j] = tmp; 
				break;
			}
		}
	}
	for(i=0; i<n; i++) printf("%d ", a[i]);
}



