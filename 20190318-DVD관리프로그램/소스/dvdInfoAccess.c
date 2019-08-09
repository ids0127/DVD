#include "common.h"
#include "dvdInfo.h"

#define MAX_DVD 100

static dvdInfo * dvdList[MAX_DVD];
static int numOFDVD = 0;

#define MAX_RDVD 100
static dvdRentInfo * dvdRList[MAX_RDVD];
static int numOFRentCus = 0;


int AddDVDInfo(char * ISBN, char * title, int genre)
{
	dvdInfo* pDvd;
	if (numOFDVD >= MAX_DVD)
		return 0;

	pDvd = (dvdInfo*)malloc(sizeof(dvdInfo));

	strcpy(pDvd->ISBN, ISBN);
	strcpy(pDvd->title, title);
	pDvd->genre = genre;

	dvdList[numOFDVD++] = pDvd;
	return numOFDVD;
}

dvdInfo * GetDVDptrByISBN(char * ISBN)
{
	int i;

	for (i = 0; i < numOFDVD; i++)
	{
		if (!strcmp(dvdList[i]->ISBN, ISBN))
			return dvdList[i];
	}
	return (dvdInfo*)0;
}

int IsRegistISBN(char * ISBN)
{

	dvdInfo* pDvd = GetDVDptrByISBN(ISBN);

	if (pDvd == 0)
		return 0;
	else
		return 1;

}

int DVDRent(char * ISBN, char *ID, unsigned int* rentDay, int* rentState)
{
	dvdRentInfo* pRDvd;
	if (numOFRentCus >= MAX_RDVD)
		return 0;

	pRDvd = (dvdRentInfo*)malloc(sizeof(dvdRentInfo));

	strcpy(pRDvd->ID,ID);
	strcpy(pRDvd->ISBN, ISBN);
	pRDvd->rentDay = rentDay;
	pRDvd->rentState = rentState;

	dvdRList[numOFRentCus++] = pRDvd;
	return numOFRentCus;
}


int GetRentDVDptrByISBN(char * ISBN)
{
	int i;
	int rentState= 0;

	for (i = 0; i < numOFRentCus; i++)
	{
		if (!strcmp(dvdRList[i]->ISBN, ISBN))
		{
			return dvdRList[i];
		}
	}
	return 0;
}

int Rent_DVD(char * ISBN)
{
	dvdInfo * GetDVDptrByISBN(char * ISBN);
}

