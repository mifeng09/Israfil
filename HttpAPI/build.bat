@echo off
REM LER0ever Project Israfil
CALL md build
echo 'Start Building IsrafilCore::Main'
echo '================================'
echo ''
CALL go build -o ./build/core.exe -v -x
CALL cd plugins/Netease
echo 'Start Building IsrafilCore::Plugin::Netease'
echo '==========================================='
echo ''
CALL go build -o ../../build/icpNetease.exe -v -x
CALL cd ../QQMusic
echo 'Start Building IsrafilCore::Plugin::QQMusic'
echo '==========================================='
echo ''
CALL go build -o ../../build/icpQQMusic.exe -v -x
CALL cd ../Xiami
echo 'Start Building IsrafilCore::Plugin::Xiami'
echo '========================================='
echo ''
CALL go build -o ../../build/icpXiami.exe -v -x
CALL cd ../../
