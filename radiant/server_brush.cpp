//server_brush.cpp
#include "stdafx.h"

#define QE_SERVER_NAME const char *QESERVERNAME = server_t::SERVER_NAME;

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

brush_t * Quake_ServerDisconnectBrush( server_t * s, brush_t * b ){
            if( s->SOCKET()->QUAKE_SERVER_PING = 0.0 || < 60.0 ){
                        s->SERVER_BRUSH = b;
                        delete []s->SOCKET()->SERVER_BRUSH;
            }
      return b;
}
