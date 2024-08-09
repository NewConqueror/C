#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double derece,sonucsin,sonuccos;
	printf("dereceyi giriniz :");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("derecenin sinusu : %lf",sonucsin);
	printf("\n");
	
	sonuccos=cos(derece);
	printf("derecenin cosinusu : %lf",sonuccos);
	
	
	return 0;
}
