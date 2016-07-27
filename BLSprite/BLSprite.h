#pragma once

#include "cocos2d.h"

USING_NS_CC;

namespace Bllight{
    class BLSprite : public Sprite{
    private:
        typedef Sprite super;

        #pragma region Animations
            bool Animate;
            Texture2D* Animation[10];
            int Animation_Number;//max
            int Ani_Nownumber;

            int Ani_timer;
            int Ani_maxtime;
        #pragma endregion

        int Scale;//1

        Node* Parents;
    public
        void SetParent(Node* node);


        void SetAnimationImage(Texture2D* image[]);
        int GetAnimationNum(){return Animation_Number;}

        void SetAnimateTime(int a);

        static BLSprite* Create(std::string filepath);
        static BLSprite* Create(std::string filepath,int ZOrder);
    };
}
