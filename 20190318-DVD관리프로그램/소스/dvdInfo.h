#include "cusInfo.h"

#ifndef __DVDINFO_H__
#define __DVDINFO_H__

#define ISBN_LEN 30
#define TITLE_LEN 30
#define RENT_LEN 100


// 도서 장르 정보
enum { ACTION = 1, COMIC, SF, ROMANTIC };
enum {RENTED, RETURNED}; // 대여 상태 정보

typedef struct __dvdRentInfo
{
	char ID[ID_LEN];
	unsigned int rentDay;
	int rentState; //대여가능여부(대여, 반납을 의미)
	char ISBN[ISBN_LEN];
	

}dvdRentInfo;



typedef struct __dvdInfo
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre; // 도서 장르 멤버 변수

	
	int numOFRentCus; // rentList의 저장위치정보 , 이것을 인덱스로 사용하면됨.
	dvdRentInfo rentrist[RENT_LEN]; // 대여이력
} dvdInfo;

#endif