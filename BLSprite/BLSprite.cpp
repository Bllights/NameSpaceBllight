#include "BLSPrite.h"
namespace Bllight{
void BLSPrite::SetAnimationImage(Texture2D* image[]){
    int tmp=0;
    for(Texture2D* img : image){
        Animation[tmp++]=img;
    }
    Animation_Number=tmp;
}



}