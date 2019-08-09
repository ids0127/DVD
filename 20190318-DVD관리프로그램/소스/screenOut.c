#include "common.h"
#include "cusInfo.h"
#include "dvdInfo.h"
#include "cusInfoAccess.h"
#include "dvdInfoAccess.h"


void ShowMenu(void)
{
	system("cls"); //stdlib.h 에 있음 (도스창을 한번지우고 깨끗하게 보기위해서)

	printf("----- 메뉴 -----\n");
	printf("1. 신규가입 \n");
	printf("2. 회원조회 \n");
	printf("3. DVD 등록  \n");
	printf("4. DVD 조회  \n");
	printf("5. DVD 대여  \n");
	printf("6. DVD 반납  \n");
	printf("7. 종료 \n");
	printf("----------------");
	printf("선택 >>");
}

void ShowCustomerInfo(cusInfo* pCus)
{
	printf("");
	printf("----------------\n");
	printf(" ID : %s \n", pCus->ID);
	printf(" Name : %s \n", pCus->name);
	printf(" Phone : %s \n", pCus->phoneNum);
	printf("----------------");

	getchar();
}

void ShowDVDInfo(dvdInfo* pDVD)
{

	int intPutgenre = 0;
	printf("");
	printf("---------------\n");
	printf("ISBN : %s \n", pDVD->ISBN);
	printf("title : %s \n", pDVD->title);
	printf("genre : ");
	
		switch (pDVD->genre)
		{
		case 1:
			printf("ACTION\n");
			break;

		case 2:
			printf("COMIC\n");
			break;

		case 3:
			printf("SF\n");
			break;

		case 4:
			printf("ROMANTIC\n");
			break;
		}


	printf("---------------");
	getchar();
}

void ShowRentInfo(dvdRentInfo* pRent)
{
	printf("");
	printf("---------------");
	printf("ID : %s \n", pRent->ID);
	printf("rentDay : %d \n", pRent->rentDay);
	printf("---------------");
	getchar();
}