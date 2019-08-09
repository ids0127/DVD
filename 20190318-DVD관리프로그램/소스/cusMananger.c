#include "common.h"
#include "cusInfo.h"
#include "cusInfoAccess.h"
#include "screenOut.h"

void RegisterCustomer(void)
{	
	char ID[ID_LEN];
	char name[NAME_LEN];
	char phoneNum[PHONE_LEN];

	printf("ID 입력 : ");
	gets(ID);
	
	if (IseregstID(ID))
	{
		puts("해당 ID는 사용중입니다.");
		getchar();
		return; // 리턴하면 함수 밖으로 나감
	}


	printf("이름 입력 :");
	gets(name);

	printf("전화번호 입력 :");
	gets(phoneNum);

	if (!AddCusInfo(ID, name, phoneNum))
	{
		puts("데이터 저장에 실패했습니다.");
		getchar();
		return;
	}

	puts("회원 가입이 되었습니다.");
	getchar();
}

void SearchCusInfo(void)
{
	char ID[ID_LEN];
	cusInfo* cusPtr;

	printf("찾을 ID 입력 : ");
	gets(ID);

	cusPtr = GetCusPtrByID(ID);
	if (cusPtr == 0)
	{
		puts("존재하지 않는 ID입니다.");
		getchar();
		return;
	}

	ShowCustomerInfo(cusPtr);

}
	