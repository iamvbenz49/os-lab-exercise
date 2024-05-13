echo "Enter A:"
read a
echo "Enter B:"
read b
c=`expr $a + $b`
echo "sum : "$c
c=`expr $a - $b`
echo "diff : "$c
c=`expr $a \* $b`
echo "prod : "$c
c=`expr $a / $b`
echo "div : "$c
