#!/bin/bash

LISTDIR=$(find . -type f -name "*.sh")

MALWARE='ls;ls'

$MALWARE

for SCRIPT in $LISTDIR 
do 
  echo ${SCRIPT#"./"}
done
