read op
echo $op | bc -l | xargs printf "%.3f"
