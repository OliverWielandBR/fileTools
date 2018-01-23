/********************************************************************
 * COPYRIGHT -- B&R Industrie-Elektronik GmbH
 ********************************************************************
 * Bibliothek: fileTools
 * Datei: basename.c
 * Autor: wielando
 * Erstellt: 17. Juli 2012
 *******************************************************************/

#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif

#include <string.h>	
#include "fileTools.h"

#ifdef __cplusplus
	};
#endif

char BaseFileName[260];

unsigned long basename(unsigned long pFileName, unsigned long pSuffix)
{
	int ii;
	int len;
	int SuffixLen;
	char SuffixFound = 0;	
	int Backslash = -1;
	int BasenameLen;	
	char LocalFileName[260];
	char LocalSuffix[6]	;
	
	if (pFileName && pSuffix)
	{
		strcpy(LocalFileName, (char *)pFileName);
		strcpy(LocalSuffix, (char *)pSuffix);		


		len = strlen(LocalFileName);
		
		for (ii=0; ii<len; ii++)
		{
			if ((LocalFileName[ii] >= 'A') && (LocalFileName[ii] <= 'Z'))
			{
				LocalFileName[ii] += ('a' - 'A');				
			}
		}

		SuffixLen = strlen(LocalSuffix);
		for (ii=0; ii<SuffixLen; ii++)
		{
			if ((LocalSuffix[ii] >= 'A') && (LocalSuffix[ii] <= 'Z'))
			{
				LocalSuffix[ii] += ('a' - 'A');				
			}
		}
	
		SuffixFound = (strcmp(&LocalFileName[len-SuffixLen], LocalSuffix) == 0);

		Backslash = -1;
		for (ii=len-1; ii>=0; ii--)
		{
			if (LocalFileName[ii] == '\\')
			{
				Backslash = ii;
				break;
			}
		}

		if (SuffixFound)
		{
			BasenameLen = len-SuffixLen-Backslash-2;
			memcpy(BaseFileName, &LocalFileName[Backslash + 1], BasenameLen);
			BaseFileName[BasenameLen] = 0;
		}
		else
		{
			strcpy(BaseFileName, &LocalFileName[Backslash + 1]);
		}
		
		return (unsigned long)BaseFileName;
	}

	return 0;
}
