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
#pragma region �����Լ� 

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
	// 	printf("list[%d]�� �� : %d\n", i, list[i]);
	// }
	// 
	// Shuffle(list, size);


#pragma endregion

#pragma region ������ �迭

	// const char * dialog[SIZE];
	// 
	// dialog[0] = "���ȳ��ϼ���?��";
	// dialog[1] = "�������Ű���?��";
	// dialog[2] = "��Ž���Դϴ�.��";
	// dialog[3] = "������ ���ּ̱���!��";
	// dialog[4] = "����� ���͵帱���?��";
	// dialog[5] = "�������� �����帰��...��";
	// dialog[6] = "���и� ������ ������ֽ� �װ��ΰ���?��";
	// dialog[7] = "���� �¾ƿ�.��";
	// dialog[8] = "������.. �ϴ� �˰ڽ��ϴ�.��";
	// dialog[9] = "����Ź�帳�ϴ�.��";
	// 
	// int i = 0;
	// 	
	// while(i < SIZE)
	// {
	// 	// 0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����
	// 
	// 	// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����
	// 
	// 	// 0x8000 : ������ ���� ���� ���� ȣ�� �������� �����ִ� ���� ����
	// 
	// 
	// 	// 0x8001 : ������ ���� ���� �ְ� ȣ�� �������� �����ִ� ����
	// 
	// 	if (GetAsyncKeyState(VK_SPACE) & 0x0001)
	// 	{		
	// 					
	// 
	// 		if (i % 2 == 0)
	// 		{
	// 			printf("[Ž��] : %s\n", dialog[i]);
	// 			printf(" \n");				
	// 		}
	// 		else
	// 		{				
	// 			printf("[�Ƿ���] : %s\n", dialog[i]);
	// 			printf(" \n");								
	// 		}
	// 
	// 		i++;
	// 		
	// 		if (i >= 10)
	// 		{
	// 			Sleep(3000);
	// 
	// 			printf("-��ȭ ����-");
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
	// 	printf("¦��\n");
	// }
	// else
	// {
	// 	printf("Ȧ��\n");
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