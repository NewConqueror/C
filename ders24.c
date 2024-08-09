#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matris[2][3]={10,20,30,40,50,60}; // önce satýrý doldurur sonra sütunu 0-0 0-1 0-2 1-0 1-1 1-2 gibi
	
    int i,j;
    for(i=0;i<2;i++){                                            // adým 1 kaça kaçlýk
    	for(j=0;j<3;j++){                                        // adým 2 verileri gir
    		printf("%d ",matris[i][j]);                          // adým 3 verileri dön
		} printf("\n");                                          // adým 4 verileri yazdýr
	}  
	
	return 0;
}
