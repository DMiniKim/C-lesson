#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 
	// 작업입니다.

	int* point = (int*)malloc(sizeof(int));
	
	*point = 10;

	printf("%d\n", *point);


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
	// UAF 는 Heap 영역에서 할당되 malloc 공간을 free로
	// 해제하고, 다시 메모리를 할당 시 
	// 같은 공간을 재사용하면서 생기는 취약점을 말한다.
#pragma endregion

#pragma endregion

	return 0;
}