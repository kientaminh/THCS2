#include<stdio.h>
#include<math.h>

void nhap(int a[][100], int m, int n){
	for(int i=0; i<m; i++)
		for( int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}

int main(){
	int m,n,p,q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	int a[m][100], b[n][100], c[p][100], d[100][100]={0}, mt[100][100]={0};
	nhap(a,m,n);
	nhap(b,n,p);
	nhap(c,p,q);
	for( int i=0; i<m; i++){
		for( int j=0; j<p; j++){
			for( int k=0; k<n; k++){
				mt[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for( int i=0; i<m; i++){
		for( int j=0; j<q; j++){
			for( int k=0; k<p; k++){
				d[i][j]+=mt[i][k]*c[k][j];
			}
		}
	}
	for( int i=0; i<m; i++){
		for( int j=0; j<q; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
