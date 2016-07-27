#include "BLSPrite.h"
#include "AnimationManager.h"

namespace Bllight{
    void BLSprite::SetAnimationImage(Texture2D* image[]){
        Animate=true;
        int tmp=0;
        for(Texture2D* img : image){
            Animation[tmp++]=img;
        }
        Animation_Number=tmp;
        AnimationManager::Animation.pushback(this);
        Ani_Nownumber=0;
    }

    void BLSprite::SetAnimateTime(int a){
        Ani_maxtime=a;
        Ani_timer=0;
    }

    BLSprite* BLSprite::Create(std::string filepath){
        Scale=1;
        Animate=false;
        return __super::create(filepath);
    }

    BLSprite* BLSprite::Create(std::string filepath,int ZOrder){
        Scale=1;
        Animate=false;
        return __super::create(filepath,ZOrder);
    }

    void BLSprite::SetParent(Node* node){
        Parents=node;
    }
}
