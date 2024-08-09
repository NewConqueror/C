#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi,fucktoriyel;
	printf("fucktoriyeli hesaplanacak sayiyi giriniz :");
	 scanf("%d",&sayi);
	fucktoriyel=1;
	while(sayi>1){
		fucktoriyel=fucktoriyel*sayi;
		sayi--;
	}printf("sonuc : %d",fucktoriyel);
	
	/*int i;
	i=1;
	while(i<=20){ 
	if(i%2==0&&i!=14){printf("%d\n",i);
	
	}
	i++;
	}*/
	
	
     
	
	return 0;
}
