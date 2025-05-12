//mangoz-plugin-menu.h

#ifndef MANGOZ_PLUGIN_MENU_H
#define MANGOZ_PLUGIN_MENU_H

//probally exceed anyways...
#define MAX_MENU_PLUGINS 32

//MENU STRINGS FOR MAIN
const char* PLUGIN_MENU_FILE = "&File";
const char* PLUGIN_MENU_EDIT = "&Edit";
const char* PLUGIN_MENU_BSP = "&Bsp";
const char* PLUGIN_MENU_SHADERS = "&Shaders"; //original was textures so rename...
const char* PLUGIN_MENU_BRUSH = "&Brush";
const char* PLUGIN_MENU_VIEW = "&View"; //can change XY, XZ or YZ in the menu now
const char* PLUGIN_MENU_GRID = "&Grid";
const char* PLUGIN_MENU_FILTER = "&Filter";
const char* PLUGIN_MENU_PATCH = "&Patch";
const char* PLUGIN_MENU_PLUGIN = "&Plugin"; //plugins access menu
const char* PLUGIN_MENU_MISC = "&Misc";
const char* PLUGIN_MENU_PRIMITIVES = "&Primitives";
const char* PLUGIN_MENU_HELP = "&Help";

void FlushFileMenu(){
  delete []PLUGIN_MENU_FILE;
}

void FlushEditMenu(){
  delete []PLUGIN_MENU_EDIT;
}

void FlushBspMenu(){
  delete []PLUGIN_MENU_BSP;
}

void FlushShadersMenu(){
  delete []PLUGIN_MENU_SHADERS;
}

void FlushBrushMenu(){
  delete []PLUGIN_MENU_BRUSH;
}

void FlushViewMenu(){
  delete []PLUGIN_MENU_VIEW;
}

void FlushGridMenu(){
  delete []PLUGIN_MENU_GRID;
}

void FlushFilterMenu(){
  delete []PLUGIN_MENU_FILTER;
}

void FlushPatchMenu(){
  delete []PLUGIN_MENU_PATCH;
}

void FlushPluginMenu(){
  delete []PLUGIN_MENU_PLUGIN;
}

void FlushMiscMenu(){
  delete []PLUGIN_MENU_MISC;
}

void FlushPrimitivesMenu(){
  delete []PLUGIN_MENU_PRIMITIVES;
}

void FlushHelpMenu(){
  delete []PLUGIN_MENU_HELP;
}

#endif
