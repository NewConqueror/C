#include <stdio.h>
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// ygs 1 puan türü hesaplama
	//türkçe : 1.999
	//mat : 3.998
	//sosyal bilgiler : 1
	//fen bilgisi : 2.999
	//taban : 100.160
	
	printf("ygs 1 puan türü hesaplama \n\n");
	
	float turkce,mat,sos,fen,taban,toplampuan;
	
	printf("türkce netiniz :");
	scanf("%f",&turkce);
	
	printf("mat netiniz : "),
	scanf("%f",&mat);
	
	printf("sos netiniz : ");
	scanf("%f",&sos);
	
	printf("fen netiniz : ");
	scanf("%f",&fen);
	
	taban=100.160;
	
	toplampuan=turkce*1.999+mat*3.998+sos*1+fen*2.999+taban;
	
	printf("ygs 1 puanýnýz : %f",toplampuan);
	
	
	
	
	
	
	
	
	
	
	
	//çemberde alan pi*r*r
	//çemberde çevere pi*r*2
	
	/*printf("cember alan ve cevre hesaplama: \n\n");
	
	float alan,cevre,pi,yaricap;
	pi=3.14;
	
	printf("yaricapi girin : ");
	scanf("%f",&yaricap);
	
	alan=pi*yaricap*yaricap;
	cevre=pi*2*yaricap;
	
	printf("cemberin alani : %f\n",alan);
	printf("cemberin cevresi : %f",cevre);*/  		
	
	
	
	
	/*printf("zam maaþ hesabi : \n\n");
	
	float maas,yenimaas;
	
	printf("maasinizi giriniz :");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	
	printf("yeni maasiniz : %f",yenimaas);*/
	
	
	
	
	
	/*int a,b,c;
	printf("ilk sayiyi giriniz :");
	scanf("%d",&a);
	printf("ikinci sayiyi girin : ");
	scanf("%d",&b);
	c=a/b;
	
	printf("sonuc : %d",c);*/
	
	
	
	
	 /*float sayi1,sayi2,toplam;
	 
	 printf("ilk sayiyi giriniz :");
	 scanf("%f",&sayi1);
	 printf("ikinci sayiyi giriniz :");
	 scanf("%f",&sayi2);
	 
	 toplam=sayi1+sayi2;
	 printf("toplam sonuc : %f",toplam);*/
	
	
	
	
	
	
	return 0;
}
