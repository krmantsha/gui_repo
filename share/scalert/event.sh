#!/bin/sh

echo " $1" 

if [ "$2" = "1" ]; then
	aplay ~/.seiscomp/siren03.wav
	echo " $1" | sed 's/,/, ,/g'   | festival --tts;
	/home/rtt/seiscomp/share/scalert/gm_hl.sh $3 > /home/rtt/seiscomp/share/scalert/emailInfo.txt
      /home/rtt/seiscomp/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp -E $3 >> /home/rtt/seiscomp/share/scalert/emailInfo.txt 
	cat /home/rtt/seiscomp/share/scalert/emailInfo.txt |mail -s "$1,arrivals $4, eventID:$3" seis.networks@gmail.com;
	mysql -u root -pzxcvbnm  seiscomp < /home/rt/seiscomp/share/scalert/update_webpage_events.sql
else
	/home/rtt/seiscomp/share/scalert/gm_hl.sh $3 > /home/rtt/seiscomp/share/scalert/emailInfo.txt
	/home/rtt/seiscomp/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp -E $3 >> /home/rtt/seiscomp/share/scalert/emailInfo.txt
	cat /home/rtt/seiscomp/share/scalert/emailInfo.txt |mail -s "Update - $1,arrivals $4, eventID:$3" seis.networks@gmail.com;
	mysql -u root -pzxcvbnm  seiscomp < /home/rtt/seiscomp/share/scalert/update_webpage_events.sql

fi

