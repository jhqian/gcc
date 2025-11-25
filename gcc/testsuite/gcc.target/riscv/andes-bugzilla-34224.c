/* { dg-do compile } */
/* { dg-options "-O1 -mext-dsp" } */
#include <stdint-gcc.h>

uint8_t
foo (uint8_t x, uint8_t y, uint8_t z)
{
  return z += x * y;
}

uint16_t
foo2 (uint16_t x, uint16_t y, uint16_t z)
{
  return z += x * y;
}

uint8_t
foo3 (uint8_t x, uint8_t y, uint8_t z)
{
  return z -= x * y;
}

uint16_t
foo4 (uint16_t x, uint16_t y, uint16_t z)
{
  return z -= x * y;
}

/* { dg-final { scan-assembler-times "maddr32" 2 } } */
/* { dg-final { scan-assembler-times "msubr32" 2 } } */
