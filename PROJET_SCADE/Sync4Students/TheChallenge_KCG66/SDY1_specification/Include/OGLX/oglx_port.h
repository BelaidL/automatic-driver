/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : oglx_port.h
 DESCRIPTION       : Porting header file used to support OpenGL ES and SC
 COPYRIGHT (C)     : 2008 by Esterel Technologies. All Rights Reserved.
 ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS GOVERNED BY ESTEREL TECHNOLOGIES LICENSING CONDITIONS.
---------------------------------------------------------------------------- +*/

#ifndef _OGLXPORT_H
#define _OGLXPORT_H


/* Disable some useless warnings of Microsoft compiler */
#ifdef _MSC_VER
#pragma warning( disable : 4100 4115 4206 4305 4310 )
#endif

/* OpenGL includes and configuration */

#ifndef _NO_WINDOWS_H
#ifdef _WIN32
#include <windows.h>
#endif
#endif

#if defined (IOS_DEV_ENV)
#define OGLX_MASK_FFFF 0x000F
#include <OpenGLES/ES2/gl.h>
#elif defined(ES2_DEV_ENV)
#include <GLES2/gl2.h>
#define OGLX_FBO
#define OGLX_MASK_FFFF 0xFFFF
#elif defined(ES11_DEV_ENV)
#include <GLES/gl.h>
#define OGLX_MASK_FFFF 0xFFFF
#elif defined(SC101_DEV_ENV)
#include <GL/gl.h>
#define OGLX_DISPLAY_LISTS
#define OGLX_MASK_FFFF 0xFFFF
#elif defined(SC2_DEV_ENV)
#include <GLSC2/glsc2.h>
#define OGLX_FBO
#define OGLX_MASK_FFFF 0xFFFF
#else
#include <GL/gl.h>
#define OGLX_DISPLAY_LISTS
#define OGLX_MASK_FFFF 0xFFFF
#endif

#if defined(ES2_DEV_ENV) || defined(SC2_DEV_ENV)
#define OGLX_NO_GLCLIPPLANE
typedef GLfloat GLdouble;
#endif

#if defined(SC101_DEV_ENV)
#define OGLX_NO_GLCLIPPLANE
typedef GLfloat GLdouble;
#endif


#if defined(ES11_DEV_ENV)
typedef GLfloat GLdouble;
#endif

#endif
