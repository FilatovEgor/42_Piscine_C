#!/bin/sh
export FT_USER=$USER 

groups $FT_USER | tr ' ' ',' | tr -d '\n'
