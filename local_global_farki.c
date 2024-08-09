#include <stdio.h>

int hesapla(int a){
	a=a*2;
	printf("%d",a);
}

int hesaplama(int *sayi){
	*sayi=*sayi *2;
	printf("referans olarak: %d",*sayi);
	
}

int degistir(int sayi[]){
	int gecici=sayi[0];
	sayi[0]=sayi[1];
	sayi[1]=gecici;
	printf("%d\n",sayi[0]);
	printf("%d\n",sayi[1]);
	
}

int main(){
	
	int dizi[]={3,5};
		
	printf("%d\n",dizi[0]);
	printf("%d\n",dizi[1]);
	
	degistir(dizi);
	
	printf("%d\n",dizi[0]);
	printf("%d\n",dizi[1]);
	
	
	
	
	
	
	
	
	
	/*int sayi=5; // ana deðiþkene dokunmuyorrrrr
	           // eðer ana deðiþken de deðiþsin istiyorsak pointer olarak yollamalýyýz
	
	hesapla(sayi);
	
	printf("\n%d\n",sayi);
	
	hesaplama(&sayi);
	
	printf("\n%d\n ",sayi);  // referans olarak yollarsak normal deðiþkenin deðeri de deðiþti
	*/
/*	yeniden:
	
	int sayi;
	printf("sayi gir: ");
	scanf("%d",&sayi);
	
	if(sayi!=0){
		goto yeniden ;
	}*/
	/*
	int sayi =5;
	printf("sayi: %d\n",sayi);
	printf("adres: %d\n",&sayi);
	
	int *ptr;
	ptr= &sayi;
	printf("ptr : %d",*ptr);
	
	int say2;
	say2=20;
	ptr=&say2;
	
	printf("\nptr yeni: %d",*ptr);
	
	*/
	
	
	return 0;
}
