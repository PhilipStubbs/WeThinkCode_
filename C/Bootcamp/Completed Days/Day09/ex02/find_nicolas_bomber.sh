cat $1 | grep -i "nicolas	bomber" | grep -o -w -E '[[:alnum:]]{6}-[[:alnum:]]{4}'