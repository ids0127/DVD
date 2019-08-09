#include "common.h"
#include "cusMananger.h"
#include "screenOut.h"
#include "dvdManager.h"
#include "dvdInfo.h"
#include "cusInfo.h"


enum { CUS_REGIST = 1, CUS_SEARCH, DVD_REGIST, DVD_SEARCH, DVD_RENT, DVD_INPO, QUIT };

int main(void)
{
	int intputMenu = 0;
	int intPutgenre = 0;

	while (1)
	{
		ShowMenu();
		scanf("%d", &intputMenu);
		getchar();

		switch (intputMenu)
		{
		case CUS_REGIST:
			RegisterCustomer();
			break;
			
		case CUS_SEARCH:
			SearchCusInfo();
			break;
		
		case DVD_REGIST:
			RegistDVD();
			break;
		
		case DVD_SEARCH:
			SearchDVDInfo();
			break;
		
		case DVD_RENT:
			RentDVD();
		
		case DVD_INPO:
			RentInfo();
			break;
		}
			



		if (intputMenu == QUIT)
		{
			puts("이용해주셔서 감사합니다.");
			break;
		}
	}

	return 0;
}

