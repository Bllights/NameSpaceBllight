#include "AnimationManager.h"
namespace Bllight{
    Vector<BLSprite*> AnimationManager::Animations;
    void AnimationManager::runAnimate(){
        for(BLSprite* blsprite : Animations){
            blsprite->Ani_timer++;
            if(blsprite->Ani_timer>=blsprite->Ani_maxtime){
                blsprite->Ani_timer=0;
                blsprite->setTexture(blsprite->Animation[blsprite->Ani_Nownumber++]);
                if(blsprite->Ani_Nownumber>=blsprite->Animation_Number){
                    blsprite->Ani_Nownumber=0;
                }
            }
        }
    }

    bool AnimationManager::setTextureImage(int number,BLSprite* blsprite){
        for(BLSprite* sprite : Animations){
            if(sprite==blsprite){
                sprite->setTexture(sprite->Animation[number]);
                return true;
            }
        }
        return false;

    }
}
