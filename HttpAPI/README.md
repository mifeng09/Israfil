### HTTPAPI使用
目前正在工作的：  
 - localhost:8080/
 - localhost:8080/search/universal/歌名

返回网易云音乐和QQ音乐歌曲搜索结果详细信息，包括下载地址

## Israfil 编译
### 准备环境 
Windows: 
 - 从golang官网(golang.org)(GFW Certified,需要科学上网)下载安装

Linux:
 - pacman -Syu
 - pacman -S golang

OS X: 
 - brew install go

### 从源码编译
 - go get github.com/LER0ever/Israfil/HttpAPI
 - cd $GOPATH/src/github.com/LER0ever/Israfil/HttpAPI
 - ./build.sh # build.bat for Windows  

不需要手动go get 其他任何依赖项，所有使用的库都已经在vendor目录下  
编译好的文件在build目录，命令行运行./build/core


