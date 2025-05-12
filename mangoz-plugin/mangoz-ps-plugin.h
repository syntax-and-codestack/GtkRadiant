//mangoz-ps-plugin.h

#ifndef MANGOZ_PS_PLUGIN_H
#define MANGOZ_PS_PLUGIN_H

#define CString const char

/*
     FILES PURPOSE:
this file allows photoshop files "*.ps" to be textured to brushes 
*/

#define ADOBE_PHOTOSHOP _0

class IPhotoshopPlugin;

CString * pPSExtension = "*.ps";
CString * pPSFileName;
CString * pPSPreferences;


#endif
