#pragma once

#include "ofMain.h"
#include "ofxTskokmtMath.h"

class ofxFFTouch {
public:
    void setup(ofPoint position_, float time_);
    void update(ofPoint position_, float time_, float ease_);
    void update(float time_);
    
    ofPoint position;
    ofPoint previousPosition;
    float term;
    bool bPressed;
    bool bPressing;
    bool bReleased;
    
private:
    float pressedTime;
    
    ofxTskokmtMath math;
};
