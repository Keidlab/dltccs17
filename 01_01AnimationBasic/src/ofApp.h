#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

	static const int num = 500; //配列の時はstatic constとしないといけない。定まった１００という数を入れたいならこうする。
	ofVec3f location[num]; //位置 緑のクラスとオブジェクト。xとかはその中のプロパティ。.lotateとかはメソッド
	ofVec3f velocity[num]; //速度
    
//    float locationX; // X座標の位置
//    float locationY; // Y座標の位置
};

	//Light生成
ofLight Light;