n="5"
m="10"
for a in {0..10}
do
    if [ "$a" -eq 5 ];
    then
        echo number
    else
        echo $a
    fi
done 
