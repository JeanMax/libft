#!/bin/bash

FUNS=$(find .. -type f -name \*.c | grep -v ../test/ | sed 's!.*/\(.*\)!\1!g')
TESTS=$(find src -type f -name test_\*.c | sed 's!.*/test_\(.*\)\.c!\1!g')

N_FUNS=$(echo $FUNS | wc -w)
N_TESTS=$(echo $TESTS | wc -w)

REG="s/"
for i in $TESTS; do
	if [ $i == "fail" ] || [ $i == "failn" ] || [ $i == "get_all" ] || [ $i == "get_next_line" ]; then
		REG+="\($i\.c\)\|"
	else
		REG+="\(ft_$i\.c\)\|"
	fi
done
REG+="//g"

FUNS=$(echo $FUNS | sed $REG)


N_LEFT=$(echo $FUNS | wc -w)

echo
echo "$N_LEFT untested files: ($N_TESTS tests / $N_FUNS funs)"
# echo $FUNS
for i in $FUNS; do echo $i; done
