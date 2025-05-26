#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라
	// 동작을 수행하도록 실행하는 명령문.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여
	// 그 결과를 0 or 1 이라는 값으로 나타내는 연산자.

	// 종류
	// > : 왼쪽의 값이 더 크다면 true;
	// < : 오른쪽의 값이 더 크다면 true;
	// 
	// >= : 왼쪽의 값이 크거나 같다면 true;
	// <= : 오른쪽의 값이 크거나 같다면 true;
	// 
	// == : 둘의 값이 같으면 true;
	// != : 둘의 값이 다르다면 true;

	// int state1 = (10 > 3);
	// int state2 = (10 < 3);
	// int state3 = 10 >= 3;
	// int state4 = 10 <= 3;
	// int state5 = 10 == 3;
	// int state6 = 10 != 3;
	// printf("10 > 3 state1 : %d\n", state1);
	// printf("10 < 3 state2 : %d\n", state2);
	// printf("10 >= 3 state3 : %d\n", state3);
	// printf("10 <= 3 state4 : %d\n", state4);
	// printf("10 == 3 state5 : %d\n", state5);
	// printf("10 != 3 state6 : %d\n", state6);

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	// 실행되는 조건문

	// if문은 조건이	1 (true) 일 때 실행 
	//				0 (false)일 때 실행하지 않음.
	//int monsterDamage = 100;
	//int armor = 100;
	//if (armor >= monsterDamage)
	//{
	//	printf("방어!\n");
	//}
#pragma endregion

#pragma region else if문
	// if 문에서 여러 개의 조건을
	// 순차적으로 검사하고 싶을 때
	// 사용가능 한 조건문.

	// else if문의 경우 여러 개를 쓸 수 있으며,
	// if 문부터 하나씩 아래로 검사하다가
	// 조건이 가장 맞는 분기로 들어갑니다.

	//int attackDamage = 10;
	//int monsterHp = 50;
	//
	//if (attackDamage >= monsterHp)
	//{
	//	printf("Exp를 얻으셨습니다");
	//}
	//else if(attackDamage < monsterHp)
	//{
	//	printf("%d Hit !", attackDamage);
	//}
#pragma endregion

#pragma region else 문
	// if 문을 포함한 여러 조건문에서 모든 조건문이 맞지 않는 경우
	// 실행되는 조건문
	//int num = -256;
	//if (num > 0)
	//{
	//	printf("%d 은(는) 양수입니다\n",num);
	//}
	//else if (num < 0)
	//{
	//	printf("%d 은(는) 음수입니다\n", num);
	//}
	//else
	//{
	//	printf("%d 은(는) 양수도 , 음수도 아닙니다\n", num);
	//}

	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됨.
#pragma endregion

#pragma region 논리 연산자
	// 두 개 이상의 조건을 결합하거나 하나의 조건을 
	// 반전시키는 연산자.

#pragma region AND 연산자
	// 두 개의 조건이 둘 다 맞다면 실행되는 연산자.
	//int score = 60;
	//int attendance = 80;
	//
	//if (score >= 60 && attendance >= 80)
	//{
	//	printf("Granduate");
	//}

#pragma endregion

#pragma region OR 연산자

// 두개의 조건 중 하나라도 참이라면 실행되는 연산자

// 조건문의 논리 표현식을 평가하는 도중
// 결과가 이미 확정났다면 , 그 이후의 평가를 생략합니다.
// (좌측 선연산 후 우측 연산)

//int x = 0;
//
//if (x != 0 || x++)
//{
//	printf("%d",x);
//}

#pragma endregion

#pragma region NOT 연산자
	// 하나의 조건을 반전시키는 연산자 입니다.

//char grade = 'S';
//if (!grade)
//{
//	printf("S등급을 받지 못했습니다.");
//}
//else
//{
//	printf("축하합니다 S 등급이십니다\n");
//}
//
//int power = 0;
//if (!power)
//{
//	printf("The power is on");
//}
//else
//{
//	printf("The power is off");
//}
#pragma endregion

#pragma region 사분면
//int x = 85/5;
//int y = -1;
//
//if (x == 0) // X 절편의 경우
//{
//	if (y > 0)
//	{
//		printf("x : %d , y : %d 는 1,2 x절편입니다", x, y);
//	}
//	else if (y < 0)
//	{
//		printf("x : %d , y : %d 는 제 3,4 x절편입니다", x, y);
//	}
//}
//else if (y == 0) // y 절편의 경우
//{
//	if (x > 0)
//	{
//		printf("x : %d , y : %d 는 1,4 y절편입니다", x, y);
//	}
//	else if (x < 0)
//	{
//		printf("x : %d , y : %d 는 제 2,3 y절편입니다", x, y);
//	}
//}
//else if (x > 0) // 1,4 분면의 경우
//{
//	if (y > 0)
//	{
//		printf("x : %d , y : %d 는 제 1 사분면입니다", x, y);
//	}
//	else if (y < 0)
//	{
//		printf("x : %d , y : %d 는 제 4 사분면입니다", x, y);
//	}
//}
//else if (x < 0) // 2,3 분면의 경우
//{
//	if (y > 0)
//	{
//		printf("x : %d , y : %d 는 제 2 사분면입니다", x, y);
//	}
//	else if (y < 0)
//	{
//		printf("x : %d , y : %d 는 제 3 사분면입니다", x, y);
//	}
//}
//else  // 원점의 경우
//{
//	printf("x : %d , y : %d 원점입니다", x, y);
//}
//

#pragma endregion

#pragma region switch 문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문

	// switch문에는 조건식으로 실수형 변수와 실수형 상수를
	// 선언할 수 없다.

//int state = -4;
//
//switch (state)
//{
//case 0: 
//	printf("IDLE");
//	break;
//case 1: 
//	printf("ATTACK");
//	break;
//case 2: 
//	printf("DIE");
//	break;
//default:
//	printf("Exception");
//	break;
//}
#pragma endregion


#pragma endregion

#pragma endregion


}
