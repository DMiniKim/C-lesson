#include <stdio.h>

int Eternal(int a)
{
	if (a == 100) return a;

	a++;
	Eternal(a);
}

void Stats(int health, const char* name)
{
	printf("%s 의 체력 : %d\n", name, health);
}

int CallByValue(int left, int right)
{
	int temp = left;
	left = right;
	right = temp;
	printf("일반적인 함수 내부 변화 상황 : %d , %d\n", left, right);
	return left,right;
}
void CallByReference(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("포인터 활용한 함수 내부 변화 상황 : %d , %d\n", *x, *y);
}


void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합이다.

	// 함수는 프로그램이 실행 중일 때 함수 호출 위치에서
	// 해당 함수로 이동시킨 뒤, 작업을 수행하고
	// 다시 원래 위치로 돌아오는 구조이다.

	// int a = 1;
	// 
	// printf("%d", Eternal(a));

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 여러 개의 매개 변수를 생성할 수 있습니다.
	// Stats(100, "Slime");
	// Stats(5000, "Junior Golem");

#pragma endregion
#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.

	int x = 10;
	int y = 20;
	
	printf("CallByValue 함수 전 : %d , %d \n", x, y);
	CallByValue(x, y);
	printf("CallByValue 함수 후 : %d , %d \n", x, y);

	printf("===================================\n");

	printf("CallByReference 함수 전 : %d , %d \n", x, y);
	CallByReference(&x, &y);
	printf("CallByReference 함수 후 : %d , %d \n", x, y);

	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의
	// 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma endregion

}