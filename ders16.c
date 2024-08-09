#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi1,sayi2,sonuc,secim;
	double pi =3.14;

	sayi1=5;
 	sayi2=10;
     // klavyeden sayý girisi switch bloklarýnda hatalý bak ve 3.duruma bak 
	
	printf("mat menusu\n\n");
	printf("**************\n\n");
	printf("1-karede alan ve cevre hesabi\n");
	printf("2-girilen sayinin kupu\n");
	printf("3-cemberde alan ve cevre hesabi\n");
	printf("4-5x2+7x+9 x e gore islemin sonucu\n");
	printf("5-dikdortgende alan ve cevre hesabi\n\n");
	

	
	printf("isleminizi secin : ");
	scanf("%d",&secim);
	
	
	switch(secim){
		
		case 1 : printf("karenin alani : %d\n",(sayi1*sayi1));
		         printf("karenin cevresi : %d",(sayi1*4)); 
		break;
		case 2 : printf("sayinin kupu : %d",(sayi1*sayi1*sayi1));
		break;
		case 3 : printf("cemberde alan : %f \n",(sayi1*sayi1*pi));
		         printf("cemberce cevre : %f",(2*pi*sayi1));
		break;
		case 4 : printf("islem sonucu : %d",(5*sayi1*sayi1+7*sayi1+9));
		break;
		case 5 : printf("dikdortgen alaný : %d\n",(sayi1*sayi2));
		         printf("dikdortgen cevre : %d",((sayi1+sayi2)*2));
		break;
				          
		
	}
	
	
	
	
	/*int sayi1,sayi2,sonuc;
	char islem;*/

     /*sayi1=50;
     sayi2=5;*/

     
	/*printf("1.sayiyi girin :");
	scanf("%d",&sayi1);
	
	printf("2.sayiyi girin :");
	scanf("%d",&sayi2);
	
	
	printf("islemi giriniz :");
	scanf("%s",&islem);

	
	
	switch(islem){
		
		case '+': 
		sonuc=sayi1+sayi2;
		printf("sonuc : %d",sonuc);
		break;
		case'-':
			sonuc=sayi1-sayi2;
		printf("sonuc : %d",sonuc);
			break;
		case'*':
		sonuc=sayi1*sayi2;
		printf("sonuc : %d",sonuc);
		break;
		case'/':
		sonuc=sayi1/sayi2;
		printf("sonuc : %d",sonuc);
		break;
		default: printf("hatali islem sembolu"); break;
	}  */
	
	return 0;
}  
