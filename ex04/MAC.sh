#!/bin/sh

ifconfig | grep ether | sed 's/\s*ether\s*//' | cut -d ' ' -f1
