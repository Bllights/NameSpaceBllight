#pragma once

#include "cocos2d.h"

USING_NS_CC;

namespace Bllight{
    class BLSPrite : public Sprite{
    private:
        Texture2D* Animation[10];
        int Animation_Number;

    public
        void SetAnimationImage(Texture2D* image[]);
        int GetAnimationNum(){return Animation_Number;}


    };
}
