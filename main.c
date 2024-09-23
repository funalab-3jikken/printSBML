#include "sbml/SBMLTypes.h"
#include <stdio.h>

int main(void) {
  SBMLDocument_t *d;

  d = readSBML("mapk.xml");

  SBMLDocument_free(d);
  return 0;
}
