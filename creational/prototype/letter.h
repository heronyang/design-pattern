#ifndef LETTER_H
#define LETTER_H

#include "document.h"

class Letter : public Document {
public:
  Letter();
  Letter(const Letter& copied_from);
  ~Letter() {}
  void Load();
};

#endif
