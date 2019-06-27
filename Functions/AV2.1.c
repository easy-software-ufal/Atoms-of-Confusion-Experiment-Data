#include <stdio.h>
#include <math.h>

void func1(){
	int number1 = 1, number2 = 3, c, tmp1 = 2;
	while((number1 = number2 = ((number2 - 1) / number1)) != 0){
		if (number1){
			number1 = (tmp1 * 4) / 2;
		}
		if (number2){
			number2 = (tmp1 * 4) - 1;
		}
		if (number2 > 1000){
			if (((number2 + 1) / 100) / (number1 / 100) == 2){
				printf("%d and %d\n", number2, number1);
				return;
			}
		}
		tmp1 = number1;
	}
}

int main(){
	func1();
	return 0;
}