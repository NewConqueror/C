#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi1=10;
	int sayi2=50;
	double sayi3=15.24;
	char kelime='A';
	
	printf("%d\n",sayi1);
	printf("%d\n",sayi2);
	printf("%.2f\n",sayi3);
	printf("%c\n",kelime);
	
	printf("\n\n bellek adresleri:\n\n");
	
	printf("%x\n",&sayi1);
	printf("%x\n",&sayi2);
	printf("%x\n",&sayi3);
	printf("%x\n",&kelime);
	
	
	return 0;
}
