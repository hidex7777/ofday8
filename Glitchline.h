#pragma once
#include "ofMain.h"

class Glitchline
{
public:
	Glitchline(int count);
	~Glitchline() {};
	void update();
	void draw();
private:
	vector<ofVec2f> locations;
	ofColor myc;
	vector<int> myas;
};