/*
AUTHOR: Samuel Cho
YEAR: 2021
Title: ofxSwatch
Description: Texture Based Color Utility for OpenFrameworks
https://samuelcho.de
*/

#pragma once
#include "ofMain.h"

// Determines whether to use interpolation or to use blocks
// options: GRADIENT, PALETTE
enum  swatchMode { GRADIENT, PALETTE };

struct Row {
	vector<ofColor> colors;
	swatchMode rowMode = swatchMode::GRADIENT;
};

class ofxSwatch {
public:
	void setup(float w, float h, int internalformat = GL_RGBA, int numSamples = 0);

	void addColor(ofColor color, int rowIndex = 0);
	void addColors ( vector<ofColor> colors, int rowIndex = 0);

	void setNumRows(int numRows);
	void setRowMode(swatchMode m, int rowIndex = 0);

	void createGradient();
	ofTexture & getTexture();
	void draw();

protected:
	string getVertexShader();
	string getFragmentShader();

	float width, height;
	ofFbo swatchFbo;	
	ofShader gradientShader;
	vector<Row> row;
};