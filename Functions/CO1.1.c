#include <stdio.h>
#include <math.h>

void func1(int limit1, int limit2, int this, int array[])
{
	int flag = 0;
	int center;
	while (!flag && limit1 <= limit2)
	{
		center = (limit1 + limit2) / 2;
		array[center] == this ? flag = 1 : (array[center] < this ? (limit1 = center + 1) : (limit2 = center));
	}
	if (!flag){
		printf("-1\n");
		return;
	}
	printf("%d\n", center);
	return;
}

int main()
{
    int array[] = {1, 48, 75, 92, 147, 218, 219, 880, 1002, 1500, 2000};
    func1(0, 10, 218, array);
	return 0;
}