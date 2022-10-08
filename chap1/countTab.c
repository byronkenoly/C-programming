#include <stdio.h>

int main(){

	int c, tab;
	
	tab = 0;
	while((c = getchar())!= EOF){
		if (c == '\t'){
			++tab;
		}
	}
	/*printf("%d\n", tab);*/
	return 0;
}
