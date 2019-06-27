#include <stdio.h>
#include <math.h>

void func1() {
	int number1 = 8;
	int number2 = 9;
	int number3 = 5;
	int i;	
	for (i = 0; i < 9; i++) {
		number1 += 8;
		number2 += 9;
		number3 += 5;
	}
	if(number1 > 45 && number1 < 90)
		if(number2 > 40 && number2 < 100)
			if(number3 < 30)
				printf("a");
		else if(number3 < 90)
			printf("b");
	printf("c\n");
}

int main( ){ 
	func1();
	return 0;
}