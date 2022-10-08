#include <stdio.h>

int main(){
	
	/*fahrenheit to celsius*/	
	
	float fahr, celsius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 30.0;

	fahr = lower;
	printf("Fahr\tCelsius\n");
	while(fahr <= upper){
		celsius = 5.0 * (fahr-32.0)/9.0;
		printf("%6.1f\t%6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}
