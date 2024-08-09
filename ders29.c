#include <stdio.h>
#include <stdlib.h>

/*int topla(int a,int b){
	return (a+b);
}*/

int faktoriyel(int sayi){
	int faktor=1;
	for(;sayi>0;sayi--){
		faktor*=sayi;
	}
	return faktor; 
}

int main() {
	
	int n;
	printf("faktoriyeli hesaplanacak sayiyi giriniz: ");
	scanf("%d",&n);
	printf("faktoriyel sonuuc %d",faktoriyel(n));
	
	/*int sayi1,sayi2,toplam;

	printf("1.sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&sayi2);
	toplam=topla(sayi1,sayi2);
	printf("toplam: %d\n",topla(sayi1,sayi2));    // iki yol da olur
	printf("toplam: %d",toplam);
	*/
	return 0;
}
