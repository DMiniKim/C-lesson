#include <stdio.h>

void main()
{
#pragma region 비트
	//데이터를 나타내는 최소의 단위이며 , 0 or 1의
	//조합으로 논리 계산을 수행하는 단위.
#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로
	// 정렬
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1byte에 2진수로 저장된 값을 2의 제곱으로 나타낸다

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10진수로 나타낸다.

	// ex) 0   0   0   0   1   1   1   1 
	//     128 64  32  16  8   4   2   1 
	//곱셈  0   0   0   0   8   4  2    1 >>>> 전부 더함 ---> 15
#pragma endregion

	//메모리는 비트 단위로 데이터를 저장할 수 있으며,
	//1개의 비트에는 0 or 1 의 값만 저장할 수 있다.
#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자다.
#pragma region AND 연산자
	// 두개의 피연산자가 모두 1이면 1을 반환하는 연산자.

	int x1 = 10; // 0000 1010;
	int y1 = 6;  // 0000 0110;
	             // 0000 0010;
	int andresult = x1 & y1;
	printf("x1 + y1 의 AND 연산자 값은 %d 입니다.\n", andresult);
#pragma endregion
#pragma region OR 연산자
	// 두 개의 피연산자가 둘 중 하나라도 1이 있다면
	// 1을 반환 하는 연산자.
	int x2 = 8;		// 0000 1000;
	int y2 = 12;	// 0000 1100;
					// 0000 1100;
	int orresult = x2 | y2;
	printf("x2 + y2 의 OR 연산자 값은 %d 입니다.\n", orresult);
	

#pragma endregion



#pragma endregion





#pragma endregion




}
