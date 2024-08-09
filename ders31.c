#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	double sonuc;
	
	printf("karekoku alinacak sayiyi giriniz: ");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi);
	printf("sonuc : %.4f",sonuc);
	
	return 0;
}
