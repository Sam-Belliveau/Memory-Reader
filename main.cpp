#include <iostream>
#include "include/define.h"
#include "include/printData.h"
#include "include/printMemoryRange.h"

int main()
{
  BYTE a[6] = "START";

  printMemory(&a[0], 0xffffff, 8);
  return 0;
}
