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

	printf("ISBN �Է� : ");
	gets(ISBN);

	printf("���� �Է� :");
	gets(title);

	printf("�帣 �Է� : ");
	scanf("%d", &genre);

	if (!AddDVDInfo(ISBN, title, genre))
	{
		puts("������ ���忡 �����Ͽ����ϴ�.");
		getchar();
		return;
	}
	puts("�����Է��� �Ǿ����ϴ�.");
	gets();
}


void SearchDVDInfo(void)
{
	char ISBN[ISBN_LEN];
	dvdInfo* dvdPtr;

	printf("ISBN �Է� : ");
	gets(ISBN);

	dvdPtr = GetDVDptrByISBN(ISBN);

	if (dvdPtr == 0)
	{
		printf("�������� �ʴ� ISBN�Դϴ�.");
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

	printf("DVD�뿩 = 1, DVD�ݳ� = 0 \n");
	printf("�Է� : ");
	scanf("%d", &rentState);
	getchar();
	printf("ISBN �Է� : ");
	gets(ISBN);


	if (!IsRegistISBN(&ISBN) == 1)
	{
		printf("��ϵ� DVD�� �����ϴ�. \n ");
		getchar();
		return;
	}
	
	if (GetRentDVDptrByISBN(ISBN) == rentState)
	{
		printf("�뿩 �Ǵ� �ݳ��� �������ּ���. \n ");
		getchar();
		return 0;
	}

	printf("ID �Է� :");
	gets(ID);
		

	if (!IseregstID(ID))
	{
		puts("��ϵ� ȸ���� �ƴմϴ�. ");
		gets();
		return;
	}

	printf("��¥�� �Է��ϼ��� : ");
	scanf("%d", &rentDay);
	getchar();

	Rent_DVD(ISBN,rentDay,rentState,ID);

	printf("�뿩�� �Ϸ�Ǿ����ϴ�.\n");
	gets();
}

void RentInfo(void)
{
	int SrentDay;
	int ErentDay;
	char ISBN[ISBN_LEN];

	printf("�˻��Ⱓ�� �Է��ϼ��� \n");
	printf("�˻� �������� �Է��ϼ��� : ");
	scanf("%d", &SrentDay);
	printf("�˻� �������� �Է��ϼ��� : ");
	scanf("%d", &ErentDay);
	gets(ISBN);

	ShowRentInfo(SrentDay, ErentDay, ISBN);
}
