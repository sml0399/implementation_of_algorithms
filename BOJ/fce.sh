# find_compile_execute(fcd)
# find the cpp file in the directory, compile it, and execute it.

read -p 'question number: ' filename
target=$(find -name $filename*.cpp)
g++ -o executable/${target: 2:-4} ${target: 2:-4}.cpp
echo "compile finished. Now executing ${target: 2: -4}"
./executable/${target: 2:-4}
