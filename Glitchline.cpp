#include "Glitchline.h"

Glitchline::Glitchline(int count) {
	for (int i = 0; i < ofGetWidth(); i++) {
		this->locations.push_back(ofVec2f(i, (ofGetHeight() / 20) + count * 48));
		this->myas.push_back(ofRandom(127));
		this->myc.set(0);
		float seed = ofRandom(-100, 100);
		this->locations[i].y = this->locations[i].y + ofNoise(seed) * 50;
		//sin(ofDegToRad(this->locations[i].x * ofRandom(10)
	}
}
void Glitchline::update() {

}
void Glitchline::draw() {
	for (int i = 3; i < this->locations.size(); i+=3) {
		ofSetColor(this->myc, this->myas[i]);
		ofSetLineWidth(3);
		ofDrawLine(this->locations[i - 3], this->locations[i]);
	}
}