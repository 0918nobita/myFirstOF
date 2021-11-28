#include "ofApp.h"

void ofApp::setup() {
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetWindowTitle("My first oF app");
    ofSetBackgroundAuto(false);
    ofSetCircleResolution(100);
    ofSetLineWidth(2);
    ofNoFill();
}

void ofApp::update() {}

void ofApp::draw() {
    int halfWidth = ofGetWidth() / 2;
    ofTranslate(halfWidth, ofGetHeight() / 2);
    int r = ofRandom(31, 127);
    int g = ofRandom(31, 127);
    int b = ofRandom(31, 127);
    ofSetColor(r, g, b);
    ofDrawCircle(0, 0, ofRandom(100, halfWidth));

    ofRotateXDeg(45);
    auto elapsedTime = ofGetElapsedTimeMillis();
    auto mod = static_cast<float>(elapsedTime % 36000);
    auto angle = ofMap(mod, 0.0f, 36000.0f, 0.0f, TWO_PI);
    ofRotateYRad(angle);
    ofSetHexColor(0xAA8888);
    ofDrawBox(0, 0, 0, 100, 100, 100);
}

void ofApp::keyPressed(int key) { ofLogVerbose() << "KEY PRESSED: " << key; }

void ofApp::keyReleased(int key) { ofLogVerbose() << "KEY RELEASED: " << key; }

void ofApp::mouseMoved(int x, int y) {}
void ofApp::mouseDragged(int x, int y, int button) {}
void ofApp::mousePressed(int x, int y, int button) {}
void ofApp::mouseReleased(int x, int y, int button) {}
void ofApp::mouseEntered(int x, int y) {}
void ofApp::mouseExited(int x, int y) {}
void ofApp::windowResized(int w, int h) {}
void ofApp::gotMessage(ofMessage msg) {}
void ofApp::dragEvent(ofDragInfo dragInfo) {}
