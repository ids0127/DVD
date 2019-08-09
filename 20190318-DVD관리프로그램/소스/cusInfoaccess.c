#include "common.h"
#include "cusInfo.h"

#define MAX_CUSTOMER 100

// 분할 컴파일에서 전역변수 선언시
// extern -> 공유, static-> 공유하지 않겠다. 
static cusInfo* cusList[MAX_CUSTOMER];  //static 다른곳에서 못쓰게 하는 함수, 이 파일안에서만 사용가능
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

