#!/bin/bash

for i in {1..150}
do
  echo $RANDOM | cat >> numbers.txt
done
