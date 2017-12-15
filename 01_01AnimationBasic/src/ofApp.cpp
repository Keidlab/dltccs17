#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面基本設定
    ofSetFrameRate(60); //秒間60コマで描画
    ofBackground(0); //背景色を黒に
    
    //位置を初期化
//	location.x = 0; //クラスの中のプロパティ
//	location.y = 0; //同上

	//継続条件式がi<num
	for (int i = 0; i < num; i++) { 
		location[i].set(ofRandom(ofGetWidth()),ofRandom(ofGetWidth()));
		velocity[i].set(ofRandom(-10,10), ofRandom(-10,10), ofRandom(-10, 10));
	}
		
	//Light生成
	Light.enable();
	Light.setSpotlight();
	Light.setPosition(0, 0, 0);
	//環境反射光
	Light.setAmbientColor(ofFloatColor(0.1, 0.1, 0.5, 1.0));
	//拡散反射光
	Light.setDiffuseColor(ofFloatColor(0.2, 0.2, 1.0));
	//鏡面反射光
	Light.setSpecularColor(ofFloatColor(1.0, 1.0, 1.0));
	
}

//--------------------------------------------------------------
void ofApp::update(){

	//反射処理
	if (location[i].x > ofGetWidth() || location[i].x < 0) { //右からはみ出た場合
		velocity[i].x *= -1;
	}

	if (location[i].y > ofGetHeight() || location[i].y < 0) { //上からはみ出た場合
		velocity[i].y *= -1;
	}

	if (location[i].z > 1000 || location[i].z < 0) { //手前からはみ出た場合
		velocity[i].z *= -1;
	}

	//位置を更新
	//	location = location + velocity;
	for (int i = 0; i < num; i++) {
		location[i] += velocity[i];



}

//--------------------------------------------------------------
void ofApp::draw() {
	//計算した位置に円を描画

	for (int i = 0; i < num; i++) {

	ofSetColor(ofRandom(1,100), 127, 255); //円の色
	ofDrawCircle(location[i], 4);



	}
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
