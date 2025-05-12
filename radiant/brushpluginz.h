#define RADIANT_MSVC 2012

//brushpluginz.h

#include "stdafx.h"

//clamp face vectors
float fClmp( face_t * f );
float bClmp( brush_t * b )//clamp brush! NOTE: there is already a function for this in brush.cpp, i just wanna make my own... :)

//NOTE: brushes created in the 3D viewport and not in grid windows are called Fragment Brushes( there pointers are brush_t * bFrag )
bool Mouse_DraggedViewport( CamWnd * cWnd, GLInt iDragColor, vec3_t fShadeColor, brush_t * bFrag, bool bDetailed );
