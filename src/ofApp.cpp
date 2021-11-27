#include "ofApp.h"

#include <iostream>

void ofApp::setup() {}
void ofApp::update() {}

void ofApp::draw() {
    ofSetHexColor(0x008888);
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 50);
}

void ofApp::keyPressed(int key) {
    std::cout << "KEY PRESSED: " << key << std::endl;
}

void ofApp::keyReleased(int key) {}
void ofApp::mouseMoved(int x, int y) {}
void ofApp::mouseDragged(int x, int y, int button) {}
void ofApp::mousePressed(int x, int y, int button) {}
void ofApp::mouseReleased(int x, int y, int button) {}
void ofApp::mouseEntered(int x, int y) {}
void ofApp::mouseExited(int x, int y) {}
void ofApp::windowResized(int w, int h) {}
void ofApp::gotMessage(ofMessage msg) {}
void ofApp::dragEvent(ofDragInfo dragInfo) {}
