#include <stdio.h>
#include <stdlib.h>

int main() {

     int i,j,k;
     
     for(i=1;i<=9;i++){ // ka� ad�mdan olu�tu�unu s�yler
     	
     	if(i<=5){          // ilk 5 ad�m i�in bunu yapt�k
		 for(j=1;j<=i;j++){
     		printf("*");
		 }printf("\n");}
		 
		 if(i>=6){         // son 4 ad�m i�in bunu yapt�k
		 	
		 	for(k=9;k>=i;k--){
		 		printf("*");
			 } printf("\n");
		 }
		 
	 }
	 
	return 0;
}
