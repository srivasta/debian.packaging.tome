#!/bin/bash
#                               -*- Mode: Sh -*- 
# Tome.sh --- 
# Author           : Manoj Srivastava ( srivasta@glaurung.green-gryphon.com ) 
# Created On       : Fri Aug  1 22:01:26 2003
# Created On Node  : glaurung.green-gryphon.com
# Last Modified By : Manoj Srivastava
# Last Modified On : Mon Nov 24 22:21:23 2003
# Last Machine Used: glaurung.green-gryphon.com
# Update Count     : 2
# Status           : Unknown, Use with caution!
# HISTORY          : 
# Description      : 
# 
# arch-tag: e93eb0c0-615f-490e-a30b-3b3c78d8bd91
# 

# Describe attempt
echo "Launching ToME..."
sleep 2

# Main window
export ANGBAND_X11_FONT_0=9X15
export ANGBAND_X11_AT_X_0=5
export ANGBAND_X11_AT_Y_0=510

# Message window
export ANGBAND_X11_FONT_1=7x13
export ANGBAND_X11_AT_X_1=5
export ANGBAND_X11_AT_Y_1=22
export ANGBAND_X11_ROWS_1=18

# Inventory window
export ANGBAND_X11_FONT_2=7x13
export ANGBAND_X11_AT_X_2=635
export ANGBAND_X11_AT_Y_2=182
export ANGBAND_X11_ROWS_3=23

# Equipment window
export ANGBAND_X11_FONT_3=7x13
export ANGBAND_X11_AT_X_3=635
export ANGBAND_X11_AT_Y_3=22
export ANGBAND_X11_ROWS_3=13

# Monster recall window
export ANGBAND_X11_FONT_4=6x9
export ANGBAND_X11_AT_X_4=817
export ANGBAND_X11_AT_Y_4=847
export ANGBAND_X11_COLS_4=76
export ANGBAND_X11_ROWS_4=11

# Object recall window
export ANGBAND_X11_FONT_5=6x9
export ANGBAND_X11_AT_X_5=817
export ANGBAND_X11_AT_Y_5=520
export ANGBAND_X11_COLS_5=76
export ANGBAND_X11_ROWS_5=15

export ANGBAND_X11_FONT_6=6x9
export ANGBAND_X11_FONT_7=6x9
# Gamma correction
export ANGBAND_X11_GAMMA=142

# Launch Angband
# Adam bolt
tome -mxaw -- -s -n7 &
#angband -mxaw -- -n7 &
#angband -mx11 -- -n7 &
#angband -mxpj -- -n7 &

