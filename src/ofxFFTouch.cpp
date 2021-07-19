#include "ofxFFTouch.h"

//--------------------------------------------------------------
void ofxFFTouch::setup(ofPoint position_, float time_) {
    
    position = position_;
    previousPosition = position_;
    bPressed = true;
    bPressing = true;
    bReleased = false;
    pressedTime = time_;
}

//--------------------------------------------------------------
void ofxFFTouch::update(ofPoint position_, float time_, float ease_) {
    
    previousPosition = position;
    position = position_;
    position = math.easeFilter(math.meanFilter(position, 2), ease_);
    term = time_ - pressedTime;
    if (bPressed) bPressed = false;
}

//--------------------------------------------------------------
void ofxFFTouch::update(float time_) {
    
    term = time_ - pressedTime;
    if (bReleased) bReleased = false;
}
