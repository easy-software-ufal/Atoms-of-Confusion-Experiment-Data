#include <stdio.h>
#include <math.h>

void func1(){
	int initial_hour = 11;
	int hour = initial_hour;
	int flagMourning = 0, flagNoon = 0, flagAfternoon = 0, quantity = 0;
	while (hour >= -1) {
		if (hour < 0) {
			if (quantity - 1 < 12) {
				flagMourning = 1;
				break;
			}
			else if (quantity - 1 == 12) {
				flagNoon = 1;
				break;
			}
		}
		else {
			flagAfternoon = 1;
		}
		hour--;
		quantity++;
	}
	if (flagNoon) {
		printf("noon\n");
	} 
	else if (flagAfternoon) {
		printf("%dpm\n", initial_hour);
	}
	else if (flagMourning) {
		printf("%dam\n", initial_hour);
	}
}

int main(){
	func1();
	return 0;
}