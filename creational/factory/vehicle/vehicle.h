#ifndef VEHICAL_H
#define VEHICAL_H

/*
 * Vehicle presents a kind of vehicle and exposes `Move()`.
 */
class Vehicle {
public:
  virtual ~Vehicle() = default;
  virtual void Move() = 0;
};

#endif
