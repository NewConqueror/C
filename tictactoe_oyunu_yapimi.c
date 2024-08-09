#include <stdio.h>
#include <stdlib.h>

char matris[3][3]={'1','2','3','4','5','6','7','8','9'};

void matris_yazdir(){
	int i,j;
	for(i=0;i<3;i++){
		printf("\n\t"); 
		for(j=0;j<3;j++){
			printf("%c\t",matris[i][j]);
		}
		printf("\n\n");
	}
	
}

void Xgiris(int sayi){
	
	char *ptr=matris;
	
	*(ptr + sayi-1)='X';
	
}


void Ogiris(int sayi){
	
	char *ptr=matris;
	
	*(ptr + sayi-1)='O';
	
}

int sayi_uret(){
	
	int sayi= 1+ rand() %9 ;
	int sonuc=0;
	char *ptr=matris;
	
	while(sonuc!=1){
		
		if( * (ptr + sayi-1) ==88 || * (ptr + sayi-1)==79)  // 88='X'   79='O' yu temsil eder
		{
			sayi++;
			if(sayi==10)
			sayi=1;
			
		}
		else
		sonuc=1 ;
		
	}
	 
	 return sayi;
	 
}


int Xkontrol(){
	char *ptr= matris; 
	if(  *(ptr +0 ) == 88 &&  *(ptr +1 ) == 88 && *(ptr +2 ) == 88  )            // satýrlarý kontrol ediyoruz 
	return 1; 
	else if(  *(ptr +3 ) == 88 &&  *(ptr +4 ) == 88 && *(ptr +5 ) == 88  ) 
	return 1; 
	else if(  *(ptr +6 ) == 88 &&  *(ptr +7 ) == 88 && *(ptr +8 ) == 88  ) 
	return 1; 	
	else if(  *(ptr +0 ) == 88 &&  *(ptr +3 ) == 88 && *(ptr +6 ) == 88  )   // sütünlarý kontrol ediyoruz 
	return 1; 	
	else if(  *(ptr +1 ) == 88 &&  *(ptr +4 ) == 88 && *(ptr +7 ) == 88  ) 
	return 1; 
	else if(  *(ptr +2 ) == 88 &&  *(ptr +5 ) == 88 && *(ptr +8 ) == 88  ) 
	return 1; 	
	else if(  *(ptr +0 ) == 88 &&  *(ptr +4 ) == 88 && *(ptr +8 ) == 88  )       // çarprazlarý kontrol ediyoruz 
	return 1; 	
	else if(  *(ptr +6 ) == 88 &&  *(ptr +4 ) == 88 && *(ptr +2 ) == 88  ) 
	return 1; 	
	else
	return 0; 
	
}

int Okontrol(){
	char *ptr= matris; 
	if(  *(ptr +0 ) == 79 &&  *(ptr +1 ) == 79 && *(ptr +2 ) == 79  )            // satýrlarý kontrol ediyoruz 
	return 2; 
	else if(  *(ptr +3 ) == 79 &&  *(ptr +4 ) == 79 && *(ptr +5 ) == 79  ) 
	return 2; 
	else if(  *(ptr +6 ) == 79 &&  *(ptr +7 ) == 79 && *(ptr +8 ) == 79  ) 
	return 2; 
	
	else if(  *(ptr +0 ) == 79 &&  *(ptr +3 ) == 79 && *(ptr +6 ) == 79  )       // sütünlarý kontrol ediyoruz 
	return 2; 	
	else if(  *(ptr +1 ) == 79 &&  *(ptr +4 ) == 79 && *(ptr +7 ) == 79  ) 
	return 2; 
	else if(  *(ptr +2 ) == 79 &&  *(ptr +5 ) == 79 && *(ptr +8 ) == 79  ) 
	return 2; 
	
	else if(  *(ptr +0 ) == 79 &&  *(ptr +4 ) == 79 && *(ptr +8 ) == 79  )       // çarprazlarý kontrol ediyoruz 
	return 2; 	
	else if(  *(ptr +6 ) == 79 &&  *(ptr +4 ) == 79 && *(ptr +2 ) == 79  ) 
	return 2; 
	
	else
	return 0; 
	
}



int main() {
	srand(time(NULL));
	int sayi,sonuc=0;
	int adet=1;
	
	matris_yazdir();
	
	while( adet!=5 ){
		adet++;
		
		printf("X isaretinin konulacagi yeri secin: ");  scanf("%d",&sayi);
		
		Xgiris(sayi);
		matris_yazdir();
		
		sonuc=Xkontrol();
		if(sonuc==1){
			printf("KAZANDINIZ");
			break;
		}
		
		printf("O isaretinin konulacagi kutu: ");
		
		sayi=sayi_uret();
		printf("%d",sayi);
		
		Ogiris(sayi);
		matris_yazdir();
		
		sonuc=Okontrol();
		if(sonuc==2){
			printf("KAYBETTINIZ");
			break;
		} 
		
		if(adet==5){
			printf("BERABERE");
		}
		
	}
	
	
	return 0;
}
