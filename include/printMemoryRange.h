#ifndef PRINTMEMORYRANGE_H
#define PRINTMEMORYRANGE_H

#include "define.h"
#include "printData.h"
#include <iostream>

BYTE* getPtr(const QWORD addr);
BYTE getAddress(const QWORD addr);
void printMemory(const QWORD start, const QWORD end, const QWORD lineLength);

#endif
