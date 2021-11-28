#include "ofApp.h"

void ofApp::setup() {
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetWindowTitle("My first oF app");
    ofSetWindowShape(730, 490);
    ofSetLineWidth(2);
    ofNoFill();
}

void ofApp::update() {
    const auto dt = ofGetLastFrameTime();
    const auto elapsedTime = ofGetElapsedTimeMillis() % 18000;
    const auto rad = ofMap(elapsedTime, 0, 18000, 0, TWO_PI);
    const auto speed = ofMap(sin(rad), -1, 1, 0.5, 2);
    angle += speed * dt;
    if (angle > TWO_PI) angle -= TWO_PI;
}

void ofApp::draw() {
    const int halfWidth = ofGetWidth() / 2;
    ofTranslate(halfWidth, ofGetHeight() / 2);
    ofRotateXDeg(45);
    ofRotateYRad(angle);

    ofSetHexColor(0xAA8888);
    ofDrawBox(0, 0, 0, 100, 100, 100);

    ofSetColor(200);
    ofPolyline polyline;
    const auto angleDeg = ofRadToDeg(angle);
    const auto r = ofMap(sin(angle), -1, 1, 100, 200);
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
