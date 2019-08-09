/*
	기능   : 콘솔출력을 위한 함수들의 선언.
	작성자 : IDS 회장
	작성일 : 2019-03-11
	ver    : 1.0
*/
#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "cusinfo.h"
#include "dvdInfo.h"



void ShowMenu(void);
/*
	기능 : 프로그램을 사용하기 위한 메뉴 출력
	반환 : void 
*/

void ShowCustomerInfo(cusInfo* pCus);
/*
	기능 : 고객 정보를 출력
	반환 : void
*/

void ShowDVDInfo(dvdInfo* pDVD);
/*
	기능 : DVD 정보를 출력
	반환 : void
*/

void ShowGenre(int gen);


void ShowRentInfo(dvdRentInfo* pRent);
/*
	기능 : DVD대여를 위한 고객 ID와 대여 날짜를 출력
	반환 : void
*/
#endif // !__SCREENOUT_H__



