#!/bin/bash

# Dependencies for ofxTimeline

cd ../

if [ -z $1 ]; then
    PREFIX="git clone https://github.com/"
else
    PREFIX="git clone git@github.com:"
fi

${PREFIX}YCAMInterlab/ofxTimecode.git

${PREFIX}obviousjim/ofxTween.git

${PREFIX}obviousjim/ofxMSATimer.git

${PREFIX}elliotwoods/ofxTextInputField.git

echo "If you're using linux, please make sure you checkout the develop branch of ofxTextInputField"

${PREFIX}Flightphase/ofxRange.git

${PREFIX}pixelsandcandy/ofxAudioDecoder.git
cd ofxAudioDecoder
git checkout bbe91e832389c2a8c78eaa04a0318dcc0872b63b
cd ..
