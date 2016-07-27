#include "LabelManager.h"

LabelManager* LabelManager::create(String text,int size){
    return super::create(text,_korTTF[0],size);
}
LabelManager* LabelManager::create(String text,int number,int size){
    return super::create(text,_korTTF[number],size);
}
LabelManager* LabelManager::create(String text,bool korean,int number,int size){
    if(korean)
        return super::create(text,_korTTF[number],size);
    else
        return super::create(text,_engTTF[number],size);
}
void LabelManager::setColor(const Color3B& color){
    super::setColor(color);
    R= Color3B::BLACK.r;
    G= Color3B::BLACK.g;
    B= Color3B::BLACK.b;
}
