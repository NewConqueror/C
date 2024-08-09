#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char harf='A';
	char *pt=&harf;
	
	printf("adres: %x\n",pt); //62fe17
	
	pt++;
	
	/*Burada pt pointer'� char tuttu�u i�in +1 artt�rd���m�zda adresi +1 artt�.
	 E�er int tutsayd�k +4 artacakt�. 
	 �rnek: s=1 ve s'in adresi 62fe00 olsun. s+1 yapsayd�k 62fe04 olacakt�. 
	 ��nk� integer 4 bytel�k yer kaplar.*/
	
	printf("adres2: %x\n",pt); //62fe18
	
	pt--;
	
	printf("adres3: %x\n",pt); //62fe17
	
	pt=pt+5;
	
	printf("adres4: %x",pt); // 62fe1c
	
	return 0;
}
