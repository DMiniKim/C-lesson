#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Card
{
	char grade;
	int health;
	double attack;

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 설정합니다.
};
struct Player
{
	int x;
	int y;
};
struct Monster
{
	int x;
	int y;
};
typedef struct
{
	int data;
	Node* next;
}Node;

void IsAttack(struct Player pla, struct Monster mon)
{
	struct Player* temp1 = &pla;
	struct Monster* temp2 = &mon;
	
	double hypotenuse = 0.0f;
	// 각 pow 값을 저장할 까?? 컴파일이 빠를 까?
	hypotenuse = sqrt(pow((temp1->x - temp2->x), 2) + pow((temp1->y - temp2->y), 2) );

	// 3.0 이하면 공격
	// 3.0 이상 이동
	if (hypotenuse <= 3.0 )
	{
		printf("Attack\n");
	}
	else
	{
		printf("Moving\n");
	}
	
}

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체로 생성하는 작업

	//	struct Card card = { 'A',200,12.5 };
//
	//	// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화 해야하며
	//	// 이 순서는 왼쪽에서부터 오른쪽으로 이어집니다.
//
	//	printf("card의 등급 : %c\n", card.grade);
	//	printf("card의 체력 : %d\n", card.health);
	//	printf("card의 공격력 : %.1lf\n", card.attack);
//
//
	//	card.attack = 10.4f;
	//	card.grade = 'C';
	//	card.health = 1000;
//
	//	printf("card의 등급 : %c\n", card.grade);
	//	printf("card의 체력 : %d\n", card.health);
	//	printf("card의 공격력 : %.1lf\n", card.attack);

	// 구조체를 선언하기 전에 구조화체는 메모리 공간이 생성되지 않으며,
	// 구조체 내부에 있는 데이터를 초기화 할 수 없습니다.
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록 컴파일러가 레지스터의 블록에 
	// 맞추어 바이트를 패딩(단열재 작업하듯 채우는)해주는 
	// 최적화 작업입니다

	// printf("Card 구조체의 크기 : %u\n", sizeof(struct Card));

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리 크기가
	// 다르게 설정될 수 있으며 , 구조체 크기를 결정하는 형태는 
	// 기본 자료형으로만 구성됩니다.
#pragma endregion

#pragma region 두 점 사이의 거리
	// printf("sqrt(100) : %lf\n",sqrt(100));
	// printf("pow(2,3) : %lf\n", pow(2,3));

	// struct Player player;
	// struct Monster monster;
	// 
	// player.x = 1;
	// player.y = 1;
	// monster.x = 2;
	// monster.y = 2;
	// 
	// IsAttack(player, monster);
	
#pragma endregion

#pragma region 자기 참조 구조체
	// 자기 자신과 같은 타입의 포인터를 멤버로 포함하고
	// 있는 구조체입니다.
	Node node1,node2,node3;

	node1.data = 10;
	node1.next = &node2;
	node2.data = 20;
	node2.next = &node3;
	node3.data = 30;
	node3.next = NULL;

	printf("node1의 data : %d\n", node1.data);
	printf("node1의 next 주소 : %p\n", node1.next);
	printf("node2의 주소 : %p\n\n", &node2);
	printf("===============================\n");
	printf("node2의 data : %d\n", node2.data);
	printf("node2의 next 주소 : %p\n", node2.next);
	printf("node3의 주소 : %p\n\n", &node3);
	printf("===============================\n");
	printf("node3의 data : %d\n", node3.data);
	printf("node3의 next 주소 : %p\n", node3.next);
	

	printf("===============================\n\n");

	printf("node1.next->next->data는 ? : %d\n\n", node1.next->next->data);
	printf("node1.next->next->next는 ? : %p\n\n", node1.next->next->next);

	Node* currentNode = ( Node*)malloc(sizeof(Node));
	currentNode->data = 0;
	currentNode->next = &node1;
	
	while (currentNode != NULL)
	{
		printf("currentNode의 값은 %d\n\n", currentNode->data);
		currentNode = currentNode->next;
	}
	free(currentNode);
	
#pragma endregion
	// typedef 공부하고 -> struct에 적용
#pragma region typedef
	// typedef은 '자료형의 별칭을 지어준다' 라고 보면 된다. 즉, 재정의하다.
	// struct도 일종의 자료형이기 때문에 구조체에도 적용이 된다
	// ex ) struct Abc 
	// {
	//   int a;
	//	 int b;
	// } Cba ; <----- 이렇게 Abc는 Cba 로도 선언 할 수 있게 재 정의 해준다고 보면된다.

	typedef struct A
	{
		int x;
		int y;
	}B;
	B a = { 10,20 };
	B b = { 30,40 };

	struct A c = { 40,20 };

	// 위와 같이 A라고 정의 해놨지만 typedef을 통해 B로 재정의 해놓았기 때문에
	// 선언이 가능하다
	// 물론 기존과 같이 선언도 가능하다.
#pragma endregion



	return 0;
}