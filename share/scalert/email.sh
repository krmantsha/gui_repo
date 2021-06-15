#!/bin/sh

echo " $1" 

if [ "$2" = "1" ]; then
	aplay ~/.seiscomp3/siren03.wav
	echo " $1" | sed 's/,/, ,/g'   | festival --tts;
       /home/rt/seiscomp3/share/scalert/gm_hl.sh $3 > emaiInfo.txt
       /home/rt/seiscomp3/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp3_cgs2 -E $3 >> emaiInfo.txt
 
cat emaiInfo.txt |mail -s "$1,arrivals $4, eventID:$3" seisnetworks@gmail.com;
else
	/home/rt/seiscomp3/share/scalert/gm_hl.sh $3 > emaiInfo.txt
        /home/rt/seiscomp3/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp3_cgs2 -E $3 >> emaiInfo.txt
                
cat emaiInfo.txt |mail -s "Update - $1,arrivals $4, eventID:$3" seisnetworks@gmail.com;

fi

