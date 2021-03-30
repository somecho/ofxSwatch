# ofxSwatch

![](https://user-images.githubusercontent.com/26333602/112969389-7c5e5b80-914d-11eb-9352-a9582e5aa765.png)

A texture based color palette and gradient generator. ofxSwatch can generate multirow gradients and palettes with equidistant color points. 

The texture can then be sent to a shader for sampling.

| ![](https://user-images.githubusercontent.com/26333602/112970321-5c7b6780-914e-11eb-8940-384c14162478.png) |
| :---: |
| *colors sampled with ofxSwatch* |

## Usage
1. First, make sure OpenGL is enabled! 

```cpp
//main.cpp
ofGLFWWindowSettings setting;
setting.setSize(1280, 720);
setting.setGLVersion(4, 6);
ofCreateWindow(setting);
```

2. Setup the swatch
```cpp
//ofApp.cpp
ofxSwatch swatch;
swatch.setup(WIDTH, HEIGHT);
```

3. Add the colors then 'compile' the swatch
```cpp
//creating a palette using a premade vector
vector<ofColor> row1 {
	ofColor(0),
	ofColor::fromHex(0xb01d1e),
	ofColor::fromHex(0x006be4),
	ofColor::fromHex(0xF16826),
	ofColor::fromHex(0x7e63b4),
	ofColor::fromHex(0xead35f),
	ofColor::fromHex(0x00bbad),
	fColor(255),
	ofColor(0)
	};
swatch.addPalette(row1);

//individually adding colors
swatch.addGradient();
swatch.addColor(ofColor(0), 1);
swatch.addColor(ofColor(255), 1);

//anonymous vector
swatch.addGradient({
	ofColor(0,255,0),
	ofColor(255,0,0),
	ofColor(255,0,255),
	ofColor(255)
});

generate the swatch
swatch.createSwatch();
```

4. Sampling the swatch
The swatch can be used in a shader by sending it as a texture to the shader or it can be used in OF by simply calling the method `swatch.sample(VALUE, ROW)` where VALUE is a float between 0.0 and 1.0 and ROW is the index of the palette or gradient.

---

[website](https://samuelcho.de)
[twitter](https://twitter.com/_samuelcho)
[instagram](https://www.instagram.com/_samuelcho_)

