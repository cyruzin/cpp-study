g++ -c -BUILD_DLL calc.cpp
g++ -shared -o calc.dll calc.o -Wl,--out-implib,libcalc.a