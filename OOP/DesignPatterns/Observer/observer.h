#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer { // abstract base class
 public:
  virtual void notify() = 0;
  virtual ~Observer();
};

#endif