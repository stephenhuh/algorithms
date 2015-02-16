#!/bin/bash

read x;
if [ "$x" == 'Y' ] || [ "$x" == 'y' ]
then
    echo "YES"
elif [ "$x" == 'N' ] || [ "$x" == 'n' ]
then
    echo "NO"
else
    echo "some error"
fi




