g++ -c -BUILD_DLL calc_lib.cpp
g++ -shared -o calc_lib.dll calc_lib.o -Wl,--out-implib,libcalc_lib.a