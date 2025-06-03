#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 
	// 작업입니다.

	//	int* point = (int*)malloc(sizeof(int));
	//	
	//	*point = 10;
	//	
	//	printf("%d\n", *point);


	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경시킬 수 있으며 , 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 지정합니다.

	//	free(point);
	//	
	//	printf("===========주소 변경==========\n");
	//	
	//	point = (int*)malloc(sizeof(int) * 3);
	//	
	//	for (int i = 0; i < 3; i++)
	//	{
	//		point[i] = 10 * (i+1);
	//		printf("%d\n", point[i]);
	//	}
	//	free(point);
	
				// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로,
				// 사용이 끝나면 직접 해제해줘야 한다.

#pragma region UAF Use After Free
	// UAF( Use After Free)란 , Heap메모리를 할당한 후 
	// 해제한 뒤에도 해당 포인터를 계속 사용할 때 발생 되는 문제다.
	
	// free() 후 포인터를 NULL로 초기화 하지 않으면,
	// 그 주소가 그대로 남아있기 때문에 다른 코드에서
	// 해당 영역을 다시 할당받아버리거나
	// 의도치 않게 접근 하게 되면서 프로그램 오류나,
	// 함수의 예측하지 못한 동작 , 심하게는 보안적으로 위험해진다.
	
	// 따라서 할당과 해제를 명확하게 구분하고,
	// 반드시 해당 포인터는 NULL 처리 하는 습관이 필요하다.

	// ex )

	int* point = (int*)malloc(sizeof(int));
	printf("point 의 주소는 %p\n", point);

	*point = 10;
	printf("point 의 값은 %d\n", *point);

	free(point);
	printf("point 의 주소는 %p\n", point);

	printf("=====================\n");

	point = (int*)malloc(sizeof(int)); // 재 할당
	printf("point 의 주소는 %p\n", point);

	*point = 20;
	printf("point 의 값은 %d\n", *point);

	free(point);

	printf("=====================\n");
	point = (int*)malloc(sizeof(int*)*10); // 재 할당
	printf("point 의 주소는 %p\n", point);
#pragma endregion

#pragma endregion

	return 0;
}