#!/usr/bin/env bash

# Problem:
# count multiplies of 3 and 5 below n
# if its multiple of 3&5 then count it only twice
# https://www.codewars.com/kata/514b92a657cdc65150000006/train/shell

n=10 # $1
cnt=0

for (( i=0; i<$n; i++ )); do
  f3=$(( i % 3 ))
  f5=$(( i % 5 ))

  if [[ $f3 == 0 || $f5 == 0 ]]; then
    cnt=$((cnt+i))
  fi
done

echo $cnt
