#ifndef _SCRIPTAPI_GUI_H
#define _SCRIPTAPI_GUI_H

#include "_scriptapi.h"

namespace Script
{
namespace Gui
{
enum Window
{
    DisassemblyWindow,
    DumpWindow,
    StackWindow
};

SCRIPT_EXPORT bool SelectionGet(Window window, duint* start, duint* end);
SCRIPT_EXPORT bool SelectionSet(Window window, duint start, duint end);
SCRIPT_EXPORT duint SelectionGetStart(Window window);
SCRIPT_EXPORT duint SelectionGetEnd(Window window);

namespace Disassembly
{
SCRIPT_EXPORT bool SelectionGet(duint* start, duint* end);
SCRIPT_EXPORT bool SelectionSet(duint start, duint end);
SCRIPT_EXPORT duint SelectionGetStart();
SCRIPT_EXPORT duint SelectionGetEnd();
}; //Disassembly

namespace Dump
{
SCRIPT_EXPORT bool SelectionGet(duint* start, duint* end);
SCRIPT_EXPORT bool SelectionSet(duint start, duint end);
SCRIPT_EXPORT duint SelectionGetStart();
SCRIPT_EXPORT duint SelectionGetEnd();
}; //Dump

namespace Stack
{
SCRIPT_EXPORT bool SelectionGet(duint* start, duint* end);
SCRIPT_EXPORT bool SelectionSet(duint start, duint end);
SCRIPT_EXPORT duint SelectionGetStart();
SCRIPT_EXPORT duint SelectionGetEnd();
}; //Stack
}; //Gui
}; //Script

#endif //_SCRIPTAPI_GUI_H