#! /bin/bash

num1=5
num2=3

echo $((num1+num2))
echo $((num1-num2))
echo $((num1*num2))
echo $((num1/num2))

expr $num1 + $num2 
echo $( expr $num1 + $num2 )

echo "$num1 + $num2" | bc

# fname="Aishu"
# lname="Saravanan"

# echo $[[fname+lname]]

age=14

if [ "$age" -ge 18 ] && [ "$age" -le 30 ]
# if [ "$age" -ge 18 -a "$age" -le 30 ]
# if [[ "$age" -ge 18 && "$age" -le 30 ]]
then echo "Valid age"
else
echo "Invalid age"
fi

age=19
if [ "$age" -ge 18 ] || [ "$age" -le 30 ]
# if [ "$age" -ge 18 -o "$age" -le 30 ]
# if [[ "$age" -ge 18 || "$age" -le 30 ]]
then echo "Valid age"
else
echo "Invalid age"
fi