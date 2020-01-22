#! /bin/bash

count=5 
if [ $count -le 10 ]
then
echo "Yas"
else
echo "no"
fi

val="abc"
if [ $val = "abc" ]                 
then
echo "val is abc"
else echo "val is something else"
fi

letter="a"
if [[ $letter < "b" ]]                 
then
echo "a is lesser"
else echo "oops....! You are wrong :("
fi

number=5
if (( $number < 4 ))                 
then
echo "a is lesser"
else echo "oops....! You are wrong :("
fi