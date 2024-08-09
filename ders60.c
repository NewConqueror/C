#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
         int i,sayi1,sayi2;
		 
		 printf("birinci sayiyi giriniz :");
		 scanf("%d",&sayi1);
		 printf("ikinci sayiyi giriniz :");
		 scanf("%d",&sayi2);
		 
		 i=sayi1;
		 
		while(i<=sayi2){
			
			if(i%2!=0){printf("%d\n",i);
			}
			i++;
		}
	  
	return 0;
}
