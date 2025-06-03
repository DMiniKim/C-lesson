#include <stdio.h>

int stage = 1;
int* p;

void SetStage(int num)
{
	stage = num;
}
void Increse()
{
	static int score = 0;
	score++;
	printf("%d\n", score);
}
int main()
{
#pragma region 메모리 영역

#pragma region CODE 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로
	// 함수의 주수와 상수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region DATA 영역
	// 프로그램의 시작과 함께 메모리에 저장되며, 프로그램이
	// 종료될 때 메모리가 해제되고, 초기화가 이뤄진 
	// 전역 변수와 정적 변수가 저장되는 영역.
#pragma endregion

#pragma region BSS 영역
	// 프로그램이 실행 될 때 초기화가 이루어지지 않은 전역 변수와
	// 정적 변수가 저장되는 메모리 영역.
#pragma endregion

#pragma region STACK 영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로
	// 함수 호출 시 생성되는 지역 변수와 매개 변수가
	// 저장되는 메모리 영역.
#pragma endregion

#pragma region HEAP 영역
	// 사용자가 직접 메모리 공간을 저장해주는 메모리 영역이며,
	// 사용하지 않는 경우 사용자가 직접 메모리는 해제해줘야하는 
	// 메모리 영역.
#pragma endregion


#pragma endregion

#pragma region 변수의 범위

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내부에서만 접근할 수 있으며,
	// 함수가 종료되었을 때 메모리에서 사라지는 특징을 가지고 있는
	// 변수입니다.
	//{
	//	int x = 10;
	//	{
	//		int x = 20;
	//		{
	//			int x = 30;
	//			{
	//				int x = 40;
	//				printf("%d : <- 40이어야 함\n", x);
	//			}
	//			printf("%d : <- 30이어야 함\n", x);
	//		}
	//		printf("%d : <- 20이어야 함\n", x);
	//	}
	//	printf("%d : <- 10이어야 함\n", x);
	//}

	// 지역 변수는 선언과 동시에 초기화하지 않으면, 이전에 메모리 위치에
	// 존재했던 값을 가지게 됩니다.
#pragma endregion

#pragma region 전역 변수
	// 위 데이터 영역 및 함수 참조
	// 함수 외부에서  선언된 변수로 프로그램이 실행될 때
	// 메모리에 올라가게 되며 , 프로그램이 종료되면 메모리에서
	// 해제되는 변수입니다.

	// SetStage(5536);
	// printf("%d\n", stage);
	// printf("%p", p);

	// 전역 변수는 선언과 동시에 초기화가 되어있지 않으면
	// 자동으로 초기화됩니다.
#pragma endregion

#pragma region 정적 변수
	// 프로그램이 실행되는 동안 메모리에 존재하며 , 선언된
	// 범위 내에서만 접근이 가능한 특징을 가지고 있는 변수입니다.

	// Increse();
	// Increse();
	// Increse();
	// Increse();

	// 정적 변수는 단 한 번만 초기화가 이루어집니다.
#pragma endregion


#pragma endregion


	return 0;
}