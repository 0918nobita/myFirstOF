#include "ofApp.h"

void ofApp::setup() {
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetWindowTitle("My first oF app");
    ofSetWindowShape(730, 490);
    ofSetLineWidth(2);
    ofNoFill();
}

void ofApp::update() {}

void ofApp::draw() {
    auto elapsedTime = ofGetElapsedTimeMillis();
    auto mod = static_cast<float>(elapsedTime % 18000);
    auto angleRad = ofMap(mod, 0, 18000, 0, TWO_PI);

    int halfWidth = ofGetWidth() / 2;
    ofTranslate(halfWidth, ofGetHeight() / 2);
    ofRotateXDeg(45);
    ofRotateYRad(angleRad);

    ofSetHexColor(0xAA8888);
    ofDrawBox(0, 0, 0, 100, 100, 100);

    ofSetColor(200);
    ofPolyline polyline;
    auto angleDeg = ofRadToDeg(angleRad);
    auto r = ofMap(sin(angleRad), -1, 1, 100, 200);
    polyline.arc(ofPoint(0, 0), r, r, angleDeg, angleDeg + 225, 100);
    polyline.draw();
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
