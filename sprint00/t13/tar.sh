if [[ $1 == "-c" ]];
then tar -c -j -v -f $2 $@ 
elif [[ $1 == "-e" ]]; 
then tar -x -j -v -f $2
fi

