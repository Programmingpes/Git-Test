#include <stdio.h>
#include <string.h>

typedef struct contact{
    char name[30];
    char tel[30];

}Contact;


Contact arr[20] = {
    {"김철수", "01012341234"}
};
int idx = 1;
void InsertContact(){
    if(idx == 20){
        printf("더이상 저정할 공간이 없습니다\n");
        return;        
    }
    printf("이름을 입력하세요 : ");
    scanf(" %s", arr[idx].name );
    printf("번호를 입력하세요 : ");
    scanf(" %s", arr[idx].tel );
    idx++;
    printf("연락처 등록 완료\n");
}


enum{
    insert = 1, search, delete, update

};
void Controller(){
    int n = -1;
    while(n != 0){
        printf("--연락처 관리 프로그램 -- \n       1. 연락처 등록\n        2. 연락처 검색\n        3. 연락처 삭제\n        4. 연락처 수정\n        0. 프로그램 종료\n        원하시는 메뉴 번호 입력 : ");
        scanf("%d", &n);
        switch (n)
        {
        case insert:
            InsertContact();
            break;
        
        default:
            printf("프로그램 종료\n");
            break;
        }
        }
    }
int main(void){
    Controller();

    return 0;
}