#include <stdio.h>
#include <math.h>

int func2(int x, int y, int z){
	return x < y + z;
}

void func1()
{
	int size1 = 30 - 6;
	int size2 = 5 - 2;
	int size3 = 8 - 5;
	int size4 = 78 - 74;
	int size5 = sqrt(pow(size1, 2) + pow(size3, 2));
	int size6;
	int flag = 1;
	int c1 = func2(size2, size4, size6);
	int c2 = func2(size4, size2, size6);
	int c3 = func2(size6, size2, size4);
	c3 = !(size5 > size6);
	c2 = c3;
	c1 = c2;
	flag = c1;

	if(!flag){
		size6 = sqrt(pow(size2, 2) + pow(size4, 2));
	} else {
		size6 = size4 - size2;
	}
	printf("%d %d %d\n", size2, size4, size6);
}

int main() {
	func1();
	return 0;
}