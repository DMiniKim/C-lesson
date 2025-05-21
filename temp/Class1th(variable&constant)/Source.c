#include <stdio.h>

void main()
{
#pragma region 선언~하기

	// HI heogkwlqsfjkdgjqle <<--무력화 시키는 위대하고도 위대한 주석("//")
	// printf("Computer가 쓰는 언어 = C 언어");
#pragma endregion

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.
	//
	// 자료형은 각각의 자료형마다 크기가 정해져 있으며
	// 자료형의 크기는 바이트 단위로 이루어집니다.
	//
	// 자료형의 경우 자료형에 따라 저장할 수 있는
	// 종류와 범위가 결정됩니다.
#pragma endregion

#pragma region 변수
	// 변수란? ---> 데이터를 저장할 수 있는 메모리 공간을 생성하는 것.
	char alphabet = 'A';

	int integer = 100;

	float decimal = 36.5f;

	// 1. 변수의 이름은 대문자와 소문자를 구별하여 사용할 수 있습니다.

	// ex) int score = 100;
	//     int SCORE = 50;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.

	// ex) int int = 10 ; <<<----------- X

	// 3. 변수의 이름에 공백이 포함될 수 없습니다.

	// ex) int x value = 30 ;

	// 4. 변수의 이름으로 특수 기호는 "_" 와 "$" 만 사용할 수 있습니다.

	// ex) int x_value = 30;

	// 5. 변수 이름은 숫자로 시작할 수 없습니다.

	// ex) int 5day = 5; <--- 불가능;
	// ex) int minus5day = -5;  <------ 가능;

#pragma endregion
	// 디버깅
#pragma region 네이밍 컨벤션
	// camel 표기범 
	// ex ) underScore ---> 변수

	// pascal 표기법
	// ex ) Attack() ----> 함수

	// snake 표기법
	// ex ) MAX_SIZE ----> 매크로
#pragma endregion

#pragma region 상수

	// 프로그램 실행 중에 더 이상 값이 변경되지 않는 메모리

	// const float pi = 3.141592f;

	// pi = 6666.44444f;

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴 상수라고 하며,
	// 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.


#pragma endregion

#pragma region 산술 연산자

	// 1.변수 = 변수 + 리터럴 상수
	// 2.변수 = 리터럴 상수 - 심볼릭 상수
	// 3.변수 = 변수 * 심볼릭 상수
	// 4.변수 = 변수 / 리터럴 상수
	// 5.변수 = 리터럴 상수 % 리터럴 상수

	//// 1
	//
	//int minute = 0;
	//int totaltime = minute + 1;
	//printf("현재 더한 시간은 %d 입니다\n", totaltime);
	//
	//// 2
	//
	//const int armor = 10;
	//int totalDamage = 100 - armor;
	//printf("받은 데미지는 %d 입니다\n", totalDamage);
	//
	////3
	//
	//float qskilldamage = 3.21f;
	//const float coefficient = 1.3f;
	//float qskillTotalDamage = qskilldamage * coefficient;
	//printf("Q스킬 총합데미지는 %.2f 입니다\n", qskillTotalDamage);
	//
	////4
	//
	//float exp = 1656.33f;
	//float expPercentage = exp / 100000;
	//printf("현재 exp는 %.2f%%입니다\n", expPercentage);
	//
	////5
	//
	//int length = 1 % 3;
	//printf("길이는 %d cm입니다\n", length);
	//
	//


#pragma endregion




}
