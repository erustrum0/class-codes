# this script, when run, will compile all of the programs and output them to *.cpp.bin
for f in *.cpp
do
 echo "Compiling $f..."
 g++ $f -o builds/$f.bin
done