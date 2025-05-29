#include <stdio.h>
#define ARR_SIZE 5

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	//	int arr[ARR_SIZE] = { 10,20,30,40 };
	//	
	//	//
	//	int arr_size = sizeof(arr) / sizeof(int);
	//	
	//	int temp[ARR_SIZE] = {0};
	//	
	//	int* point = temp;
	//	
	//	for (int i = 0; i < ARR_SIZE; i++)
	//	{
	//		scanf_s("%d", &point[i]);
	//		//point[i] = (i * 10) + 10;
	//		printf("temp %d 번째 값 : %d\n", i, point[i]);
	//	}
	//	printf("배열의 사이즈는 : %d byte입니다", sizeof(int) * ARR_SIZE);


	// 배열의 첫 번째 원소는 0 부터 시작합니다.

	//	int list[5] = { 1,2,3,4,5 };
//
	//	int* point = list;
//
	//	*point = 99;
//
	//	for (int i = 0; i < 5; i++)
	//	{
	//		*(point+i) = (99-i);
//
//
	//		printf("%d\n", list[i]);
	//		printf("%p\n\n", &list[i]);
	//	}

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며
	// 배열의 크기는 컴파일 되는 시점부터 고정된 메모리 공간을 가진다.

	// float container[] = { 10.f, 12.5f,15.0f,17.5f };

	// 배열의 크기는 생략할 수 있으며 , 초기화 목록에서
	// 설정한 요소에 따라 배열의 크키가 결정된다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.
	
	// 
	// const char* str = "Hello world";
	// printf("%s\n", str);
	// 
	// 
	// str = "Lost A\0rk";
	// printf("%s\n", str);

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
	// 할 수 있으며 , 문자열 상수는 데이터 영역에 읽기 전용 공간에
	// 저장되기 떄문에 문자열의 값을 변경할 수 없습니다.
	// 
	// 문자열의 공백도 함께 메모리 공간에 포함하여 크기가 결정되며
	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	// 문자열을 저장하게 되면 맨 마지막에 무효의 문자까지
	// 메모리 공간에 저장됩니다.

	// char name[] = "Kim Dong Min";
	//  printf("%s\n", name);
	//  name[0] = 'S';
	//  printf("%s\n",name);
	//  char mded[] = "dawdw";
	// name = mded; // <- 불가
#pragma endregion

#pragma region ASCII CODE
	// 아스키 코드는 미국에서 표준화한 정보교환용
	// 7비트 부호체계다.
	// 000(0x00) 부터 127(0x7F) 까지 128개의 부호가 사용된다.


#pragma endregion

}