#include <stdio.h>

int main(){
	int a;
	int *b = &a;
	scanf("%d", b);
	printf("%d..%d",a/10,a%10);
}	