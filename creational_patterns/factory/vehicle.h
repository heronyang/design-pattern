#ifndef VEHICAL_H
#define VEHICAL_H

/*
 * Vehicle presents a kind of vehicle and exposes `move()`.
 */
class Vehicle {
public:
  virtual ~Vehicle() = default;
  virtual void move() = 0;
};

#endif
