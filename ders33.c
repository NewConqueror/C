#include <stdio.h>
#include <stdlib.h>


int main() {
	
	double sayi,sonuc1,sonuc2; // double da KLAVYEDEN giri� almak i�in %lf komutunu kullan�yoruz
	                            //  sonucu yazd�r�rken %f de %lf de kullan�labilir pa�a g�nl�n�z bilir
	printf("degeri giriniz :");
	scanf("%lf",&sayi);
	
	sonuc1=floor(sayi);
	sonuc2=ceil(sayi);
	
	printf("alta yuvarlama : %.lf",sonuc1);
	printf("\n");
	printf("uste yuvarlama : %.lf",sonuc2);
	
	
	return 0;
}
