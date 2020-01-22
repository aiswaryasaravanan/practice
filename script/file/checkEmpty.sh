
#! /bin/bash

# -s flag check if empty or not
# similarly
# -w flag for write permission
# -r for read permission
# -x for execute permission

echo "Read filename:"
read filename
if [ -s $filename ]
then echo "$filename is  not empty"
cat $filename
else
echo "$filename is empty"
fi


