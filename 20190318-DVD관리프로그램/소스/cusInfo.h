/*
	기능   : 고객 관리 구조체
	작성자 : IDS 회장
	작성일 : 2019-03-11
	ver    : 1.0
*/

#ifndef __CUSINFO_H__
#define __CUSINFO_H__

typedef struct cusinfo
{
	char ID[ID_LEN];
	char name[NAME_LEN];
	char phoneNum[PHONE_LEN];
}cusInfo;
#endif // __CUSINFO_H__