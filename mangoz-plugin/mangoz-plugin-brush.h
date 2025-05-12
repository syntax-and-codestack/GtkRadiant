//mangoz-plugin-brush.h

#ifndef MANGOZ_PLUGIN_BRUSH_H
#define MANGOZ_PLUGIN_BRUSH_H

#include "radiant/stdafx.h"

//NOTE: brush_t is old we want new definition for plugin

typedef brush_t pluginbrush; //holds brush_t struct info *IMPORTANT*

//brush gl num?
typedef void ( *PFN_PLUGIN_BRUSH_GL ) ( brush_t * b, int GLEnum );
typedef void ( *PFN_PLUGIN_BRUSH_LIST ) ( brush_t * b , bool bSel );
typedef bool ( *PFN_PLUGIN_BRUSH_SELECTED ) ( brush_t * b, bool bSel = 1 );
typedef void ( *PFN_PLUGIN_BRUSH_TEXTURE ] ( brush_t * b, qtexture_t * texture, bool bDetailed );

#endif
