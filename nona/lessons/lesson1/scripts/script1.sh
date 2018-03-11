#!/bin/bash
cd ../output
rm -rf u1
mkdir u1
cd u1
mkdir u2 u3 
touch a.txt
echo "aghas" >> a.txt
cd u2
touch a.txt b.txt
echo "lilit" >> b.txt
echo "nona" >> a.txt

