#include "cusInfo.h"

#ifndef __DVDINFO_H__
#define __DVDINFO_H__

#define ISBN_LEN 30
#define TITLE_LEN 30
#define RENT_LEN 100


// ���� �帣 ����
enum { ACTION = 1, COMIC, SF, ROMANTIC };
enum {RENTED, RETURNED}; // �뿩 ���� ����

typedef struct __dvdRentInfo
{
	char ID[ID_LEN];
	unsigned int rentDay;
	int rentState; //�뿩���ɿ���(�뿩, �ݳ��� �ǹ�)
	char ISBN[ISBN_LEN];
	

}dvdRentInfo;



typedef struct __dvdInfo
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre; // ���� �帣 ��� ����

	
	int numOFRentCus; // rentList�� ������ġ���� , �̰��� �ε����� ����ϸ��.
	dvdRentInfo rentrist[RENT_LEN]; // �뿩�̷�
} dvdInfo;

#endif