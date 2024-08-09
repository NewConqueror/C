#include <stdio.h>
#include <stdlib.h>


int main() {
	
	double sayi,sonuc1,sonuc2; // double da KLAVYEDEN giriþ almak için %lf komutunu kullanýyoruz
	                            //  sonucu yazdýrýrken %f de %lf de kullanýlabilir paþa gönlünüz bilir
	printf("degeri giriniz :");
	scanf("%lf",&sayi);
	
	sonuc1=floor(sayi);
	sonuc2=ceil(sayi);
	
	printf("alta yuvarlama : %.lf",sonuc1);
	printf("\n");
	printf("uste yuvarlama : %.lf",sonuc2);
	
	
	return 0;
}
