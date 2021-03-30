#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	swatch.setup(ofGetWidth(), ofGetHeight());

	//first row 
	//creating a palette using a premade vector
	vector<ofColor> row1 {
		ofColor(0),
		ofColor::fromHex(0xb01d1e),
		ofColor::fromHex(0x006be4),
		ofColor::fromHex(0xF16826),
		ofColor::fromHex(0x7e63b4),
		ofColor::fromHex(0xead35f),
		ofColor::fromHex(0x00bbad),
		ofColor(255),
		ofColor(0)
	};
	swatch.addPalette(row1);

	//second row
	//individually adding colors
	swatch.addGradient();
	swatch.addColor(ofColor(0), 1);
	swatch.addColor(ofColor(255), 1);

	//third row
	//anonymous vector
	swatch.addGradient({
		ofColor(0,255,0),
		ofColor(255,0,0),
		ofColor(255,0,255),
		ofColor(255)
	});

	swatch.createSwatch();
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
	//Now this texture can be passed to a shader for exampling
	
	//sampling the swatch
	float i = sin(ofGetElapsedTimef())*.5 + .5;
	ofSetColor(swatch.sample(i, 2));
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());

	//To see the swatch
	//swatch.draw();

	//getting the texture from the swatch to use elsewhere
	//swatch.getTexture();
}
