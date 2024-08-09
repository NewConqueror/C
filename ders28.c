#include <stdio.h>
#include <stdlib.h>

 int hatayibas(int hata){
 	printf("hata kodu : %d",hata);
 }

int main() {
	int sayi;
	printf("pozitif bir sayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi<0){
		hatayibas(404);
	}else{
		printf("tebrikler");
	}
	
	return 0;
}
