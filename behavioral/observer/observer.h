#ifndef OBSERVER_H_
#define OBSERVER_H_

template <class T> class Observer {
public:
  virtual void Update(const T &obserable) = 0;
};

#endif
