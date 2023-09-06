#!/usr/bin/env bash

while read s; do
	echo $(echo $s | cut -c 3)
done

