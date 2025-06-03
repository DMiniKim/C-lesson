#include <stdio.h>
#include <stdarg.h>

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
	return left, right;
}
void CallByReference(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("포인터 활용한 함수 내부 변화 상황 : %d , %d\n", *x, *y);
}

void Recursion(int count)
{
	if (count <= 0) return;
	count--;
	printf("Recursion\n");
	Recursion(count);
}

void OnCollision()
{
	printf("Collision\n");
}

void Average(int count, ...)
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터
	// va_start : 가변 인수를 가져올 수 있도록 포인터를 지정하는 함수
	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수
	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화 하는 함수

	va_list point;
	va_start(point, count); // 지정하는 함수랬으니 선언 느낌
	double sum = 0.0f; // 합산할 변수들을 담을 변수
	for (int i = 0; i < count; i++)	// va_arg() 함수는 값을 반환(?) 후 포인터를 옮겨주니까 for문
	{
		sum += va_arg(point, int);
	}
	double average = sum / count;	//합산후 평균값 저장

	printf("average : %.2lf\n", average);
	va_end(point);
}

void Provide()
{
	printf("Provide\n");
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

	// int x = 10;
	// int y = 20;
	// 
	// printf("CallByValue 함수 전 : %d , %d \n", x, y);
	// CallByValue(x, y);
	// printf("CallByValue 함수 후 : %d , %d \n", x, y);
	// 
	// printf("===================================\n");
	// 
	// printf("CallByReference 함수 전 : %d , %d \n", x, y);
	// CallByReference(&x, &y);
	// printf("CallByReference 함수 후 : %d , %d \n", x, y);

	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의
	// 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수
	// int a = 3;
	// Recursion(a); // 위 함수 목록 참조
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// OnCollision();

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리속도가
	// 빠르지만 , 인라인 함수를 많이 사용하게 되면 함수의 코드가
	// 복사되기 떄문에 실행 파일의 크기가 커지게 됩니다.
#pragma endregion

#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은
	// 인수를 추가로 받을 수 있는 인수입니다. // stdarg.h -> va.list , va_start , va_arg , va_end

	// Average(5, 10, 20, 20, 20, 40);
#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소 값을 저장하고 가리킬 수 있는
	// 포인터 변수입니다.

	// void(*provide)();
	// provide = Provide;
	// provide();
#pragma endregion





#pragma endregion

}