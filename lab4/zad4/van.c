#include <stdio.h>
#include <math.h>
extern int a;
extern int b;
extern int c;

void func() {
	int p, pp;
	double x;
	if (a+b > c && a+c > b && b+c > a){
		p = a+b+c;
		pp = p/2;
		x = sqrt(pp*(pp - a)*(pp - b)*(pp - c));
		
		printf("Perimetr = %d \n", p); 
		printf("Ploshad = %lf", x); 	
	}
	else{
		printf("Takogo treugolnika net");
	}
}
