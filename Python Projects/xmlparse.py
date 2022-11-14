# xmlparse.py - Searches for a specified plant in a given XML file and adjusts its price using a given percentage
# Telle Miller - CSIS 354-D02

import xml.etree.ElementTree as ET
import sys

searchName = sys.argv[2] # plant name to search for
percent = float(sys.argv[3]) # percentage increase/decrease
tree = ET.parse(sys.argv[1]) # XML tree stored as object
root = tree.getroot() # root of XML tree

for plant_node in root.findall("PLANT"): # search all leaves of XML tree for PLANT tag
   if plant_node.find("COMMON").text == searchName: # if plant name equals search name
       price_node = plant_node.find("PRICE") # find price node
       price_node.text = "{:.2f}".format(float(price_node.text) + (float(price_node.text) * (percent / 100))) # adjust price (truncates float)

tree.write(sys.argv[1]) # write tree to file