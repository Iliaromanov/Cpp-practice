#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include <string>

class Component {
 public:
  virtual void operation() const = 0;
  virtual ~Component();
};

#endif