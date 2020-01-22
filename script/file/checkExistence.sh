#! /bin/bash

echo "Read filename:"
read filename
if [ -e $filename ]
then echo "$filename is found"
else
echo "$filename not found"
fi

echo "Read directory:"
read dirname
if [ -d $dirname ]
then echo "$dirname is found"
else
echo "$dirname not found"
fi