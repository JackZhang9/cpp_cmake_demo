# cpp_cmake_demo
a cpp demo complie by cmake
# dir tree 
bin
build
CMakeLists.txt
include
  |___ interface.h
lib
  |__ libDinterface.so
main.cpp
toZone
  |_ build
  |_ CMakeLists.txt
  |_ interface.h
  |_ interfaceJZ.cpp
  
  
# usage
No.1:compile CMakelists to generate lib
cd ./toZone/build
cmake ..
make
No2.copy libDinterface.so to lib dir,copy interface.h to include dir
No3.compile CMakeLists to generate exe in bin
cd ../../build
cmake ..
make
No4.go to bin dir to run exe
cd ../bin
./demo 2

