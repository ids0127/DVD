/*
	���   : �ܼ������ ���� �Լ����� ����.
	�ۼ��� : IDS ȸ��
	�ۼ��� : 2019-03-11
	ver    : 1.0
*/
#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "cusinfo.h"
#include "dvdInfo.h"



void ShowMenu(void);
/*
	��� : ���α׷��� ����ϱ� ���� �޴� ���
	��ȯ : void 
*/

void ShowCustomerInfo(cusInfo* pCus);
/*
	��� : �� ������ ���
	��ȯ : void
*/

void ShowDVDInfo(dvdInfo* pDVD);
/*
	��� : DVD ������ ���
	��ȯ : void
*/

void ShowGenre(int gen);


void ShowRentInfo(dvdRentInfo* pRent);
/*
	��� : DVD�뿩�� ���� �� ID�� �뿩 ��¥�� ���
	��ȯ : void
*/
#endif // !__SCREENOUT_H__



