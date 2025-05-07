#include "radiant/stdafx.h"

#ifndef BRUSHTOOL_H
#define BRUSHTOOL_H

BrushTool radiant_signalbrush;
BrushTool callbackbrush;//use this one

class BrushTool{
public:
    int m_iBrushSize() = sizeof(*brush_t);

    bool m_bBrushDrag_Failed(brush_t * b);
    bool m_bBrushCreation_Failed(brush_t * b);
    bool m_bBrushCreate(brush_t * b, vec3_t mins, vec3_t maxs, bool bDetailed);

    bool m_bBrushConvert_Node(brush_t * b);

        void m_BrushCastNode(brush_t * b){
              if( radiant_signalbrush.m_bBrushConvert_Node( b ) )
              {
                   static_cast<brush_t<*BrushNode>>(class);
              }
        };

    int m_iClipBrush( int point );

};

class BrushNode : public BrushTool{
public:
     vec3_t SetBrushNodeColor( vec3_t * r, *g, *b );
     const char* Key;
     const char* Value;
     const char* INFO = " Brush Node ( Not Quaked from "*.def" ) ";
 
     size_t Brush_NodeSize() = 0;

};

class BrushMessage : public BrushTool : public BrushNode{
private:
 void Brush_SysPrintf(const char * bmsg, ...);
 const char* BRUSH_MESSAGE_MODULE;
};

#endif
