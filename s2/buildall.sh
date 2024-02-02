for f in *.cpp
do
 echo "Compiling $f..."
 g++ $f -o builds/$f.bin
done