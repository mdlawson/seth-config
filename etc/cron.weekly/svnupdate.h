#!/bin/bash

cd /home/ashley/svn
svn checkout https://wiremod.svn.sourceforge.net/svnroot/wiremod/trunk/wire/
svn checkout https://wiremod.svn.sourceforge.net/svnroot/wiremod/trunk/Adv%20Duplicator/
svn checkout http://advdupe2.googlecode.com/svn/trunk/AdvDupe2
svn checkout https://wenlistools.svn.sourceforge.net/svnroot/wenlistools
svn checkout http://simplepropprotection.googlecode.com/svn/trunk simplepp
svn checkout http://svn.dagamers.net/wiremodextras/trunk/ wire_extras
svn checkout http://ulyssesmod.net/ulx/trunk/ ulx
svn checkout http://ulyssesmod.net/ulib/trunk/ ulib


cp -a -r -f /home/ashley/svn/* /srv/srcds/orangebox/garrysmod/addons

