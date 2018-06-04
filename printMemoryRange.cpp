#include "include/printMemoryRange.h"


BYTE* getPtr(const QWORD addr)
{ return ((BYTE*) addr); }

BYTE getAddress(const QWORD addr)
{ return (getPtr(addr)[0]); }

void printMemory(const QWORD start, const QWORD end, const QWORD lineLength)
{
  for(QWORD i = start; i < end; i += lineLength)
  {
    printQuadHex(i);
    std::cout << ": ";

    for(QWORD j = 0; j < lineLength; j++)
    {
      printByteHex(getAddress(i+j));
      std::cout << " ";
    }

    std::cout << " | ";

    for(QWORD j = 0; j < lineLength; j++)
    {
      printByteLet(getAddress(i+j));
      std::cout << " ";
    }

    std::cout << std::endl;
  }
}
