#define _CRT_SECURE_NO_WARNINGS

void test();

void get_user_id(char in_stdName, char in_stdNum, char in_stdMajor);

void import_answer();

void question_1(int* p);

void question_2(int* p);

void question_3(int* p);

void question_4(int* p);

void calculate();

void export_result();

void closing();

/*
struct multiple_choice_question {
	//������ ������ 1~5�� ����
	char choice_1[];
	char choice_2[];
	char choice_3[];
	char choice_4[];
	char choice_5[];
	
	//������ ������ ����
	int answer() {};
};

struct descriptive_question {
	//������ ������ ���� ����
	char example [] ;
	
	//������ ������ ����
	char answer[];
};

*/


char stdName[10];
char stdNum[20];
char stdMajor[10];
char* cp;

/*
char* stdName;
char* stdName = 'abcd';
char* stdNum[20];
char* stdMajor[10];
*/