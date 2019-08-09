#include "dvdInfo.h"
#include "dvdManager.h"
#include "common.h"
#include "screenOut.h"
#include "dvdInfoAccess.h"

void RegistDVD(void)
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre; 

	printf("ISBN 입력 : ");
	gets(ISBN);

	printf("제목 입력 :");
	gets(title);

	printf("장르 입력 : ");
	scanf("%d", &genre);

	if (!AddDVDInfo(ISBN, title, genre))
	{
		puts("데이터 저장에 실패하였습니다.");
		getchar();
		return;
	}
	puts("정상입력이 되었습니다.");
	gets();
}


void SearchDVDInfo(void)
{
	char ISBN[ISBN_LEN];
	dvdInfo* dvdPtr;

	printf("ISBN 입력 : ");
	gets(ISBN);

	dvdPtr = GetDVDptrByISBN(ISBN);

	if (dvdPtr == 0)
	{
		printf("존재하지 않는 ISBN입니다.");
		gets();
		return;
	}
	ShowDVDInfo(dvdPtr);
}

void RentDVD(void)
{
	char ID[ID_LEN];
	unsigned int rentDay;
	char ISBN[ISBN_LEN];
	int rentState; 

	printf("DVD대여 = 1, DVD반납 = 0 \n");
	printf("입력 : ");
	scanf("%d", &rentState);
	getchar();
	printf("ISBN 입력 : ");
	gets(ISBN);


	if (!IsRegistISBN(&ISBN) == 1)
	{
		printf("등록된 DVD가 없습니다. \n ");
		getchar();
		return;
	}
	
	if (GetRentDVDptrByISBN(ISBN) == rentState)
	{
		printf("대여 또는 반납을 선택해주세요. \n ");
		getchar();
		return 0;
	}

	printf("ID 입력 :");
	gets(ID);
		

	if (!IseregstID(ID))
	{
		puts("등록된 회원이 아닙니다. ");
		gets();
		return;
	}

	printf("날짜를 입력하세요 : ");
	scanf("%d", &rentDay);
	getchar();

	Rent_DVD(ISBN,rentDay,rentState,ID);

	printf("대여가 완료되었습니다.\n");
	gets();
}

void RentInfo(void)
{
	int SrentDay;
	int ErentDay;
	char ISBN[ISBN_LEN];

	printf("검색기간을 입력하세요 \n");
	printf("검색 시작일을 입력하세요 : ");
	scanf("%d", &SrentDay);
	printf("검색 종료일을 입력하세요 : ");
	scanf("%d", &ErentDay);
	gets(ISBN);

	ShowRentInfo(SrentDay, ErentDay, ISBN);
}
