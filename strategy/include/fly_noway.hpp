#ifndef __FLY_NO_WAY_H_
#define __FLY_NO_WAY_H_

#include "fly_behavior.hpp"
#include <iostream>

class FlyNoWay : public FlyBehavior {
public:
  void fly() override { std::cout << "飛べません" << std::endl; }
};
#endif