#!/bin/sh

n1=$(echo "obase=10; ibase=5; $(echo $FT_NBR1 | tr "\'\\" "01" | tr '\"\?\!' '234')" | bc)
n2=$(echo "obase=10; ibase=5; $(echo $FT_NBR2 | tr 'mrdoc' '01234')" | bc)
n3=$(echo "obase=13; ibase=10; $n1+$n2" | bc)
echo $n3 | tr "0123456789ABC" "gtaio luSnemf"
