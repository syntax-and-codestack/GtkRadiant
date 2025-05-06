//server_brush.cpp
#include "stdafx.h"

#define QE_SERVER_NAME 0000000x0000000

int g_nBrushNumber = 0;
bool g_bBrushDisconnect;

int * Brush_Count( brush_t * b ){
      static char cBuff[1024];
      b->numberId = g_nBrushNumber++;
        if( g_qeglobals.m_bBrushPrimitMode )
        {
              sprintf( cBuff, "Server Brush %i", b->numberId );
              Radiant_Printf( b, "BRUSH_SOCKET : %5.2c", cBuff );
        }
  return b->numberId;
}
