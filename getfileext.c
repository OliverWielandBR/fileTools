/********************************************************************
 * COPYRIGHT -- B&R Industrie-Elektronik GmbH
 ********************************************************************
 * Library: fileTools
 * Datei: getfileext.c
 * Autor: wielando
 * Erstellt: 17. Juli 2012
 ********************************************************************
 * Implementierung der Library fileTools
 ********************************************************************/

#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif

	#include "fileTools.h"

#ifdef __cplusplus
	};
#endif

/* Gets the file extension */
unsigned short getfileext(unsigned long adrFileName, unsigned long adrExtention)
{
	int len;
	int ii;
	char *pChar;
	if ((!adrFileName) || (!adrExtention))
	{
		return 50000;
	}
	
	pChar = (char *)adrFileName;
	len = strlen(pChar);
	
	for (ii=len-1; ii>=0; ii--)
	{
		if (pChar[ii] == '.')
		{
			strcpy((char *)adrExtention, &pChar[ii+1]);
			return 0;
		}
	}
	
	return 50001;
}