#pragma once

#include "cocos2d.h"
#include "BLSprite.h"

USING_NS_CC;

namespace Bllight{
    class AnimationManager{
        static Vector<BLSprite*> Animations;
        void runAnimate();
        bool setTextureImage(int number,BLSprite*blsprite);

    };
}
