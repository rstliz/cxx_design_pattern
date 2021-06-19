#ifndef __SQUEAK_H_
#define __SQUEAK_H_

#include "quack_behavior.hpp"
#include <iostream>

class Squeak : public QuackBehavior {
public:
  void quack() override { std::cout << "キューキュー" << std::endl; }
};
#endif