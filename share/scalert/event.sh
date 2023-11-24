#!/bin/sh

echo " $1" 

if [ "$2" = "1" ]; then
#	aplay ~/.seiscomp3/siren03.wav
#	echo " $1" | sed 's/,/, ,/g'   | festival --tts;
#	/home/seiscomp/seiscomp3/share/scalert/gm_hl.sh $3 > /home/seiscomp/seiscomp3/share/scalert/emailInfo.txt
 #      /home/seiscomp/seiscomp3/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp3 -E $3 >> /home/seiscomp/seiscomp3/share/scalert/emailInfo.txt 
#	cat /home/seiscomp/seiscomp3/share/scalert/emailInfo.txt |mail -s "$1,arrivals $4, eventID:$3" seis.networks@gmail.com;
	mysql -u root -pzxcvbnm  seiscomp < /home/rtt/seiscomp/share/scalert/update_webpage_events.sql
else
#	/home/seiscomp/seiscomp3/share/scalert/gm_hl.sh $3 > /home/seiscomp/seiscomp3/share/scalert/emailInfo.txt
#	/home/seiscomp/seiscomp3/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp3 -E $3 >> /home/seiscomp/seiscomp3/share/scalert/emailInfo.txt
#	cat /home/seiscomp/seiscomp3/share/scalert/emailInfo.txt |mail -s "Update - $1,arrivals $4, eventID:$3" seis.networks@gmail.com;
	mysql -u root -pzxcvbnm  seiscomp < /home/rtt/seiscomp/share/scalert/update_webpage_events.sql

fi

