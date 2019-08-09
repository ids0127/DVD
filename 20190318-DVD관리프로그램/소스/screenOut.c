#include "common.h"
#include "cusInfo.h"
#include "dvdInfo.h"
#include "cusInfoAccess.h"
#include "dvdInfoAccess.h"


void ShowMenu(void)
{
	system("cls"); //stdlib.h �� ���� (����â�� �ѹ������ �����ϰ� �������ؼ�)

	printf("----- �޴� -----\n");
	printf("1. �ű԰��� \n");
	printf("2. ȸ����ȸ \n");
	printf("3. DVD ���  \n");
	printf("4. DVD ��ȸ  \n");
	printf("5. DVD �뿩  \n");
	printf("6. DVD �ݳ�  \n");
	printf("7. ���� \n");
	printf("----------------");
	printf("���� >>");
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