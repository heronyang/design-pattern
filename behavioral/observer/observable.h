#ifndef OBSERVABLE_H_
#define OBSERVABLE_H_

#include "observer.h"

template <class T> class Obserable {
public:
  virtual void AddObserver(Observer<T> &observer) = 0;
};

#endif
