#!/bin/bash
#compiles all the cpp files here and generates corresponding executable

if [ "$1" != "" ] ; then
    res=$1
else
    res=`ls *.cpp`
fi
for f in $res ; do
    filename=$(basename $f)
    fnoext=${filename%.*}
    echo "Handling $filename"
    opt="-O3"
    g++ $opt -Wno-unused-result -Wno-deprecated  dep/*.cpp dep/*.h $f -o $fnoext
done
