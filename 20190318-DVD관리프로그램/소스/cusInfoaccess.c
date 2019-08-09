#include "common.h"
#include "cusInfo.h"

#define MAX_CUSTOMER 100

// ���� �����Ͽ��� �������� �����
// extern -> ����, static-> �������� �ʰڴ�. 
static cusInfo* cusList[MAX_CUSTOMER];  //static �ٸ������� ������ �ϴ� �Լ�, �� ���Ͼȿ����� ��밡��
static int numOFCustomer = 0;

int AddCusInfo(char * ID, char * name, char * num)
{
	cusInfo* pCus;

	if (numOFCustomer >= MAX_CUSTOMER)
		return 0;

	pCus = (cusInfo*)malloc(sizeof(cusInfo));

	strcpy(pCus->ID, ID);
	strcpy(pCus->name, name);
	strcpy(pCus->phoneNum, num);

	cusList[numOFCustomer++] = pCus;
	return numOFCustomer;
}

cusInfo* GetCusPtrByID(char * ID)
{
	int i;

	for (i = 0; i < numOFCustomer; i++)
	{
		if (!strcmp(cusList[i]->ID, ID))
			return cusList[i];
	}

	return (cusInfo*)0;
}

int IseregstID(char * ID)
{
	cusInfo* pCus = GetCusPtrByID(ID);

	if (pCus == 0)
		return 0;
	else
		return 1;
}

