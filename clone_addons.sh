#!/bin/bash

# Dependencies for ofxTimeline

cd ../

if [ -z $1 ]; then
    PREFIX="git clone https://github.com/"
else
    PREFIX="git clone git@github.com:"
fi

${PREFIX}YCAMInterlab/ofxTimecode.git
cd ofxTimecode
git checkout 8fa4bd0c38e0125df8e9c7589c89f02d512cba3b
cd ..

${PREFIX}obviousjim/ofxTween.git
cd ofxTween
git checkout 120757d613b497a7045ee64c1e548abf31ace38e
cd ..

${PREFIX}obviousjim/ofxMSATimer.git
cd ofxMSATimer
git checkout 14e1ff8b0a358151ba13efadac96cf1c50266518
cd ..

${PREFIX}elliotwoods/ofxTextInputField.git
cd ofxTextInputField
git checkout e265bee9547cc1790395f9a1b83289e4e11a7624
cd ..

echo "If you're using linux, please make sure you checkout the develop branch of ofxTextInputField"

${PREFIX}Flightphase/ofxRange.git
cd ofxRange
git checkout 8e232a33a0db5007c425c3d1ebc7f57ffb2232ac
cd ..

${PREFIX}pixelsandcandy/ofxAudioDecoder.git
cd ofxAudioDecoder
git checkout bbe91e832389c2a8c78eaa04a0318dcc0872b63b
cd ..
