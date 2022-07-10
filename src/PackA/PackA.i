%module PackA

%{
#define SWIG_FILE_WITH_INIT
#include "PackA.h"
%}
%include <windows.i>
%include "PackA.h"
