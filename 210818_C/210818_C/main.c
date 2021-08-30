#pragma warning (disable 4996)

#include <stdio.h>


int main() {
	
	int ID = 500, PW = 1000;
	int inputID, inputPW;

	while (1) {

		printf("아이디를 입력하세요.\n");
		scanf_s("%d", &inputID);
		printf("비밀번호를 입력하세요.\n");
		scanf_s("%d", &inputPW);

		if (inputID == ID && inputPW == PW) {
			printf("로그인 하셨습니다.\n\n");
			break;
		}
		else if (inputID != ID && inputPW == PW) {
			printf("아이디를 잘못입력하셨습니다.\n\n");
			continue;
		}
		else if (inputID == ID && inputPW != PW) {
			printf("비밀번호를 잘못입력하셨습니다.\n\n");
			continue;
		}
		else
			printf("아이디와 비밀번호를 확인해주세요\n\n");
			continue;
	}

	

	return 0;

}