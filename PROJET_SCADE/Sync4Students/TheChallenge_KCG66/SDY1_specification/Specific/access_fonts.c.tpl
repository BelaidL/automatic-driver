/* ============================================================================
   (C) 2016 ESTEREL TECHNOLOGIES SAS.  ALL RIGHTS RESERVED
    This source file may be used and distributed without restriction provided 
	that this copyright statement is not removed from the file and that any 
	derivative work contains this copyright notice.
 
   Warranty
   ESTEREL TECHNOLOGIES SAS makes no warranty of any kind with regard to the
   use of this Software, either expressed or implied, including, but not 
   limited to the fitness for a particular purpose.
 =========================================================================== */

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

#include "glf.h"
#include "@@FONTNAME@@.h"

DLL_API unsigned char *getFontsTable(void)
{
	return (unsigned char *) & @@FONTNAME@@;
}
