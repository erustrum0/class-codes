for f in ../*.cpp
do
 echo "Compiling $f..."
 g++ $f -o $f.out
 rm $f
 rm $f.bin
done