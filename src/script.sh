#!/bin/bash

# Run the command and store the output in a file
find ../status/ -maxdepth 1 -type f > Raw.txt
mapfile -t lines < Raw.txt

# Loop through each line and remove the "./" prefix
for i in "${!lines[@]}"
do
    modified_line="${lines[$i]#../status/}"
    lines[$i]=$modified_line
done

# Write the modified lines to the output file
printf '%s\n' "${lines[@]}" > output.txt
