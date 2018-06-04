#include "include/printData.h"
#define HEX_LET "0123456789ABCDEF"

void printByteHex(const BYTE a)
{
  std::cout
    << "Ox"
    << HEX_LET[(a >> 4)&0x0f]
    << HEX_LET[a&0x0f];
}

void printByteLet(const BYTE a)
{
  if(a >= 0x20 && a < 0x7f)
  {
    std::cout << (char)a;
  } else
  {
    std::cout << " ";
  }
}

void printQuadHex(const QWORD a)
{
  std::cout
    << "Ox"
    << HEX_LET[(a >> 60)&0x0f]
    << HEX_LET[(a >> 56)&0x0f]
    << HEX_LET[(a >> 52)&0x0f]
    << HEX_LET[(a >> 48)&0x0f]
    << HEX_LET[(a >> 40)&0x0f]
    << HEX_LET[(a >> 36)&0x0f]
    << HEX_LET[(a >> 32)&0x0f]
    << HEX_LET[(a >> 28)&0x0f]
    << HEX_LET[(a >> 24)&0x0f]
    << HEX_LET[(a >> 20)&0x0f]
    << HEX_LET[(a >> 16)&0x0f]
    << HEX_LET[(a >> 12)&0x0f]
    << HEX_LET[(a >> 8)&0x0f]
    << HEX_LET[(a >> 4)&0x0f]
    << HEX_LET[a&0x0f];
}
