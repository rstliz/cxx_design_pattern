#ifndef __QUACK_H_
#define __QUACK_H_

#include "quack_behavior.hpp"
#include <iostream>

class Quack : public QuackBehavior {
public:
  void quack() override { std::cout << "ガーガー！" << std::endl; }
};
#endif