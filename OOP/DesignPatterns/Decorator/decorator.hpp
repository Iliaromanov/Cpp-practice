#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "component.hpp"

class Decorator: public Component {
 protected:
  Component *component;
 public:
  Decorator( Component *component );
  virtual ~Decorator();
};

#endif