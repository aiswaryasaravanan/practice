#! /bin/bash

echo "Enter filename:"
read filename

if [ -e $filename ]
    then echo "File exist..."
    if [ -w $filename ]
        then echo "Type something"
        cat >> $filename
    else
        echo "Not permitted to write"
    fi
    else    
        echo "File does not exist..."
fi