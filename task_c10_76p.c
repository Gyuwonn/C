#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    system("dir"); // 디렉토리의 파일과 폴더 나열
    printf("아무 키나 치세요\n");
    _getch(); // 입력을 받는 명령어
    system("cls"); // 화면에 있는 멸령어를 지워주는 삭제 명령어

    return 0;
} 