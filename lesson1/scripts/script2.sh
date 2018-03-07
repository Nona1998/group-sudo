#!/bin/bash
cd ../output/u1
echo "u1:a.txt: $(cat a.txt)"
cd u2
echo "u2:a.txt: $(cat a.txt)"
echo "u2:b.txt: $(cat b.txt)"
