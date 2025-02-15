#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a, b, c;
	double x1, x2, d;

	printf("Vvedi a: \n");
	scanf("%lf", &a);
	printf("Vvedi b: \n");
	scanf("%lf", &b);
	printf("Vvedi c: \n");
	scanf("%lf", &c);
	
	d = b*b - 4*a*c;
	if (d < 0) printf("KORNEI NET");
	if (d > 0) {
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("x1 = %lf\n", x1);
		printf("x2 = %lf\n", x2);
		printf("d = %lf\n", d);
		
	}
	if (d == 0){
		
		x1 = (-b + sqrt(d))/(2*a);
		printf("ONLY 1 COR x = %lf\n",x1);
	}
	
	return 0;
}
