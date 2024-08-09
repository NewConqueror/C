#include <stdio.h>
#include <stdlib.h>

int main() {

     int i,j,k;
     
     for(i=1;i<=9;i++){ // kaç adýmdan oluþtuðunu söyler
     	
     	if(i<=5){          // ilk 5 adým için bunu yaptýk
		 for(j=1;j<=i;j++){
     		printf("*");
		 }printf("\n");}
		 
		 if(i>=6){         // son 4 adým için bunu yaptýk
		 	
		 	for(k=9;k>=i;k--){
		 		printf("*");
			 } printf("\n");
		 }
		 
	 }
	 
	return 0;
}
