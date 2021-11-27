#include "ofApp.h"

#include <iostream>

void ofApp::setup() { ofSetLineWidth(2); }

void ofApp::update() {}

void ofApp::draw() {
    int halfWidth = ofGetWidth() / 2;
    int halfHeight = ofGetHeight() / 2;

    ofTranslate(halfWidth, halfHeight);
    ofFill();
    ofSetHexColor(0x557EA2);

    int mouseX = ofGetMouseX() - halfWidth;
    int mouseY = ofGetMouseY() - halfHeight;

    ofDrawLine(0, 0, mouseX, mouseY);

    ofDrawCircle(mouseX, mouseY, 50);

    ofRotateXDeg(45);
    ofRotateYDeg(45);
    ofNoFill();
    ofSetHexColor(0x008888);
    ofDrawBox(0, 0, 0, 100, 100, 100);
}

void ofApp::keyPressed(int key) {
    std::cout << "KEY PRESSED: " << key << std::endl;
}

void ofApp::keyReleased(int key) {
    std::cout << "KEY RELEASED: " << key << std::endl;
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
