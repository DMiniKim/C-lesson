#include <stdio.h>
#include <Windows.h>

void main()
{
#pragma region 대입 연산자 (=)
	// 대입 연산자란 오른쪽에 있는 피 연산자(값,데이터)를
	// '=' 를 기준으로 왼쪽에 있는 피 연산자(변수,대상)에
	// 저장하는 것.

	// 수학적으로 접근하면 
	// a = b -----> a와 b는 같다 이지만
	// 프로그래밍에서는 
	// a = b -----> a에 b의 값을 넣는다 라는 뜻이다.

	// 그러므로 '='는 '같다' 가 아닌 '값을 넣는다'로
	// 생각하는 것이 옳다.

	//int i = 3246;

	// 위의 변수 선언을 보고 
	// 수학적 접근 시 i 와 3246은 같다 라고 해석된다.

	// 다만 프로그래밍 언어에서 접근은
	// i에 3246이라는 데이터를 저장한다 라는 뜻이다.

	// ex ) i 라는 이름의 변수는 {},()안에
	// 단 하나 밖에 존재하지 않는 이름이지만
	// 3246이라는 숫자는 어디에든 쓰일 수 있다.
	// 그렇기에 같은 것이 아니라고 생각하는 것이 옳다.

	// 이것 말고도 복합대입 연산자라고 있는데
	// 연산을 하고 대입하는 행위를 단축한다고 보면된다.
	// 쓰일 수 있는 복합대입 연산자의 종류는 아래와 같다.
	// += , -= , %= , ^= ,/= , &= ,<<= 
	// 아래 예시를 보자

	//int a = 10;
	//int b = 5;



#pragma endregion

#pragma region 반복문
	// 프로그램내에서 특정한 작업을 반복적으로
	// 수행하는 명령문.

#pragma region 증감 연산자 (++,--)
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.
#pragma region 전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행하는 연산자.

	// 내 예시

	//int a = 0;
	//int b = ++a;
	//printf("전위 증감시킨 값 a : %d을 b에 할당함.b : %d\n", a, b);
	//b = --a;
	//printf("전위 증감시킨 값 a : %d을 b에 할당함.b : %d\n", a, b);

	// 강사님 예시

	// int protine = 0;
	// int calorie = ++protine;
	// 
	// printf("protine 변수의 값 : %d\n", protine);
	// printf("calorie 변수의 값 : %d\n", calorie);
	// 
	// calorie = --protine;
	// 
	// printf("protine 변수의 값 : %d\n", protine);
	// printf("calorie 변수의 값 : %d\n", calorie);



#pragma endregion
#pragma region 후위 증감 연산자
	// 연산을 수행한 다음 변수의 값을 증감시키는 연산자

	// int a = 0;
	// int b = 0;
	// 
	// a = b++;
	// 
	// printf("a : %d 에 원래 값인 0을 대입 후 b++ 값인 %d 를 b에 대입함.\n", a, b);
	// 
	// printf("현 상황 a : %d\n", a);
	// printf("현 상황 b : %d\n", b);
	// 
	// a = b--;
	// 
	// printf("a : %d 에 원래 값인 1을 대입 후 b-- 값인 %d 를 b에 대입함.\n", a, b);
	// 
	// printf("현 상황 a : %d\n", a);
	// printf("현 상황 b : %d\n", b);
#pragma endregion

#pragma endregion

#pragma region for 문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 수만큼 반복하는 반복문
	// 1. 초기식 2. 조건식 3. 반복문 내용 4. 증감식

	// 동작 순서
	// "초기화 -> 조건 검사 -> 실행 -> 증감의 구조에 따라 증감"

	//for (int i = 0; i < 5 ; i++)
	//{	
	//	system("cls");
	//	printf("Hello World\n");
	//}

#pragma endregion

#pragma region while 문
	// 특정 조건을 만족할 때까지 계속해서
	// ( 즉, 조건식의 내용이 "아니게 되면" 멈춘다.)
	// 주어진 명령문을 실행하는 반복문

	// int i = 1;
	// while (i++ != 0)
	// {	
	// 	 system("cls");
	// 	 printf("i = %d\n", i);
	// 	 Sleep(300);
	// }

	// 반복문을 순차적으로 실행하면서 조건 분기를 만나게 되면
	// 어느 쪽으로 실행 흐름이 갈지 미리 예측입니다
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문.
	//int connect = 0;
	//do
	//{
	//	printf("Access");
	//} while (connect > 3);
	//{
	//	printf("%d",connect);
	//	connect++;
	//}

	// 반복문의 경우 미리 예측해서 실행하는 구조를 가지며,
	// 예측이 틀렸다면 현재 반복문 내의 조건 분기만 다시
	// 검사하여 처리함.
#pragma endregion

#pragma region nested for 문
//	for (int i = 0; i < 3; i++)
//	{
//		printf("i = %d   ", i);
//		for (int j = 0; j < 3; j++)
//		{
//			printf(" j = %d", j);
//		}
//		printf("\n");
//	}
#pragma endregion


#pragma endregion

}
