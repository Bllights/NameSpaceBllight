#pragma once

#include "cocos2d.h"

USING_NS_CC;

namespace Bllight{
    class LabelManager : public Label{
    private:
        typedef Label super;
        int R;
        int G;
        int B;

        int C;
        int M;
        int Y;
        int K;
    public:
        virtual void setColor(const Color3B& color) override;

        static String _engTTF[10];
        static String _korTTF[10];

        static LabelManager* create(String text,int size);
        static LabelManager* create(String text,int number,int size);
        static LabelManager* create(String text,bool korean,int number,int size);

    };
}
