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

#include <string.h>	
#include "fileTools.h"

#ifdef __cplusplus
	};
#endif

/* Gets the file extension */
plcbit hasExtension(unsigned long pFilename, unsigned long pExtension)
{
	char* _Extension[10];
	
	getfileext(pFilename, _Extension);
									
	if (!strcmp(_Extension, (char *)pExtension))
	{	
		return 1;
	}
	
	return 0;
	
}
