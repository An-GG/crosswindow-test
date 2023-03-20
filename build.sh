#!/usr/bin/env bash

rm -rf build && mkdir build && cd build && cmake .. -G Xcode && xcodebuild -project CWTest.xcodeproj && cd ..
