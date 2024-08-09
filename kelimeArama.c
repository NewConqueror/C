#include <stdio.h>
#include <stdlib.h>

int kelimeara(char * cptr, char * kptr){
	
	int boyut1,boyut2;
	boyut1=strlen(cptr);
	boyut2=strlen(kptr);
	int i=0;
	int j=0;
	int k=0;
	int sonuc=-1;
	while(i< (boyut1- boyut2)){
		
		k=i;
		j=0;
		sonuc=1;
		while(j<boyut2){
			
			if( cptr[k]!=kptr[j]){
			
			sonuc=0;
			break;	
			}
			
			j++;
			k++;
		}
		if(sonuc==1){
			return i;
		}
		
		i++;
	}
	return -1;
}


int main(){
	char cumle[100];        // bunlar dizi old için pointer kullanabiliriz
	char kelime[20];
	printf("cumleyi girin: ");
	gets(cumle);
	printf("kelimeyi girin: ");
	scanf("%s",&kelime);
	
	int indis=kelimeara(cumle,kelime);
	
	if(indis==-1){
		printf("aranan kelime cumle icerisinde yok");
	}
	else{	
		printf("aranan kelime cumlenin %d. indisinden basliyor",indis);
	}
	
	
	
	return 0;
}

















/*#include <stdio.h>
#include <stdlib.h>

void cumleyi_Tersten_yazdir(char *mptr){
	
	int boy=strlen(mptr);
	int i=boy-1;
	while(i>=0){
		printf("%c",mptr[i]);
		i--;
	}
	printf("\n");
}


void kelimeyi_tersten_yazdir(char *kptr){
	int boy=strlen(kptr);
	int i=boy-1;
	int j=0;
	
    char * kelime= (char * ) malloc(boy * sizeof(char));
    
    while(i>=-1){
    	
    	kelime[j]=kptr[i];
    	if(kelime[j]==' ' || i==-1){
    		kelime[j]='\0';
    		strrev(kelime);
    		printf("%s ",kelime);
    		j=-1; 
		}
		i--;
		j++; 
	}
	
}



int main() {
	
	char metin[50];
	int i;
	gets(metin);

    cumleyi_Tersten_yazdir(metin);
    kelimeyi_tersten_yazdir(metin);
    
   printf("\n\n strrev ile %s",strrev(metin)); 
   
	return 0;
}*/
