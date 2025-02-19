#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a[80];
	
	
	printf("Vvedi stroku do 80 simvolov: ");
	fgets(a, 80, stdin);
	printf("%s", a);
	
	
	
	return 0;
}
