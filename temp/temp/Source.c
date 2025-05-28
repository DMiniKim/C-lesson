#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자.

	//int data = 0;
	
	//printf("data 의 주소는 : %p 입니다.\n", &data);

	// 데이터의 주소 값은 데이터가 저장된 메모리의
	// 시작 주소를 의미합니다.
#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞춰 입력해주는 함수입니다.

	// int data = 0;
	// 
	// printf("아무 숫자나 입력해주세요 : ");
	// 
	// // 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없다.
	// 
	// scanf_s("%d", &data);
	// 
	// // 버퍼는 테이터가 이동할 때 임시로 저장되는 공간이며,
	// // 형식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됨.
	// 
	// printf("당신이 입력하신 숫자는 %d 입니다\n", data);
	// 
	// // 표준 입력 함수로 데이터를 입력하게 되면
	// // 버퍼에 데이터를 보관하였다가 입력하는 순간,
	// // 버퍼 안의 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	// 매모리의 주소 값을 저장할 수 있는 변수.

	// ===================================================


	//int target = 10;
	//
	//int* point = &target;
	//
	//printf("pointer 변수로 target의 변수인 %d 를 변경하세요 : " , target);
	//
	//scanf_s("%d", &*point);
	//
	//printf("변경하신 값은 %d 입니다\n", *point);

	// int packet = 10;
	// int* pointer = &packet;
	// 
	// printf("packet의 주소 : %p\n", &packet);
	// printf("pointer에 저장된 주소 값 : %p\n", pointer); // <-packet의 주소가 담겨있음.
	// printf("pointer에 역참조된 값 : %d\n", *pointer); // * <- 를 통해서 역참조한다.

	// ===================================================

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 '변수 시작 주소'를 저장하게 되면
	// 해당 변수의 시작 주소를 가리키게 됩니다.

	// 포인터 변수는 포인터가 가리키는 메모리 공간의 자료형은
	// 알 수 없으므로, 포인터가 가리키는 메모리의 자료형을
	// 선언해주어야 합니다.
	
	// =============================
	
	// int* pointer = NULL;
	// printf("pointer 변수의 크기 %u\n", sizeof(pointer));
	
	// ===================================================

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수
	// 있는 크기로 정해지며 , 한 번에 처리할 수 있는 크기는 운영
	// 체제에 따라 크기가 결정됩니다.

	// ===================================================

	// int packet = 99;
	// int storage = 20;
	// 
	// int* point = &packet;
	// 
	// 
	// printf("pointer의 현재 주소 : %p\n", point);
	// printf("pointer의 현재 값 : %d\n", *point);
	// 
	// point = &storage;
	// 
	// printf("pointer의 변경된 주소 : %p\n",point);
	// printf("pointer의 변경된 값 : %d\n", *point);

	// ===================================================
#pragma endregion

#pragma region 상수 지시 포인터 // 역참조 값 변경 불가
	// 포인터가 가리키는 주소에 저장되어 있는  

	// ====================================================

	// int height = 10;
	// int width = 20;
	// 
	// printf("현재 저장된 height의 값 : %d\n", height);
	// printf("현재 저장된 width의 값 : %d\n", width);
	// printf("=========포인터에 주소대입===========\n");
	// const int* point = &height;
	// 
	// // *point = 40; // 상수화 되어서 포인터 역참조로 값을 변경하는 것은 불가.
	// height = 40; // 직접 개입 가능.
	// printf("==========height 값 변경==========\n");
	// printf("height의 주소 : %p\n", &height);
	// printf("width의 주소 : %p\n", &width);
	// printf("====================\n");
	// printf("상수화 된 포인터에 저장된 값 : %d\n", *point);
	// printf("상수화 된 포인터에 저장된 주소 : %p\n", point);
	// 
	// point = &width;
	// printf("==========주소 변경==========\n");
	// printf("상수화 된 포인터에 저장된 값 : %d\n", *point);
	// printf("상수화 된 포인터에 저장된 주소 : %p\n", point);
	// 
	// ====================================================
	
	// int height = 10;
	// int width = 20;
	// 
	// const int* constpointer = &height;
	// 
	// //
	// printf("constPointer의 주소값 : %p\n", constpointer);
	// printf("constPointer의 가리키는 값 : %d\n", *constpointer);
	// constpointer = &width;
	// printf("constPointer의 주소값 : %p\n", constpointer);
	// printf("constPointer의 가리키는 값 : %d\n", *constpointer);
	//
	
#pragma endregion

#pragma region 포인터 상수 // 주소 변경 불가
	// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없도록
	// 지정되어있는 포인터.

	// int monsterDamage = 50;
	// int playerBasicDamage = 100;
	// 
	// printf("현재 저장된 몬스터데미지 값 : %d\n", monsterDamage);
	// printf("현재 저장된 몬스터데미지 주소 : %p\n", &monsterDamage);
	// printf("현재 저장된 플레이어 기본데미지 값 : %d\n", playerBasicDamage);
	// printf("현재 저장된 플레이어 기본데미지 주소 : %p\n", &playerBasicDamage);
	// printf("==========포인터에 주소 대입==========\n");
	// int* const point = &monsterDamage;
	// 
	// printf("포인터에 저장된 값 : %d\n", *point);
	// printf("포인터에 저장된 주소 : %p\n", point);
	// 
	// // point = &playerBasicDamage; // 포인터가 가리키고 있는 주소 값 변경불가.
	// *point = 70;
	// printf("==========포인터로 데미지 변경==========\n");
	// 
	// printf("포인터에 저장된 값 : %d\n", *point);
	// printf("포인터에 저장된 주소 : %p\n", point);

#pragma endregion

#pragma region Generic 포인터 (범용 포인터)
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터

	char grade = 'A';
	int score = 90;
	float average = 2.1f;
	void* point = &grade;

	

	printf("char grade 의 주소 : %p\n", &grade);
	printf("char grade 의 값 : %c\n\n", grade);
	printf("int score 의 주소 : %p\n", &score);
	printf("int score 의 값 : %d\n\n", score);
	printf("float average 의 주소 : %p\n", &average);
	printf("float average 의 주소 : %.1f\n\n", average);
	printf("point 의 주소 : %p\n\n", point);

	printf("=========================================\n\n");

	//*point = 'B'; ---> 불가능
	*(char*)point = 'S';
	point = &score;
	*(int*)point = 95;
	point = &average;
	*(float*)point = 1.9f;

	printf("char grade 의 주소 : %p\n", &grade);
	printf("char grade 의 값 : %c\n\n", grade);
	printf("int score 의 주소 : %p\n", &score);
	printf("int score 의 값 : %d\n\n", score);
	printf("float average 의 주소 : %p\n", &average);
	printf("float average 의 주소 : %.1f\n\n", average);

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수
	// 없으므로 , 범용 포인터가 가리키는 변수의 자료형으로
	// 변환해주어야 합니다.
#pragma endregion




}