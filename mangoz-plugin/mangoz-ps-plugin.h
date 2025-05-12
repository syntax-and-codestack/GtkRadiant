//mangoz-ps-plugin.h

#ifndef MANGOZ_PS_PLUGIN_H
#define MANGOZ_PS_PLUGIN_H

/*
     FILES PURPOSE:
this file allows photoshop files "*.ps" to be textured to brushes 
*/

#define ADOBE_PHOTOSHOP _0

class IPhotoshopPlugin;

const char * pPSExtension = "*.ps";
const char * pPSFileName;
const char * pPSPreferences;

class IPhotoShopManipModule{
public:
   bool bTexDragged_AndDropped;
   bool bHit_Brush;
}


#endif
