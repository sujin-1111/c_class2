#include <stdio.h>
#include <windows.h>

enum State
{
	IDLE,
	ATTACK,
	DIE

	// 열거형은 값을 따로 설정할 수 있으며, 따로 설정된 다음의 값은 그 전의 값에서
	// 하나 증가된 값으로 설정
};

void set(enum State state)
{
  {
	switch (state)
	{
	
			case IDLE: printf("idle");
				break;
			case ATTACK: printf("ATTACK");
				break;
			case DIE: printf("DIE");
				break;
			default: printf("exception\n");
				break;
	}
  }
}


int main()
{
#pragma region 열거형
	// 관련된 상수의 값을 이름으로 정의한 유한한 집합으로 정의한 자료형.

	// enum State state;
	// 
	// state = IDLE;
	// 
	// scanf_s("%d", &state);
	// 
	// select(state);
#pragma endregion

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

	printf("color system");

	return 0;
}