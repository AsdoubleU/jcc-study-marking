#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(void)
{
	//���� �������� �̸�, �й�, �а� �Է�
	
	test();	//void test(); �ϸ� ���� ����

	//������ ���Ϸ� ����� ��� �ҷ�����
	void import_answer();

	//1~4�� ���� Ǯ��
	void question_1();
	void question_2();
	void question_3();
	void question_4();

	//���� ���
	void calculate();

	//�ܺ� ���Ϸ� ��� ��������
	void export_result();

	//���� ������ �� �ȳ� ���� ���
	void closing();

	return 0;
}