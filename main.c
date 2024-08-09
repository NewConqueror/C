#include <stdio.h>
#include <stdlib.h>

/*int buyukbulma(int a,int b, int c){
	
	int max=a;
	if(a<b&&c<a){
		max=b;
	}
	if(b<c&&a<c){
		max=c;
	}
}*/

int topla(int a,int b){
	return (a+b);
}
int cikar(int a,int b){
	return(a-b);
}
int carp(int a,int b){
	return (a*b);
}
int bol(int a,int b){
	return (a/b);
}

int main() {

    int sayi1,sayi2;
    printf("1.sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.sayiyi giriniz: ");
    scanf("%d",&sayi2);

    printf("toplam: %d",topla(sayi1,sayi2));
    printf("\n");
    printf("cikarma: %d",cikar(sayi1,sayi2));
    printf("\n");
    printf("carpim: %d",carp(sayi1,sayi2));
    printf("\n");
    printf("bolum: %d",bol(sayi1,sayi2));





       /*int sayi1,sayi2,sayi3;
       printf("1.sayiyi giriniz: ");
       scanf("%d",&sayi1);
       printf("2.sayiyi giriniz: ");
       scanf("%d",&sayi2);
       printf("3.sayiyi giriniz: ");
       scanf("%d",&sayi3);
       
       printf("max: %d",buyukbulma(sayi1,sayi2,sayi3));
	*/
	return 0;
}
