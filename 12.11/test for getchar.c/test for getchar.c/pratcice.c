#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�Í��̓���
	char password[20] = { 0 };
	printf("�Í�����͂��Ă��������F");
	scanf("%19s", password);

	//�L���b�V���N���A
	int ch = 0;
	while ((ch = getchar()) != "\n" && ch != EOF)
	{
		;
	}

	//��
	printf("�_�u���`�F�b�N�iY�EN�j\n");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("���ł͂���܂��B\n");
	}
	else
	{
		printf("��肪����܂��B\n");
	}

	return 0;
}