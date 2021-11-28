#include "ofApp.h"

void ofApp::setup() {
    ofSetWindowTitle("My first oF app");
    ofSetWindowShape(730, 490);
    ofSetLineWidth(2);
    ofEnableDepthTest();
    shader.load("", "shader.frag");
}

void ofApp::update() {
    const auto dt = ofGetLastFrameTime();
    const auto speed = spacePressed ? 0.3 : 1.2;
    angle += speed * dt;
    if (angle > TWO_PI) angle -= TWO_PI;
}

void ofApp::draw() {
    ofFill();

    const int width = ofGetWidth();
    const int height = ofGetHeight();
    const int halfWidth = width / 2;
    ofTranslate(halfWidth, height / 2);
    ofRotateXDeg(45);
    ofRotateYRad(angle);

    shader.begin();
    shader.setUniform2f("u_resolution", width, height);
    ofDrawBox(0, 0, 0, 100, 100, 100);
    shader.end();

    ofNoFill();
    ofSetColor(200);
    ofPolyline polyline;
    const auto deg = ofRadToDeg(angle);
    const auto r = ofMap(sin(angle), -1, 1, 100, 200);
    polyline.arc(ofPoint(0, 0), r, r, deg, deg + 225, 100);
    polyline.draw();
}

void ofApp::keyPressed(int key) {
    if (key == 32) spacePressed = true;
}

void ofApp::keyReleased(int key) {
    if (key == 32) spacePressed = false;
}

void ofApp::mouseMoved(int x, int y) {}
void ofApp::mouseDragged(int x, int y, int button) {}
void ofApp::mousePressed(int x, int y, int button) {}
void ofApp::mouseReleased(int x, int y, int button) {}
void ofApp::mouseEntered(int x, int y) {}
void ofApp::mouseExited(int x, int y) {}
void ofApp::windowResized(int w, int h) {}
void ofApp::gotMessage(ofMessage msg) {}
void ofApp::dragEvent(ofDragInfo dragInfo) {}
