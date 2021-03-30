#pragma once

#include "ofMain.h"
#include "ofxSwatch.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofxSwatch swatch;
};
