#include <func.h>

int main(void)
{
	char name[10];
	char stdnum[20];
	char wclass[10];
	int ans1[11]={0};
	int ans2[16]={0};
	char ans3[11][501];
	char ans4[2][501];
	
	int score1 = 0;
	int score2 = 0;
	
	int i;
	
	int rans1[11] = {1,2,4,3,3,1,4,1,2,1,2};
	int rans2[16] = {1,3,4,2,2,1,3,4,3,2,1,1,3,3,4};
	
	printf("JCC ���͵� ��û �׽�Ʈ�Դϴ�!!\n");
	printf("�̸��� �����ּ���.(�̸� �Է� �� ����Ű�� �����ּ���.):");
	gets(name);
	printf("�й��� �Է����ּ���.(�й� �Է� �� ����Ű�� �����ּ���.)");
	gets(stdnum);
	printf("�а��� �Է����ּ���.");
	gets(wclass);
	

	p1(ans1);
	p2(ans2);

	gets(ans3[4]);
	
	printf("\n\n\n");
	
	for(i=0;i<11;i++){
		if(ans1[i]==5){
			score1=score1+0;
		}
		else if(ans1[i]==rans1[i]){
			score1=score1+2;
		}
		else{
			score1--;
		}
	}
	
	for(i=0;i<15;i++){
		if(ans2[i]==5){
			score2=score2+0;
		}
		else if(ans2[i]==rans2[i]){
			score2=score2+2;
		}
		else{
			score2--;
		}
	}
	
	

	FILE *fp = NULL;
	fp = fopen("JCC_test.txt", "a");
	fprintf(fp, "�̸�:%s\n", name);
	fprintf(fp, "�й�:%s\n", stdnum);
	fprintf(fp, "�а�:%s\n", wclass);
	fprintf(fp, "\n\n");
	fprintf(fp,"1�� ���� ����: %d\n", score1);
	fprintf(fp,"2�� ���� ����: %d\n", score2);
	fprintf(fp, "1,2�� ���� �հ�: %d\n", score1 + score2);
	fprintf(fp, "\n\n");
	for (i = 0; i < 11; i++) {
		fprintf(fp,"(3-%d)�� ���� ���� : %s\n",i+1, ans3[i]);
	}
	fprintf(fp, "\n\n");
	for (i = 0; i < 2; i++) {
		fprintf(fp,"(4-%d)�� ���� ���� : %s\n", i+1, ans4[i]);
	}

	fclose(fp);

	printf("\n\n\n\n�����ϼ̽��ϴ�!\n");
	printf("����, ���α׷��� �����Ų ������ JCC_test��� �̸��� �޸������� �����Ǿ��� ���Դϴ�.\n");
	printf("�� ������ �н��ο��� �ǳ��ֽø� �˴ϴ�.\n");
	printf("�� â�� ���� x�� ���� ���ŵ� �����ϴ�.\n\n\n\n");

	return 0;
}