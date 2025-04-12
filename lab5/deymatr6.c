#include <stdio.h>
#include <stdlib.h>


double **deynadmatr(double **A, double **B, char ch, int n){
	int i, j, k:
	double ** REZM;
	
	REZM = (double**)malloc(n*sizeof(double*));
	for (i = 0; i < n; i++){
		REZM[i] = (double*)malloc(n*sizeof(double));
	}
	
	if (ch == '+'){
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				REZM[i][j] = A[i][j] + B[i][j];
			}
		}
	}
	
	if (ch == '-'){
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				REZM[i][j] = A[i][j] - B[i][j];
			}
		}
	}
	
	if (ch == '*'){
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				REZM[i][j] = 0;
				for (k = 0; k < n; k++){
					REZM[i][j] += A[i][k]*B[k][j];
					
				}
			}
		}
	}
	
	return REZM;
	
}
