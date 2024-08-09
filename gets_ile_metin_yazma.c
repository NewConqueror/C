#include <stdio.h>
#include <stdlib.h>


int main() {
   
   char metin[100];
   printf("metni girin: ");
   gets(metin);
   int i,n;
   n=strlen(metin);
   
   for(i=n;i>=0;i--){
   	printf("%c",metin[i]);
   }
    
    
	return 0;
}
