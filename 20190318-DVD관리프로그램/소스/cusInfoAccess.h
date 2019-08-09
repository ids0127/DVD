#include "common.h"
#include "cusInfo.h"


/*
	기능   : 고객 정보 저장 및 참조 함수들의 선언.
	작성사 : IDS 회장
	작성일 : 2019-03-11
	ver    : 1.0
*/




#ifndef __CUSACCESS_H__
#define __CUSACCESS_H__

#include "cusInfo.h"

int AddCusInfo(char * ID, char * name, char * num);
/*
	기능 : cusInfo 할당 및 저장
	반환 : 성공 시 등록된 정보의 개수,
		   실패 시 0을 반환.
*/

int IseregstID(char * ID);
/*
	기능 : 해당 고객 ID의 정보를 가지고 있는
		   포인터를 반환
	반환 : 등록 안된 ID의 경우 NULL 포인터 반환.
*/

cusInfo* GetCusPtrByID(char * ID);
/*
	기능 : 가입된 ID인지 체크
	반환 : 가입되었으면 1, 아니면 0을 반환.
*/

#endif // !__CUSACCESS_H__

