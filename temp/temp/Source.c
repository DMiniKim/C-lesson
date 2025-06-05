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
	
	int hp = 5;
	const char* heart = "♡";
	srand(time(NULL));
	int randNum = rand() % 50 +1;
	
	int input = 0;
	while (hp != 0)
	{
		system("cls");
		printf("남은 체력 : ");
		for (int i = 0; i < hp; i++)
		{
			printf("%s", heart);
		}
		printf("\n");
		
		printf("컴퓨터가 생각하는 숫자를 맞추시오 : ");
		scanf_s("%d", &input);
		if (input > randNum)
		{
			system("cls");
			printf("그거보다 작은데ㅋㅋ\n");
			hp--;
		}
		else if (input < randNum)
		{
			system("cls");
			printf("그거보다 큰데ㅋㅋㅋ\n");
			hp--;
		}
		else if (input == randNum)
		{
			system("cls");
			printf("\n");
			printf("V I C T O R Y");
			printf("\n");
			break;
		}
		Sleep(1000);
	}
	if (hp == 0)
	{
		system("cls");
		printf("\n");
		printf("D E F E A T\n");
	}
	


#pragma endregion

#pragma region 열거형 Enum
	// 기입

#pragma endregion


	return 0;
}