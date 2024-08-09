#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("ögrenci ort hesaplama\n\n");
	
	int s1,s2,sozlu,ort;
	
	printf("birinci not : ");
	scanf("%d",&s1);
	printf("ikinci not :");
	scanf("%d",&s2);
	printf("sozlu notu :");
	scanf("%d",&sozlu);
	
	ort=(s1+s2+sozlu)/3;
	
	printf("ortalamanýz : %d\n",ort);
	
	if(ort>=50){
		printf("tebrikler gectiniz.. ");
	}else{
		printf("kaldýnýz");
	}
	
	
	
	
	
	/*int s1,s2,toplam;
	
	s1=20;
	s2=0;
	toplam=s1+s2;
	
	if(toplam>50){
		printf("deger : %d - 50 den buyuktur",toplam);
	}else{
		printf("deger : %d -50 den kucuktur",toplam);
	}*/
	
	
	
	
	
	/*int sayi=5;
	
	if(sayi==5){
		printf("girilen deger dogru");
	}else{
		printf("girilen deger yanlis");
	}*/
	
	
	
	
	
	return 0;
}
