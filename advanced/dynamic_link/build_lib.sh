#!/bin/sh

# before run this script, type "source build.sh" 
# to export the env var and then "./build.sh"

g++ -shared -fpic calc.cpp -o libcalc.so \
&& g++ dynamic_link.cpp -lcalc -L. -o dynamic_link \
&& export LD_LIBRARY_PATH=.