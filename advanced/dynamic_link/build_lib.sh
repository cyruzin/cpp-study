g++ -shared -fPIC calc.cpp -o libcalc.so \
&& g++ dynamic_link.cpp -lcalc -L. -o dynamic_link \
&& mv libcalc.so ~/bin