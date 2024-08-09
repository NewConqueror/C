#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi;
	int yuzler,onlar,birler;
	
	printf("bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	yuzler=sayi/100;
	printf("yuzler basamagi : %d\n",yuzler);
	
	onlar=sayi/10;
	onlar=onlar%10;
	printf("onlar basamagi : %d\n",onlar);
	
	birler=sayi%10;
	
	printf("birler basamagi : %d\n",birler);
	
	
	
	
	int i;
	
	for(i=1;i<=50;i++){
		if(i%5==0){
			printf("%d\n",i);
		}
	}
	
	
	
	return 0;
}
