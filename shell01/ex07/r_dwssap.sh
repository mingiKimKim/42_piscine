#!/bin/sh

cat /etc/passwd | awk -F : '{print $1}' | sed '/#/d' | awk 'NR % 2 == 0' | rev | sort -r | awk -v FT_LINE1=$FT_LINE1 -v FT_LINE2=$FT_LINE2 'NR >= FT_LINE1 && NR <= FT_LINE2' | tr "\n" "," | sed 's/,/, /g' | sed 's/,.$/./' | tr -d '\n'
