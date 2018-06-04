#include <iostream>
#include "include/define.h"
#include "include/printData.h"
#include "include/printMemoryRange.h"

int main()
{
  int a = 100;
  const char c[22] = "This is a char AARAY";

  QWORD START = (QWORD)(&a);
  QWORD END = (QWORD)(&a) + 0xffffffff;

  printMemory(START, END, 8);

  std::cout << "done";
  return 0;
}
