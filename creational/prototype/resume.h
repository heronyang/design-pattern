#ifndef RESUME_H
#define RESUME_H

#include "document.h"

class Resume : public Document {
public:
  Resume();
  Resume(const Resume& copied_from);
  ~Resume() {}

  void Load();
};
#endif
