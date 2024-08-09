#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double sayi,sonuc1,sonuc2;
	printf("degeri giriniz :");
	scanf("%lf",&sayi);
	
	sonuc1=fabs(sayi);
	printf("sonuc mutlak deger : %.lf",sonuc1);
	printf("\n");
	
	sonuc2=log10(sayi);
	printf("logaritma sonuc : %lf",sonuc2);
	
	return 0;
}
