#include <stdio.h>
#include <stdlib.h>
#include "deymatr6.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, i, j, a, b;
double **A, **B, **C;

int main(int argc, char *argv[]) {
	char ch;
	printf("Vvedi znak dey('+', '-' или '*') ");
	scanf("%c", &ch);
	
	
	printf("input rasnernost matritz ");
	scanf("%d", &n);
	
	
	
	
	
	A = (double**)malloc(n*sizeof(double*));	
	for (i = 0; i < n; i++){
		A[i] = (double*)malloc(n*sizeof(double));
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("input elem A [%d][%d] ", i, j);
			scanf("%lf", &A[i][j]);
		}
	}
	
	
	
	B = (double**)malloc(n*sizeof(double*));
	for (i = 0; i < n; i++){
		B[i] = (double*)malloc(n*sizeof(double));
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("input elem B [%d][%d] ", i, j);
			scanf("%lf", &B[i][j]);
		}
	}
	
	
	C = deynadmatr(A, B, ch, n);
	for (i=0; i<n; i++){
		printf("\n");
		for (j=0; j<n; j++){
			printf("%lf    ", C[i][j]);
		}
	}
	
	
	
	for(i=0;i<n;i++){
	free(A[i]);
	free(B[i]);
	free(C[i]);
	}
	free(A);
	free(B);
	free(C);
	return 0;
	
}
