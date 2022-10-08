#include <stdio.h>

/*These are symbolic constants
define  name replacement text*/
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){

	/*celsius to fahrenheit*/

	float fahr, celsius;
	float lower, upper, step;

	lower = -60;
	upper = 200;
	step = 20;
	
	printf("Celsisu\tFahr\n");

	celsius = lower;
	while(celsius <= upper){
		fahr = (9.0/5.0) * (celsius+32);
		printf("%6.1f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
}
