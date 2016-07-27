#pragma once

#include "cocos2d.h"

USING_NS_CC;
namespace Bllight{
    class BoolManager{
        static bool OnBoolManager;
        BoolManager(){
            OnBoolManager=true;
        }

    };
}
