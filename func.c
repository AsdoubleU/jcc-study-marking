#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void test() {
	printf("Hello test()!\n");
}

void get_user_id(char in_stdName, char in_stdNum, char in_stdMajor){
	printf("JCC ���͵� ��û �׽�Ʈ�Դϴ�!!\n");

	printf("�̸��� �Է��� ��, Enter Ű�� �����ּ���.\n");
	printf("���� : ȫ�浿");
	gets(in_stdName);

	printf("�й��� �Է��� ��, Enter Ű�� �����ּ���.\n");
	printf("���� : 12345678");
	gets(in_stdNum);

	printf("�а��� �Է��� ��, Enter Ű�� �����ּ���.");
	printf("���� : ��ǻ�Ͱ��а�");
	gets(in_stdMajor);
}

/*
void import_answer() {
	/*
	1. ������ txt �Ǵ� .csv�� ������ ����� ������ �д�.	
	-> ���۾� �Ǵ� ���� �ۼ��� ������ ���α׷� �ۼ�?

	2. �ش� .txt, .csv ���Ͽ��� �丸�� �����Ѵ�.
	ex. void read_answer_from_file();

	3. ���Ͽ��� ������ ����� �迭�� �����Ѵ�.
	ex. void save_answer();
	
}

void question_1(int* p)
{

	//ù ��° ������ 
	printf("\n\n\n1. �־��� ���󰡳��� ����, ���󰡳��� ��ġ�ϴ� �θ��ڿ� �´� ��ȣ�� �Է����ּ���.\n");
	printf("(������ 1���̶�� �����Ѵٸ�, 1���� �Է� �� ����. �ٸ� ���ڳ� ���� ���� ó���˴ϴ�.)\n\n");

	//���� ���¸� ����ü�� ����?
	printf("(1-1)����\n");
	printf("1-kiku\n");
	printf("2-sora\n");
	printf("3-chizu\n");
	printf("4-kabe\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[0]);

	printf("\n\n(1-2)�Ϊ�\n");
	printf("1-tataku\n");
	printf("2-nori\n");
	printf("3-syumi\n");
	printf("4-kae\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[1]);

	printf("\n\n(1-3)�ժ�\n");
	printf("1-zettai\n");
	printf("2-koto\n");
	printf("3-furi\n");
	printf("4-fuu\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[2]);

	printf("\n\n(1-4)�檭\n");
	printf("1-akane\n");
	printf("2-sei\n");
	printf("3-yuki\n");
	printf("4-jiyu\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[3]);

	printf("\n\n(1-5)�謹��\n");
	printf("1-sonzai\n");
	printf("2-kiru\n");
	printf("3-watashi\n");
	printf("4-sasimi\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[4]);

	printf("\n\n(1-6)������\n");
	printf("1-kagami\n");
	printf("2-kore\n");
	printf("3-keitai\n");
	printf("4-syapu\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[5]);

	printf("\n\n(1-7)�ʪߪ�\n");
	printf("1-nishino\n");
	printf("2-uze\n");
	printf("3-keisatsu\n");
	printf("4-namida\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[6]);

	printf("\n\n(1-8)�����\n");
	printf("1-kyori\n");
	printf("2-kapuseru\n");
	printf("3-ebi\n");
	printf("4-agari\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[7]);

	printf("\n\n(1-9)������\n");
	printf("1-houtai\n");
	printf("2-jisyo\n");
	printf("3-ryounin\n");
	printf("4-hon\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[8]);

	printf("\n\n(1-10)���ê�\n");
	printf("1-zasshi\n");
	printf("2-monaru\n");
	printf("3-kokoro\n");
	printf("4-tenisu\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[9]);

	printf("\n\n(1-11)�����\n");
	printf("1-uchyuu\n");
	printf("2-kenri\n");
	printf("3-sigoto\n");
	printf("4-tsubame\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[10]);

}

void question_2(int* p)
{
	//�� ��° ������ 

	printf("\n\n\n2.���� ���ڿ� �ùٸ� ������ ���ÿ�.\n");
	printf("(������ 1���̶�� �����Ѵٸ�, 1���� �Է� �� ����. �ٸ� ���ڳ� ���� ���� ó���˴ϴ�.)\n\n");

	printf("\n\n(2-1)�\n");
	printf("1-��\n");
	printf("2-��\n");
	printf("3-��\n");
	printf("4-��\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[0]);

	printf("\n\n(2-2)����\n");
	printf("1-���窦��\n");
	printf("2-���ߪʪ�\n");
	printf("3-�⪯�Ҫ窦\n");
	printf("4-���ê�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[1]);

	printf("\n\n(2-3)��\n");
	printf("1-��\n");
	printf("2-����\n");
	printf("3-���ɪ�\n");
	printf("4-�ͪ�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[2]);

	printf("\n\n(2-4)����\n");
	printf("1-������\n");
	printf("2-�誴��\n");
	printf("3-���᪹\n");
	printf("4-�᪶��\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[3]);

	printf("\n\n(2-5)󬪷��\n");
	printf("1-�ު��骹\n");
	printf("2-��������\n");
	printf("3-�����⪦��\n");
	printf("4-���㪷�Ǫ�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[4]);

	printf("\n\n(2-6)����\n");
	printf("1-��ʪ�\n");
	printf("2-������\n");
	printf("3-�۪�\n");
	printf("4-���󪻪�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[5]);

	printf("\n\n(2-7)������\n");
	printf("1-�ᪿ��\n");
	printf("2-��������\n");
	printf("3-�Ϫ���\n");
	printf("4-������\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[6]);

	printf("\n\n(2-8)���\n");
	printf("1-�Ϫ�����\n");
	printf("2-�۪���\n");
	printf("3-�ʪ󪸪㪯\n");
	printf("4-��檦\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[7]);

	printf("\n\n(2-9)�ڪ�\n");
	printf("1-�Ϫ�\n");
	printf("2-�ͪ���\n");
	printf("3-����\n");
	printf("4-����\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[8]);

	printf("\n\n(2-10)��򦪹\n");
	printf("1-�⪯����\n");
	printf("2-�᪶��\n");
	printf("3-������\n");
	printf("4-�ʪʪ�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[9]);

	printf("\n\n(2-11)�⪦\n");
	printf("1-����\n");
	printf("2-������\n");
	printf("3-����\n");
	printf("4-����\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[10]);

	printf("\n\n(2-12)��\n");
	printf("1-����\n");
	printf("2-����\n");
	printf("3-�Ѫ�\n");
	printf("4-�ժ�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[11]);

	printf("\n\n(2-13)����\n");
	printf("1-�Ϫ�����\n");
	printf("2-�Ϫ��ʪ�\n");
	printf("3-��������\n");
	printf("4-���֪�\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[12]);

	printf("\n\n(2-14)ժ��󷪯\n");
	printf("1-�������㪯\n");
	printf("2-�۪���\n");
	printf("3-�����Ī�\n");
	printf("4-�⪦������\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[13]);

	printf("\n\n(2-15)����ء��\n");
	printf("1-�Ϫ�ު�\n");
	printf("2-����檯\n");
	printf("3-���ꪫ��\n");
	printf("4-�ʪ꪿��\n");
	printf("5-�� �𸣰���\n");
	printf("����:");
	scanf("%d", &p[14]);

	getchar();
}

void question_3(int* p)
{
	//�� ��° ������ 

	printf("\n\n\n3. ���� ������ �а�, �ѱ���� �����Ͻÿ�.\n");
	printf("(���� Ÿ�������ּ���.)\n");
	printf("ex) ��/1000�����Ϫ��ê����ުΪ���������1000����ڪ��С�������\n");
	printf("���� : 3/1000�� �糪�̴� �� 3���� �������� 1000������ �����͸� �����߷ȴ�.\n\n");

	printf("(3-1)�������Ǫʪ������Ȫ˪��٪����Ϊ�����˭�ߪ���\n");
	printf("����:");
	gets(&p[0]);

	printf("\n\n(3-2)�窱�������������׵����������ƪ��몳�Ȫ���\n");
	printf("����:");
	gets(&p[1]);

	printf("\n\n(3-3)澪��Ҫ����Ȫ磌���ʫ������ު�����\n");
	printf("����:");
	gets(&p[2]);

	printf("\n\n(3-4)ʫ��ߪ�ʪ���Ҵ�Ϊ����瘝�򪷪ު�����\n");
	printf("����:");
	gets(&p[3]);

	printf("\n\n(3-5)�ު���ʫ����󷪭�ʪ���⡢������ء���ƪ��롣\n");
	printf("����:");
	gets(&p[4]);

	printf("\n\n(3-6)ܨ���Ȫϡ��檷����ު쪿���ת˪��ͯ�������������ܪ����檷������������ު�몳�ȪǪ��롣\n");
	printf("����:");
	gets(&p[5]);

	printf("\n\n(3-7)������ܻ��ٳ���쪿�ɪ�����Ъ򪢪����몦���ϡ��ǪϪʪ���\n");
	printf("����:");
	gets(&p[6]);

	printf("\n\n(3-8)��ҳ���������������Ϊ����ժ���\n");
	printf("����:");
	gets(&p[7]);

	printf("\n\n(3-9)���Īƪ����檷���ê���Ϊ⡢����������ȪΪ�Ϊت����ꪳ�ު�ƪ�����\n");
	printf("����:");
	gets(&p[8]);

	printf("\n\n(3-10)���Ȫʪ��䪱�ɡ�15�ª�ު�����Ȫ롣�����ġ��Ϊ��˪��ê��骨����ͪ�\n");
	printf("����:");
	gets(&p[9]);

	printf("\n\n(3-11)����ͱ��쪿�Ȫ��ƪ⡢ݩѨ�êƪ��蝹�����몫��Ѩ��Ī��ƪ͡�\n");
	printf("����:");
	gets(&p[10]);

}

void question_4(int* p) {
	//�� ��° ������
	printf("4. ���� �������� ��� �������Դϴ�.\n\n");
	printf("��� ������ �� ���� ���������, �������� �ǰ����Ͽ� ���� �� ���� �� �ֽ��ϴ�.\n");
	printf("���� URL�� �����Ͽ� ������ ���, ������ Ǯ���ֽñ� �ٶ��ϴ�.\n\n");
	printf("https://youtu.be/mM47Rkkixig  \n\n");
	printf("Ȥ��, ,JCCī�信�� 'JCC ����׽�Ʈ ����'�̶�� �˻����ּ���.\n\n");


	printf("\n\n(4-1) ������ ��� �츮���� �ؼ��Ͻÿ�.(�� �ٿ� �ؼ��� ��� �����ֽ� �� ���͸� �����ּ���. �׷��� ������, �ٷ� ���������� �Ѿ�ϴ�.)\n");
	printf("����:");
	gets(ans4[0]);
	printf("\n\n(4-2) ������ ��� �츮���� �ؼ��Ͻÿ�.(�� �ٿ� �ؼ��� ��� �����ֽ� �� ���͸� �����ּ���. �׷��� ������, �ٷ� �������� �Ѿ�ϴ�.)\n");
	printf("����:");
	gets(ans4[1]);
}

void calculate() {
	for (i = 0; i < 11; i++) {
		if (ans1[i] == 5) {
			score1 = score1 + 0;
		}
		else if (ans1[i] == rans1[i]) {
			score1 = score1 + 2;
		}
		else {
			score1--;
		}
	}

	for (i = 0; i < 15; i++) {
		if (ans2[i] == 5) {
			score2 = score2 + 0;
		}
		else if (ans2[i] == rans2[i]) {
			score2 = score2 + 2;
		}
		else {
			score2--;
		}
	}
}

void export_result() {
	FILE* fp = NULL;
	fp = fopen("JCC_test.txt", "a");
	fprintf(fp, "�̸�:%s\n", stdName);
	fprintf(fp, "�й�:%s\n", stdNum);
	fprintf(fp, "�а�:%s\n", stdMajor);
	fprintf(fp, "\n\n");
	fprintf(fp, "1�� ���� ����: %d\n", score1);
	fprintf(fp, "2�� ���� ����: %d\n", score2);
	fprintf(fp, "1,2�� ���� �հ�: %d\n", score1 + score2);
	fprintf(fp, "\n\n");
	for (i = 0; i < 11; i++) {
		fprintf(fp, "(3-%d)�� ���� ���� : %s\n", i + 1, ans3[i]);
	}
	fprintf(fp, "\n\n");
	for (i = 0; i < 2; i++) {
		fprintf(fp, "(4-%d)�� ���� ���� : %s\n", i + 1, ans4[i]);
	}

	fclose(fp);

}

void closing() {
	printf("\n\n\n\n�����ϼ̽��ϴ�!\n");
	printf("����, ���α׷��� �����Ų ������ JCC_test��� �̸��� �޸������� �����Ǿ��� ���Դϴ�.\n");
	printf("�� ������ �н��ο��� �ǳ��ֽø� �˴ϴ�.\n");
	printf("�� â�� ���� x�� ���� ���ŵ� �����ϴ�.\n\n\n\n");
}

*/