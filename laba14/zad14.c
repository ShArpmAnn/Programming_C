#include <stdio.h>
#include <setjmp.h>

jmp_buf env; 

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

void fib_sum(int n, int *sum) {
    int f = fib(n);
    *sum += f;

    
    if (n == 1) longjmp(env, 1);
    fib_sum(n - 1, sum);

}

int main() {
    int sum = 0;
	int n;
    if (setjmp(env) == 0) {
        printf("Vvedi do chego schitat ");
        scanf("%d", &n);
        fib_sum(n, &sum);
       
    } 
	printf("Sum Fibonacci numbers do n=%d is %d\n", n, sum);
    return 0;
}

