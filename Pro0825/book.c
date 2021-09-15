#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define S_SIZE 50

typedef struct NODE {
	char title[S_SIZE];
	int year;
	struct NODE* link;
} NODE;

int main()
{
	NODE* list = NULL;
	NODE* prev, * p, * next;
	char buffer[S_SIZE];
	int year;

	// ���� ����Ʈ�� ������ �Է��Ѵ�.
	while (1)
	{
		printf("å�� ������ �Է��ϼ���: (�����Ϸ��� ����)");
		gets_s(buffer, S_SIZE);
		if (buffer[0] == '\0')
		{
			break;
		}

		p = (NODE*)malloc(sizeof(NODE));
		strcpy(p->title, buffer);
		printf("å�� ���� ������ �Է��ϼ���:");
		gets_s(buffer, S_SIZE);
		year = atoi(buffer);
		p->year = year;

		if (list == NULL)	// ����Ʈ�� ��� ������
		{
			list = p;		// ���ο� ��带 ù��° ���� �����.
		}
		else				// ����Ʈ�� ��� ���� ������
		{
			prev->link = p;	// ���ο� ��带 ���� ����� ���� ���δ�.
		}
		p->link = NULL;		// ���ο� ����� ��ũ �ʵ带 NULL�� ����
		prev = p;
	}
	printf("\n");

	// ���� ����Ʈ�� ��� �ִ� ������ ��� ����Ѵ�.
	p = list;
	while (p != NULL)
	{
		printf("[%s,%d]->", p->title, p->year);
		p = p->link;
	}
	printf("\n");

	// ���� �Ҵ��� �ݳ��Ѵ�.
	p = list;
	while (p != NULL)
	{
		next = p->link;
		free(p);
		p = next;
	}
}