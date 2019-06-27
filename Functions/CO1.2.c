#include <stdio.h>

void func1(int limit1, int limit2, int this, int array[])
{
	int center;
	while (limit1 <= limit2)
	{
		center = (limit1 + limit2) / 2;
		if (array[center] == this){
			printf("%d\n", center);
			return;
		}
		else{
			if (array[center] < this){
				limit1 = center + 1;
			}
			else
			{
				limit2 = center;
			}
		}
	}
	printf("-1\n");
	return;
}

int main() {
	int array[] = {1, 48, 75, 92, 147, 218, 219, 880, 1002, 1500, 2000};
    func1(0, 10, 218, array);
	return 0;
}