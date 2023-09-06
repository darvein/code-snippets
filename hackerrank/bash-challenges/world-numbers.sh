read a
read b

[[ $a -gt $b ]] && echo "X is greater than Y"
[[ $a -eq $b ]] && echo "X is equal to Y"
#[[ $a -lt $b ]] && echo "X is less than Y" Check this!!
if [ $a -lt $b ]; then
	echo "X is less than Y"
fi
