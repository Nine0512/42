#!/bin/sh

ifconfig | grep ether | grep -v autoselect | cut -d ' ' -f 2
