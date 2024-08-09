#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int sayi;
	
	printf("gün sayýlarýndan birini giriniz :");
	scanf("%d",&sayi);
	
	switch(sayi){
		
		case 1 : printf("pzt"); break;
		case 2 : printf("sali"); break;
		case 3 : printf("crs"); break;
		case 4 : printf("pers"); break;
		case 5 : printf("cuma"); break;
		case 6 : printf("cmts"); break;
		case 7 : printf("pzr"); break;
		default : printf("gecersiz sayi girisi");
		break;
		
		
	}
	
	
	
	/*char ders;
	
	printf("ders kodu : ");
	scanf("%s",& ders);
	
	switch(ders){
		
		case 't': printf("turkce");
		break;
		case'm': printf("mat");
		break;
		case 'f': printf("fen");
		break;
		case's': printf("sosyal");
		break;
		default: printf("gecersiz ders kodu");
		break;
	}*/
	
	
	
	
	
	
	
	/*int sayi;
	printf("lutfen ay numarasi giriniz :");
	scanf("%d",&sayi);
	
	switch(sayi){
		
	case 1: printf("ocak");
	break;
	case 2: printf("subat");
	break;
	case 3: printf("mart");
	break;
	case 4: printf("nisan");
	break;
	case 5: printf("mayis");
	break;
	case 6: printf("haziran");
	break;
	case 7: printf("temmuz");
	break;
	case 8: printf("agustos");
	break;
	case 9: printf("eylul");
	break;
	case 10: printf("ekim");
	break;
	case 11: printf("kasim");
	break;
	case 12: printf("aralik");
	break;
	default: printf("gecersiz sayi girisi..");
	
	}*/
	
	
	
	
	
	
	return 0;
}
