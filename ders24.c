#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matris[2][3]={10,20,30,40,50,60}; // �nce sat�r� doldurur sonra s�tunu 0-0 0-1 0-2 1-0 1-1 1-2 gibi
	
    int i,j;
    for(i=0;i<2;i++){                                            // ad�m 1 ka�a ka�l�k
    	for(j=0;j<3;j++){                                        // ad�m 2 verileri gir
    		printf("%d ",matris[i][j]);                          // ad�m 3 verileri d�n
		} printf("\n");                                          // ad�m 4 verileri yazd�r
	}  
	
	return 0;
}
