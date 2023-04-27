#pragma once
#include "BrawlbackTypes.h"

#pragma pack(push, 4)
struct BrawlbackPad {
    #if __cplusplus == 199711L
    bu32 _buttons;
    bu32 buttons;
    bu32 holdButtons;
    bu32 rapidFireButtons;
    bu32 releasedButtons;
    bu32 newPressedButtons;
    bs8 LAnalogue;
    bs8 RAnalogue;
    bs8 stickX;
    bs8 stickY;
    bs8 cStickX;
    bs8 cStickY;
    
    BrawlbackPad()
    {
        _buttons = 0;
        buttons = 0;
        holdButtons = 0;
        rapidFireButtons = 0;
        releasedButtons = 0;
        newPressedButtons = 0;
        LAnalogue = 0;
        RAnalogue = 0;
        stickX = 0;
        stickY = 0;
        cStickX = 0;
        cStickY = 0;
    }
    BrawlbackPad& operator = (const BrawlbackPad &D ) { 
        if( this != &D ) {
            _buttons = D._buttons;
            buttons = D.buttons;
            holdButtons = D.holdButtons;
            rapidFireButtons = D.rapidFireButtons;
            releasedButtons = D.releasedButtons;
            newPressedButtons = D.newPressedButtons;
            LAnalogue = D.LAnalogue;
            RAnalogue = D.RAnalogue;
            stickX = D.stickX;
            stickY = D.stickY;
            cStickX = D.cStickX;
            cStickY = D.cStickY;
        }
        return *this;
    }
    BrawlbackPad(const BrawlbackPad& D)
    {
        _buttons = D._buttons;
        buttons = D.buttons;
        holdButtons = D.holdButtons;
        rapidFireButtons = D.rapidFireButtons;
        releasedButtons = D.releasedButtons;
        newPressedButtons = D.newPressedButtons;
        LAnalogue = D.LAnalogue;
        RAnalogue = D.RAnalogue;
        stickX = D.stickX;
        stickY = D.stickY;
        cStickX = D.cStickX;
        cStickY = D.cStickY;
    }
    #else
    bu32 _buttons = 0;
    bu32 buttons = 0;
    bu32 holdButtons = 0;
    bu32 rapidFireButtons = 0;
    bu32 releasedButtons = 0;
    bu32 newPressedButtons = 0;
    bs8 LAnalogue = 0;
    bs8 RAnalogue = 0;
    bs8 stickX = 0;
    bs8 stickY = 0;
    bs8 cStickX = 0;
    bs8 cStickY = 0;
    #endif
};
#pragma pack(pop)
