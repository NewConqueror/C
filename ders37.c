#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char kitap[40];
	printf("ad: ");
	scanf("%s",kitap);
	
	printf("%s",kitap);
	printf("\n");
	printf("%10s",kitap);
	printf("\n");
	printf("%10.3s",kitap); 
	printf("\n");
	printf("%-10s",kitap);
	return 0;
}
