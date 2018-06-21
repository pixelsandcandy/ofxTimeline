#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofEnableAlphaBlending();
    
    
    ofxTimeline::removeCocoaMenusFromGlut("Audio Waveform Example");
    
    timeline.setup();
    timeline.setLoopType(OF_LOOP_NORMAL);
    timeline.setBPM(120.f);
    timeline.enableSnapToBPM(true);
    timeline.setShowBPMGrid(true);
    timeline.addAudioTrack("Audio","4chan.wav");
    
    
    //this means that calls to play/stop etc will be  routed to the waveform and that timing will be 100% accurate
    timeline.setTimecontrolTrack("Audio");
    
    //fun to watch on FFT
    //waveform.loadSoundfile("audiocheck.net_sweep20-20klog.wav");
    //waveform.loadSoundfile("audiocheck.net_sweep20-20klin.wav");
    
    timeline.setDurationInSeconds(timeline.getAudioTrack("Audio")->getDuration());

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //change the background color based on the current bin and amount
    
    ofxTLAudioTrack* track = timeline.getAudioTrack("Audio");
    int bin = ofMap(mouseX, 0, ofGetWidth(), 0, track->getFFTSize()-1, true);
    ofBackground( track->getFFT()[bin] * 2000 );
    
    timeline.draw();
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
