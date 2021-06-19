#ifndef __QUACK_BEHAVIOR_H_
#define __QUACK_BEHAVIOR_H_

class QuackBehavior {
public:
  virtual void quack() = 0;
  virtual ~QuackBehavior() {}
};
#endif