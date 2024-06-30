#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
//	freopen("input.txt", "rt", stdin);
	int n, m ,i, j, index=1, pt1=1, pt2=1, tmp, range;
	scanf("%d", &n);
	vector<int> a(n+1), res(n+1);
	for(i=1; i<=n; i++) scanf("%d", &a[i]);
	scanf("%d", &m);
	vector<int> b(m+1);
	for(i=1; i<=m; i++) scanf("%d", &b[i]);
	for(i=2; i<=n; i++){
		tmp = a[i];
		for(j=i-1; j>=1; j--){
			if(a[j]>tmp) a[j+1] = a[j];
			else break;
		}
		a[j+1] = tmp;
	}
	for(i=2; i<=m; i++){
		tmp = b[i];
		for(j=i-1; j>=1; j--){
			if(b[j]>tmp) b[j+1] = b[j];
			else break;
		}
		b[j+1] = tmp;
	}
	for(i=1; i<=n+m; i++){
		if(a[pt1] == b[pt2]) {
			int ab = a[pt1];
			res[index++] = a[pt1];
			pt1++;
			pt2++;
		}
		else{
			if(a[pt1]<b[pt2]) pt1++;
			else pt2++;
		}
		if(pt1==n+1 || pt2==m+1) break;
		
	}
	for(i=1; i<index; i++) printf("%d ", res[i]);
} 
	










