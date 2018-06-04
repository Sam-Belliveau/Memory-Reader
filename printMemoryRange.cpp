#include "include/printMemoryRange.h"

void printMemory(BYTE* input, const QWORD length, const QWORD lineLength)
{
  for(QWORD i = 0; i < length; i += lineLength)
  {
    printQuadHex((QWORD)std::addressof(input[i]));
    std::cout << ": ";

    for(QWORD j = 0; j < lineLength; j++)
    {
      printByteHex(input[i+j]);
      std::cout << " ";
    }

    std::cout << " | ";

    for(QWORD j = 0; j < lineLength; j++)
    {
      printByteLet(input[i+j]);
      std::cout << " ";
    }

    std::cout << std::endl;
  }
}
