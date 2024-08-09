#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char harf='A';
	char *pt=&harf;
	
	printf("adres: %x\n",pt); //62fe17
	
	pt++;
	
	/*Burada pt pointer'ı char tuttuğu için +1 arttırdığımızda adresi +1 arttı.
	 Eğer int tutsaydık +4 artacaktı. 
	 Örnek: s=1 ve s'in adresi 62fe00 olsun. s+1 yapsaydık 62fe04 olacaktı. 
	 Çünkü integer 4 bytelık yer kaplar.*/
	
	printf("adres2: %x\n",pt); //62fe18
	
	pt--;
	
	printf("adres3: %x\n",pt); //62fe17
	
	pt=pt+5;
	
	printf("adres4: %x",pt); // 62fe1c
	
	return 0;
}
