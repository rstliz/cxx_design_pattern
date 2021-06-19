#ifndef __MUTE_QUACK_H_
#define __MUTE_QUACK_H_

#include "quack_behavior.hpp"
#include <iostream>

class MuteQuack : public QuackBehavior {
public:
  void quack() override { std::cout << "<<沈黙>>" << std::endl; }
};
#endif