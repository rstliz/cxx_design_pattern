#ifndef __FLY_WITH_WINGS_H_
#define __FLY_WITH_WINGS_H_

#include "fly_behavior.hpp"
#include <iostream>

class FlyWithWings : public FlyBehavior {
public:
  void fly() override { std::cout << "飛んでいます！" << std::endl; }
};
#endif