#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	swatch.setup(ofGetWidth(), ofGetHeight());
	swatch.setNumRows(3);

	//ROW 1
	swatch.setRowMode(swatchMode::PALETTE, 0);
	swatch.addColor(ofColor(0));
	swatch.addColor(ofColor::fromHex(0xb01d1e));
	swatch.addColor(ofColor::fromHex(0x006be4));
	swatch.addColor(ofColor::fromHex(0xF16826));
	swatch.addColor(ofColor::fromHex(0x7e63b4));
	swatch.addColor(ofColor::fromHex(0xead35f));
	swatch.addColor(ofColor::fromHex(0x00bbad));
	swatch.addColor(ofColor(255));
	swatch.addColor(ofColor(0));

	//ROW 2
	swatch.addColor(ofColor(0), 1);
	swatch.addColor(ofColor(255), 1);

	//ROW 3
	swatch.addColor(ofColor(0,255,0), 2);
	swatch.addColor(ofColor(255,0,0), 2);
	swatch.addColor(ofColor(255,0,255), 2);

	swatch.createGradient();
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
	//Now this texture can be passed to a shader for exampling
	swatch.drawGradient();
}
