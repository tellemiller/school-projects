# modify.py - Replaces text in a given text file with specified replacement string
# Telle Miller - CSIS 354-D02

import sys

fileSpec = sys.argv[1]  # read file name first argument
searchText = sys.argv[2]  # text to search for
replaceText = sys.argv[3]  # text to replace with

with open(fileSpec, 'r') as file:  # Read all of the data into memory
    contents = file.read()

contents = contents.replace(searchText, replaceText)  # Replace instances of search text

with open(fileSpec, 'w') as file:  # Overwrite the old file with edited contents
    file.write(contents)

file.close()  # Close file
