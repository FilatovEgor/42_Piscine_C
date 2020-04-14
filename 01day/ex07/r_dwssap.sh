#!/bin/sh

export FT_LINE1=3
export FT_LINE2=8

cat /etc/passwd | grep -v '\#' | sed '1!n;d' | cut -d':' -f1  | rev | sort -r | tail -n +$FT_LINE1 | head -n $FT_LINE2 | paste -s -d ',' - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
