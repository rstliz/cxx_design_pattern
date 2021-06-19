#ifndef __FLY_BEHAVIOR_H_
#define __FLY_BEHAVIOR_H_

class FlyBehavior {
public:
  virtual void fly() = 0;
  virtual ~FlyBehavior() {}
};
#endif