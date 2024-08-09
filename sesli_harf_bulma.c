#include <stdio.h>
#include <stdlib.h>


int main(){
  int j,i;
    char karakter;
    char sesli[6]={'A','a','E','I','U','O'};
   printf("Bir karakter girin:\n");
   scanf("%c",&karakter);
   
   for(j=0;j<6;j++){
   if(sesli[j]==karakter){
       printf("%c sesli harf.\n",karakter);
   }
}
   for(j=0;j<6;j++){
   if(karakter!=sesli[j]){
   	printf("%c",karakter);
   	break;}
}

    return 0;
}
