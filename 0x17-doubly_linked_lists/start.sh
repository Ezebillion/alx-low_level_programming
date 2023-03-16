#!/bin/bash

# Get self
echo -e
echo -e "Fetching script.c file ..."
echo -e

curl https://raw.githubusercontent.com/IZZYLOVE/alx-low_level_programming/master/0x17-doubly_linked_lists/pass-gen.c -o passxt.c

sed -i 's/"common.h"/<stdio.h>/g' passxt.c
sed -i '2i #include <stdlib.h>' passxt.c

# Compile password file

gcc passxt.c -o r.xt

# Generate password doc

./r.xt

echo -e
echo -e "Cleanup ..."

rm *.xt passxt.c

# clear
echo -e "Created 100-password successfully"
ls 100-pas*

echo -e
echo -e "Run ./crackme4 \`cat 100-password\` to verify"

echo -e
