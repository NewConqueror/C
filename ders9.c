#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("********su durumu bulma\n\n");
	
	int su;
	
	printf("sicaklik degeri giriniz : ");
	scanf("%d",&su);
	
	if(su<=0){
		printf("buzzzzzz");
	}
	if(su>0 && su<100){
		printf("suuuuuuuuuuu");
	}
	if(su>=100){
		printf("buhaaaarrrrr");
	}
	
	
	
/*int sayi;	 
	
	printf("sayi gir ulennn : ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 || sayi%5==0 || sayi%7==0){
		printf("sayi 3 e veya 5 e  veya 7 ye tam bolunur");
	}else{
		printf("sayi 3 e veya 5 e veya 7 ye tam bolunmez");
	}*/




	/*int sayi;
	
	printf("sayi gir ulennn : ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 && sayi%5==0){
		printf("sayi 3 e ve 5 e tam bolunur");
	}else{
		printf("sayi 3 e ve 5 e tam bolunmez");
	}*/



	
	/*int sayi;
	printf("bir sayi giriniz :");
	scanf("%d",&sayi);
	
	if(sayi%5==0){
		printf("sayi 5 e  tam bolunur..");
	}else{
		printf("sayi 5 e  tam bolunmez..");
	}*/
	
	
	/*int sayi;
	sayi=3216957;
	
	if(sayi%2==0){
		printf("sayi cifftir");
	}else{
		printf("sayi tektir");
	}*/
	
	
	return 0;
}
