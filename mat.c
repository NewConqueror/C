#include <stdio.h>
#include <stdlib.h>


int main() {
	int kare,kub,carpim,denklem;
	int secim,sayi1,sayi2;
	int toplam=0;
	printf("mat menu\n\n");
	printf("1.toplama islemi\n");
	printf("2.carpma islemi\n");
	printf("3.karebul\n");
	printf("4.kupbul\n");
	printf("5.denklem (5x^2+4x+3)\n\n");
	printf("islemi secin: ");
	scanf("%d",&secim);
	
	switch(secim){
		
		case 1 : printf("1.sayiyi girin: ");
		         scanf("%d",&sayi1);
		         printf("2.sayiyi girin: ");
		         scanf("%d",&sayi2);
		         toplam=sayi1+sayi2;
		         printf("toplama sonucu: %d",toplam);
		break;
		case 2 : printf("1.sayiyi girin: ");
		         scanf("%d",&sayi1);
		         printf("2.sayiyi girin: ");
		         scanf("%d",&sayi2);      
		         carpim=sayi1*sayi2;
		         printf("carpim sonucu: %d",carpim);
		break;
		case 3 :  printf("karesi alinacak sayiyi girin: ");
		          scanf("%d",&sayi1);        
		          kare=sayi1*sayi1;
		          printf("%d",kare);
		break;
		case 4 :  printf("kubu alýnacak sayiyi girin: ");
		          scanf("%d",&sayi1);        
		          kub=sayi1*sayi1*sayi1;
		          printf("%d",kub);  
		break;
		case 5 :  printf("denklem icin sayiyi girin: ");
		          scanf("%d",&sayi1);        
		          denklem=5*(sayi1*sayi1) + 4*sayi1 + 3 ;
		          printf("%d",denklem);
	}
	
	return 0;
}
