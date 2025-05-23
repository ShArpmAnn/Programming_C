#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void numf(int n) {
  if (n == 0) return; 
  numf(n / 10);
  printf("%d ", n % 10);
}

void numb(int n) {
  if (n == 0) return;
  printf("%d ", n % 10);
  numb(n / 10);
}


int main(int argc, char *argv[]) {
	int n;
	printf("Vvedi chislo ");
	scanf("%d", &n);
	numf(n);
	printf("\n");
	numb(n);
	
	
	return 0;
}
