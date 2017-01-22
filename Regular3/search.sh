#!/bin/bash
egrep -c '^#define.*[^0-9].*[^0-9].*\".*\"' $1 | sort | uniq 
exit 0


