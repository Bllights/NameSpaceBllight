#pragma once

#include "cocos2d.h"

USING_NS_CC;

namespace Bllight{
    class BLSPrite : public Sprite{
    private:
        typedef Sprite super;
        Texture2D* Animation[10];
        int Animation_Number;

        int Scale;//1
    public
        void SetAnimationImage(Texture2D* image[]);
        int GetAnimationNum(){return Animation_Number;}

        Bllight* Create(std::string filepath);
        Bllight* Create(std::string filepath,int ZOrder);
    };
}
