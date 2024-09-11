#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define SIZE 10

void Shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

int main()
{
#pragma region 셔플함수 

	// srand(time(NULL));
	// 
	// int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// 
	// int size = sizeof(list) / sizeof(int);
	// 
	// Shuffle(list, size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("list[%d]의 값 : %d\n", i, list[i]);
	// }
	// 
	// Shuffle(list, size);


#pragma endregion

#pragma region 포인터 배열

	// const char * dialog[SIZE];
	// 
	// dialog[0] = "『안녕하세요?』";
	// dialog[1] = "『누구신가요?』";
	// dialog[2] = "『탐정입니다.』";
	// dialog[3] = "『드디어 와주셨군요!』";
	// dialog[4] = "『어떻게 도와드릴까요?』";
	// dialog[5] = "『저번에 말씀드린걸...』";
	// dialog[6] = "『분명 저번에 얘기해주신 그것인가요?』";
	// dialog[7] = "『네 맞아요.』";
	// dialog[8] = "『『흠.. 일단 알겠습니다.』";
	// dialog[9] = "『부탁드립니다.』";
	// 
	// int i = 0;
	// 	
	// while(i < SIZE)
	// {
	// 	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태
	// 
	// 	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태
	// 
	// 	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태 『』
	// 
	// 
	// 	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태
	// 
	// 	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	// 	{		
	// 					
	// 
	// 		if (i % 2 == 0)
	// 		{
	// 			printf("[탐정] : %s\n", dialog[i]);
	// 			printf(" \n");				
	// 		}
	// 		else
	// 		{				
	// 			printf("[의뢰인] : %s\n", dialog[i]);
	// 			printf(" \n");								
	// 		}
	// 
	// 		i++;
	// 		
	// 		if (i >= 10)
	// 		{
	// 			Sleep(3000);
	// 
	// 			printf("-대화 종료-");
	// 			printf(" \n");
	// 			break;
	// 		}
	// 
	// 	}
	// 
	// 
	// }

	// if (data % 2 == 0)
	// {
	// 	printf("짝수\n");
	// }
	// else
	// {
	// 	printf("홀수\n");
	// }
	// 
	// 
	// int size = sizeof(dialog) / sizeof(int);
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("%s\n", dialog[i]);
	// }

#pragma endregion



	return 0;


}