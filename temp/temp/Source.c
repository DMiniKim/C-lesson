#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void Shuffle(int arr[], int size)
{	
	printf("섞었습니다\n");
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;
		int temp = arr[seed];
		arr[seed] = arr[i];
		arr[i] = temp;
	}
		
}


int main()
{
#pragma region 의사 난수
	// rand() : 0~ 32767 사이의 난수의 값을 반환하는 함수입니다.
	// time(NULL); 1970/01/01 (00:00:00) UTC 이후에 지난 초(second)를
	//			   반환하는 함수

	// srand(seed) : 난수 생성기의 시드를 설정하는 함수입니다.

	//	 srand(time(NULL));
	//	 int a = 0;
	//	 while (a == 0)
	//	 {
	//	 	printf("%d\n", (rand() % 10) + 1);
	//	 	Sleep(100);
	//	 }
	
#pragma endregion

#pragma region Shuffle 함수
	//	srand(time(NULL));
	//	
	//	int a = 0;
	//	int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	
	//	int size = sizeof(list)/ sizeof(int);
	//	
	//	while (a == 0)
	//	{
	//		if (GetAsyncKeyState(VK_RETURN))
	//		{
	//			Shuffle(list, size);
	//			for (int i = 0; i < size; i++)
	//			{
	//				printf("list %d 번째 값 : %d\n", i, list[i]);
	//			}
	//		}
	//		Sleep(100);
	//	}
	
#pragma endregion

#pragma region UP & DOWN 게임
	
	//	int hp = 5;
	//	const char* heart = "♡";
	//	srand(time(NULL));
	//	int randNum = rand() % 50 +1;
	//	
	//	int input = 0;
	//	while (hp != 0)
	//	{
	//		system("cls");
	//		printf("남은 체력 : ");
	//		for (int i = 0; i < hp; i++)
	//		{
	//			printf("%s", heart);
	//		}
	//		printf("\n");
	//		
	//		printf("컴퓨터가 생각하는 숫자를 맞추시오 : ");
	//		scanf_s("%d", &input);
	//		if (input > randNum)
	//		{
	//			system("cls");
	//			printf("그거보다 작은데ㅋㅋ\n");
	//			hp--;
	//		}
	//		else if (input < randNum)
	//		{
	//			system("cls");
	//			printf("그거보다 큰데ㅋㅋㅋ\n");
	//			hp--;
	//		}
	//		else if (input == randNum)
	//		{
	//			system("cls");
	//			printf("\n");
	//			printf("V I C T O R Y");
	//			printf("\n");
	//			break;
	//		}
	//		Sleep(1000);
	//	}
	//	if (hp == 0)
	//	{
	//		system("cls");
	//		printf("\n");
	//		printf("D E F E A T\n");
	//	}
	


#pragma endregion

#pragma region 열거형 Enum
	// Enum 은 관련있는 것들끼리 묶어서 관리할 때 쓰는
	// 사용자 정의 (Custom) 자료형이다. --> 숫자 붙인 이름있는 상수 집합
	// ex)
	//	enum Number
	//	{
	//		ZERO,	// ZERO = 0;
	//		ONE,	// ONE = 1;
	//		TWO,
	//		THREE,
	//		FOUR,
	//		FIVE,
	//	};			// 이렇게 자동으로 정수값이 부여됨.

	//	enum Example
	//	{
	//		A = 4,
	//		B,		// = 5;
	//		C =	124,
	//		D,		// = 125;
	//	};			// 이렇게 값을 직접 기입할 수 있음
	//				// 그리고 기입을 생략한 곳은 자연스럽게 
	//				// ++로 값이 기입됨

	// 게임 만들 때 주로 어디에 쓰일 까?
	// ex)
	//	int a = 0;
	//	enum ButtonState	// 게임화면 버튼의 상태
	//	{
	//		BUTTON_IDLE,	// 기본
	//		BUTTON_HOVERED,	// 마우스가 버튼 위에 있을 때
	//		BUTTON_PRESSED,	// 버튼을 눌렀을 때
	//		BUTTON_RELEASE,	// 버튼을 땠을 때
	//	};
	//	enum ButtonState btn = BUTTON_IDLE; // 버튼 상태 기본상태로 초기화
	//	printf("%d", btn); // 기본상태의 0이 뜰것 임.
	//	while (a ==0)
	//	{
	//		if (GetAsyncKeyState(VK_LBUTTON)) // 마우스 왼쪽 버튼을 누를 시
	//		{
	//			btn = BUTTON_PRESSED; // 버튼 상태를 누른 상태로 상태 변경
	//			printf("%d", btn); // 눌렀으면 2가 뜰것 임.
	//			break;
	//		}
	//	}
	


#pragma endregion


	return 0;
}