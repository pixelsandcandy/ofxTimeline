#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255*.15);
    ofSetVerticalSync(true);
    ofEnableSmoothing();
    
    ofxTimeline::removeCocoaMenusFromGlut("AllTracksExample");
    timeline.setup();
    
    //hide the boundry markers
    //timeline.setShowInoutControl(false);
    
    
#ifdef TIMELINE_VIDEO_INCLUDED
    timeline.addVideoTrack("fingers", "fingers.mov");
#endif
#ifdef TIMELINE_AUDIO_INCLUDED
    timeline.addAudioTrack("audio", "4chan.wav");
    timeline.setDurationInSeconds(timeline.getAudioTrack("audio")->getDuration());
#endif
    
    timeline.addCurves("curves", ofRange(0, 255));
    timeline.addBangs("bangs");
    timeline.addFlags("flags");
    timeline.addColors("colors");
    timeline.addLFO("lfo");
    timeline.addSwitches("switches");
    
    
    
    timeline.setPageName("Page 1");
    
    
    
    timeline.addPage("Rotate(local)");
    timeline.addCurves("local Rotate X", ofRange(0, 255));
    timeline.addCurves("local Rotate Y", ofRange(0, 255));
    timeline.addCurves("local Rotate Z", ofRange(0, 255));
    
    
    timeline.addPage("Translate(local)");
    timeline.addCurves("local Translate X", ofRange(0, 255));
    timeline.addCurves("local Translate Y", ofRange(0, 255));
    timeline.addCurves("local Translate Z", ofRange(0, 255));
    
    timeline.addPage("Rotate(object)");
    timeline.addCurves("object Rotate X", ofRange(0, 255));
    timeline.addCurves("object Rotate Y", ofRange(0, 255));
    timeline.addCurves("object Rotate Z", ofRange(0, 255));
    
    timeline.addPage("Track 1");
    timeline.addCurves("G Rotate X", ofRange(-180, 180));
    timeline.addCurves("G Rotate Y", ofRange(-180, 180));
    timeline.addCurves("G Rotate Z", ofRange(-180, 180));
    
    timeline.addCurves("G Translate X", ofRange(-100, 100));
    timeline.addCurves("G Translate Y", ofRange(-100, 100));
    timeline.addCurves("G Translate Z", ofRange(-100, 100));
    
    timeline.addCurves("L Rotate X", ofRange(-180, 180));
    timeline.addCurves("L Rotate Y", ofRange(-180, 180));
    timeline.addCurves("L Rotate Z", ofRange(-180, 180));
    
    timeline.addCurves("L Translate X", ofRange(-100, 100));
    timeline.addCurves("L Translate Y", ofRange(-100, 100));
    timeline.addCurves("L Translate Z", ofRange(-100, 100));
    
    timeline.addCurves("O Rotate X", ofRange(-180, 180));
    timeline.addCurves("O Rotate Y", ofRange(-180, 180));
    timeline.addCurves("O Rotate Z", ofRange(-180, 180));
    

    
    
    timeline.getTrack("G Rotate X")->disable();
    timeline.getTrack("G Rotate Y")->setDrawRect(ofRectangle(0, 0, 1024.0, 0));
    
    
    timeline.setCurrentPage(0);
    
    timeline.enableSnapToOtherKeyframes(false);
    timeline.setLoopType(OF_LOOP_NORMAL);
    
    ofAddListener(timeline.events().bangFired, this, &ofApp::bangFired);

}

//--------------------------------------------------------------
void ofApp::bangFired(ofxTLBangEventArgs& args){
    cout << "bang fired!" << args.flag << endl;
}



//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if(timeline.isSwitchOn("switches")){
        ofBackground(timeline.getColor("colors"));
    }
    else{
        ofBackground(255*.15);
    }
    
    timeline.draw(true);//false removed tickers, true(default) adds them
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == '1'){
        timeline.setCurrentPage(0);
    }else if (key == '2'){
        timeline.setCurrentPage(1);
    }else if (key == '3'){
        timeline.setCurrentPage(2);
    }else if (key == '4'){
        timeline.setCurrentPage(3);
    }else if (key == '5'){
        timeline.setCurrentPage(4);
    }
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
