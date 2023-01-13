#include <stdio.h>

int fibo (int n) {

	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibo (n-1) + fibo (n-2);
	}
}


int main (){

	int n;
	int i;
	printf("Geben Sie n ein:\n");
	scanf("%d", &n);

	for(i = 0; i<=n; i++) {

		printf("%d ", fibo(i));
	}

	printf("\n"); 

return 0;

}
