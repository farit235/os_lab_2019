#!/bin/bash
./random.sh
while read line
do
let 'count+=1'
sum=$(($sum+$line))
done < number.txt
sum=$(($sum / $count))
echo $sum