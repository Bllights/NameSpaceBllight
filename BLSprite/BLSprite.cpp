#include "BLSPrite.h"
namespace Bllight{
    void BLSPrite::SetAnimationImage(Texture2D* image[]){
        int tmp=0;
        for(Texture2D* img : image){
            Animation[tmp++]=img;
        }
        Animation_Number=tmp;
    }

    Bllight* BLSPrite::Creat(std::string filepath){
        Scale=1;
        
        return __super::create(filepath);
    }

    Bllight* BLSPrite::Creat(std::string filepath,int ZOrder){
        Scale=1;
        return __super::create(filepath,ZOrder);
    }
}
