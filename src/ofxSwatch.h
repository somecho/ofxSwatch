/*
AUTHOR: Samuel Cho
YEAR: 2021
Title: ofxSwatch
Description: Texture Based Color Utility for OpenFrameworks
https://samuelcho.de
*/

#pragma once
#include "ofMain.h"

enum  swatchMode { GRADIENT, PALETTE };

struct Row {
	vector<ofColor> colors;
	swatchMode rowMode = swatchMode::GRADIENT;
};

class ofxSwatch {
public:
	void setup(float w, float h, int internalformat = GL_RGBA, int numSamples = 0);
	void addColor(ofColor color, int rowIndex = 0);
	void setNumRows(int numRows);
	void setRowMode(swatchMode m, int rowIndex = 0);
	void createGradient();
	ofTexture getGradient();
	void drawGradient();
	string getVertexShader();
	string getFragmentShader();

	float width, height;
	ofFbo swatchFbo;	
	ofShader gradientShader;
	vector<Row> row;
};