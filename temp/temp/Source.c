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

#pragma endregion

	
}
