#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,sayi;
	int fucktoriyel;
	i=1;
	printf("fucktorıyelı alınacak degeri giriniz :");
	scanf("%d",&sayi);
	
	while(i<=sayi){
		
		fucktoriyel=fucktoriyel*i;
		i++;
	}
	printf("fuctorıyel sonucunuz : %d",fucktoriyel);
	
	
	/*int i,faktor;
	
	faktor=1;
	
	for(i=1;i<=5;i++){
		faktor=faktor*i;
	}
	printf("faktoriyel sonucu : %d",faktor); 
	*/
	
	
	/*int i,sayac;
	sayac=0;
	for(i=1;i<11;i++){
	      sayac=sayac+i;
	}
	 printf("sayac : %d\n",sayac);*/
	
	
	return 0;
}
