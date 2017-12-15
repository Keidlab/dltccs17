#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面基本設定
    ofSetFrameRate(60); //秒間60コマで描画
    ofSetBackgroundColor(0); //背景色を黒に
	ofEnableDepthTest(); //前後関係を描画するようにする
}

//--------------------------------------------------------------
void ofApp::update(){

		//位置と速度を初期化

		ofVec3f loc = ofVec3f(ofGetWidth() / 2, ofGetHeight() / 2, 0); //ローカル変数を生成、初期値を代入
		location.push_back(loc);
		velocity.push_back(ofVec3f(ofRandom(-10, 10), ofRandom(-10, 10), ofRandom(-10, 10)));
		ofColor col = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
		color.push_back(col);


//		location[count] = ofVec3f(ofGetWidth() / 2, ofGetHeight() / 2, 0);
//		velocity[count] = ofVec3f(ofRandom(-10, 10), ofRandom(-10, 10), ofRandom(-10, 10));
//		color[count] = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
//		count++;

		if (location.size() > MAX) {
			location.erase(location.begin());
			velocity.erase(velocity.begin());
				color..erase(color.begin());
		}

    //NUM回くりかえし
    for (int i = 0; i < location.size(); i++) {
        location[i] += velocity[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //NUM回くりかえし
    for (int i = 0; i < location.size; i++) {
        //計算した位置に円を描画
        ofSetColor(color[i]); //円の色
        ofDrawCircle(location[i], 20); //半径40の円を描画
        ofDrawCircle(location[i], 20); //半径40の円を描画
        
        //画面の端でバウンドするように
        if (location[i].x < 0 || location[i].x > ofGetWidth()) { //画面の左右ではみ出したら
            velocity[i].x *= -1; //横向きの速度を反転(バウンド)
        }
        if (location[i].y < 0 || location[i].y > ofGetHeight()) { //画面の左右ではみ出したら
            velocity[i].y *= -1; //横向きの速度を反転(バウンド)
        }

		if (location[i].z< -ofGetHeight() || location[i].z > ofGetHeight()) { //画面の左右ではみ出したら
			velocity[i].z *= -1; //横向きの速度を反転(バウンド)
		}

		ofSetColor(255);
		ofDrawBitmapString("Ball Count =" + ofToString(location.size()), 10, 10);
		ofDrawBitmapString("Frame Rate =" + ofToString(ofGetFrameRate(), 20, 40));

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
