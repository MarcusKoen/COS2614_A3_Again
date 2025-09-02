Define class and all functions in header file
Check in documentation for QString or other documentation to include

LibraryItem.h
#include "LibraryItem.h"
#include <QString>

class LibraryItem
{

private:
    QString Title;
    QString Author;
    QString ID;

};

DO NOT redefine class in .cpp file, instead inherit by using :: operator
DO NOT have to redefine classes like QString already defined in header file
DO NOT re-declare variables such as Title Author ID
LibraryItem.cpp
  
