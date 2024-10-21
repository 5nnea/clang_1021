#include <stdio.h>

int main(){
	int a;
	int *b = &a;
	scanf("%d", b);
	printf("%d...%d",*b/10,*b%10);
}	