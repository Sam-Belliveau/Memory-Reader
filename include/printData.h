#ifndef PRINTDATA_H
#define PRINTDATA_H

#include <iostream>
#include "define.h"

void printByteHex(const BYTE a);
void printQuadHex(const QWORD a);
void printByteLet(const BYTE a);
void printMemAddr(const BYTE &a);

#endif
