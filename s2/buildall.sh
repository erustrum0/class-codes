# this script was responsible for wiping all of my progress, but somehow i got it fixed
# this script, when run, will compile all of the programs and output them to p*.cpp.bin
for f in *.cpp
do
 echo "Compiling $f..."
 g++ $f -o builds/$f.bin
done