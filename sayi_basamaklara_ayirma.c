#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,yuzler,birler,onlar;
	int toplam=0;
	printf("3 basamakli bir sayi gir: ");
	scanf("%d",&sayi);
	
	yuzler=sayi/100;
	onlar=(sayi/10)%10;
	birler=sayi%10;
	printf("yuzler: %d onlar: %d birler: %d \n",yuzler,onlar,birler);
	
	toplam=yuzler+onlar+birler;
	printf("toplam: %d",toplam);
	
	
	
	
	/*
	int kis,ilk,son,yaz;
	int toplam=0;
	kis=320;
	ilk=kis/4;
	yaz=ilk*8;
	son=yaz/10; 
	
	toplam=kis+ilk+yaz+son;
	printf("toplam gelen kisi sayisi: %d",toplam);
	*/
	/*
	int a,b ;
	int toplam =0;
	yeniden:
	printf("1.sayi: ");
	scanf("%d",&a);
	printf("2.sayi: ");
	scanf("%d",&b);
	
	if(a!=b){
		for(;a<=b;a++){
			printf("%d\n",a);
			toplam+=a;
		}
	}else{ goto yeniden;
	}
	 
	 printf("toplam: %d",toplam);
	*/
	/*
	int bagaj,bfazla,el,efazla,toplam;
	
	printf("bagaj kilonuz: ");
	scanf("%d",&bagaj);
	printf("el kilonuz: ");
	scanf("%d",&el);
	
	bfazla=bagaj-15;
	efazla=el-8;
	
	if(bfazla>0){printf("bagaj fazla kilo: %d\n",bfazla);}
	if(efazla>0){printf("el fazla kilo: %d\n",efazla);}
	
	printf("hesaplama\n\n");
	
	bfazla=(bagaj-15)*5;
	efazla=(el-8)*4;
	
	 toplam=bfazla+efazla;
	 
	 if(toplam>0){
	printf("toplam tutar: %d",toplam);
    }else{ printf("toplam tutar: 0");
	}*/
	return 0;
}
