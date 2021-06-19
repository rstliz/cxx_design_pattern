#ifndef __MALLARD_DUCK_H_
#define __MALLARD_DUCK_H_

#include <iostream>

#include "duck.hpp"
#include "fly_with_wings.hpp"
#include "mallard_duck.hpp"
#include "quack.hpp"

class MallardDuck : public Duck {

public:
  MallardDuck() {
    quackBehavior_ = new Quack();
    flyBehavior_ = new FlyWithWings();
  };
  void display() override { std::cout << "本物のマガモです" << std::endl; }
};
#endif