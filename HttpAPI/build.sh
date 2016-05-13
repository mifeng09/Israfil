#!/bin/bash
mkdir build
echo 'Start Building IsrafilCore::Main'
echo '================================'
echo ''
go build -o ./build/core -v -x
cd plugins/Netease
echo 'Start Building IsrafilCore::Plugin::Netease'
echo '==========================================='
echo ''
go build -o ../../build/icpNetease -v -x
cd ../QQMusic
echo 'Start Building IsrafilCore::Plugin::QQMusic'
echo '==========================================='
echo ''
go build -o ../../build/icpQQMusic -v -x
cd ../Xiami
echo 'Start Building IsrafilCore::Plugin::Xiami'
echo '========================================='
echo ''
go build -o ../../build/icpXiami -v -x
cd ../../
