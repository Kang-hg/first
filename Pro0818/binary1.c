#include <stdio.h>

/*
#define SIZE 5
int main()
{
	int buffer[SIZE] = { 10, 20, 30 ,40 ,50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wd");	// 파일을 (쓰기+이진파일) 모드로 연다.
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.\n");
		return 1;
	}

	fwrite(buffer, sizeof(int), SIZE, fp);	// SIZE만큼의 항목을 buffer에서 fp로 저장한다.

	fclose(fp);
	return 0;
}

*/