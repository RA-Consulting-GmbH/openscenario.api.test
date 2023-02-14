for i in $(ls *.sh); do sed -i $'s/\r$//' $i; done
