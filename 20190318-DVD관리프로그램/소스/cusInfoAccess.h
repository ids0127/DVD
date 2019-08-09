#include "common.h"
#include "cusInfo.h"


/*
	���   : �� ���� ���� �� ���� �Լ����� ����.
	�ۼ��� : IDS ȸ��
	�ۼ��� : 2019-03-11
	ver    : 1.0
*/




#ifndef __CUSACCESS_H__
#define __CUSACCESS_H__

#include "cusInfo.h"

int AddCusInfo(char * ID, char * name, char * num);
/*
	��� : cusInfo �Ҵ� �� ����
	��ȯ : ���� �� ��ϵ� ������ ����,
		   ���� �� 0�� ��ȯ.
*/

int IseregstID(char * ID);
/*
	��� : �ش� �� ID�� ������ ������ �ִ�
		   �����͸� ��ȯ
	��ȯ : ��� �ȵ� ID�� ��� NULL ������ ��ȯ.
*/

cusInfo* GetCusPtrByID(char * ID);
/*
	��� : ���Ե� ID���� üũ
	��ȯ : ���ԵǾ����� 1, �ƴϸ� 0�� ��ȯ.
*/

#endif // !__CUSACCESS_H__

