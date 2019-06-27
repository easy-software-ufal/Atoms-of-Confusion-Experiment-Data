#include <stdio.h>

void func1(){
	int number1 = 5;
	int flag = 0, loop = 0;
	number1 += number1 + (10 * 3);
	number1 /= 20;
	if (10 % number1 == 0){
		flag = 1;
	}
	while (flag) {
		if (loop == 5) {
			break;
		}
		if (number1 % 2 == 0) {
			number1 = number1 - 1;
		}
		else {
			number1 = number1 + 1;
		}
		number1 = number1 + 2;
		loop++;
	}
	if (number1 % 2 == 0) {
		number1 = (number1 * 2) - 1;
	}
	else {
		number1 = number1 + 1;
	}
	number1 = number1 * -1;
	number1 = number1 + 2;
	printf("%d\n", (-1 * number1) + 3);
}

int main(){
	func1();
	return 0;
}