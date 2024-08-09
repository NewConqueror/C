#include <stdio.h>
#include <stdlib.h>


int main() {

	char *ilk[3]={"mart","nisan","mayis"};
	char *yaz[3]={"haziran","temmuz","agustos"};
	char *son[3]={"eylul","ekim","kasim"};
	char *kis[3]={"aralik","ocak","subat"};
	
	char **mevsimler[4];
	mevsimler[0]= ilk ;
	mevsimler[1]= yaz ; 
	mevsimler[2]= son ;
	mevsimler[3]= kis ;
int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%s\t",mevsimler[i][j])  ; // = ilkbahar[j]
		} printf("\n");
	}
	
	return 0;
}
