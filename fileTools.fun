(********************************************************************
 * COPYRIGHT -- B&R Industrie-Elektronik GmbH
 ********************************************************************
 * Library: fileTools
 * Datei: fileTools.fun
 * Autor: wielando
 * Erstellt: 17. Juli 2012
 ********************************************************************
 * Funktionen und Funktionsblöcke der Library fileTools
 ********************************************************************)

FUNCTION basename : UDINT (*Returns address to a string with the file name without path and extension*)
	VAR_INPUT
		pFileName : UDINT; (*File name*)
		pExtension : UDINT; (*File extension*)
	END_VAR
END_FUNCTION

FUNCTION getfileext : UINT (*Gets the file extension*)
	VAR_INPUT
		adrFileName : UDINT;
		adrExtention : UDINT;
	END_VAR
END_FUNCTION
