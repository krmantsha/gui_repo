#!/bin/sh

echo " $1" 

if [ "$2" = "1" ]; then
#	aplay ~/.seiscomp/siren03.wav
#	echo " $1" | sed 's/,/, ,/g'   | festival --tts;
	/home/rtt/seiscomp/share/scalert/gm_hl.sh $3 > /home/rtt/seiscomp/share/scalert/emailInfo.txt
        /home/rtt/seiscomp/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp -E $3 >> /home/rtt/seiscomp/share/scalert/emailInfo.txt 
	cat /home/rtt/seiscomp/share/scalert/emailInfo.txt |mail -s "$1,arrivals $4, eventID:$3" stt@geoscience.org.za;
	mag=` grep "M=" emailInfo.txt |awk -F= '{print $2}'  |awk '{print $1}'`
	MAG=$(echo "scale=2;$mag*1"|bc)
	if [ $MAG >= 3 ]
	then
		cat /home/rtt/seiscomp/share/scalert/emailInfo.txt |mail -s "$1,arrivals $4, eventID:$3" stt@geoscience.org.za;
	fi
	# temp=$(echo "scale=2;$tempvolt*1"|bc)	
	#mysql -u root -pzxcvbnm  seiscomp3 < /home/rt/seiscomp3/share/scalert/update_webpage_events.sql
else
	/home/rtt/seiscomp/share/scalert/gm_hl.sh $3 > /home/rtt/seiscomp/share/scalert/emailInfo.txt
	/home/rtt/seiscomp/bin/seiscomp exec scbulletin -d mysql://sysop:sysop@localhost/seiscomp -E $3 >> /home/rtt/seiscomp/share/scalert/emailInfo.txt
	cat /home/rtt/seiscomp/share/scalert/emailInfo.txt |mail -s "Update - $1,arrivals $4, eventID:$3" stt@geoscience.org.za;
	#mysql -u root -pzxcvbnm  seiscomp3 < /home/seiscomp/seiscomp3/share/scalert/update_webpage_events.sql
	mag=` grep "M=" emailInfo.txt |awk -F= '{print $2}'  |awk '{print $1}'`
        MAG=$(echo "scale=2;$mag*1"|bc)
        if [ $MAG >= 3 ]
        then
                cat /home/rtt/seiscomp/share/scalert/emailInfo.txt |mail -s "Update - $1,arrivals $4, eventID:$3" rmantsha@geoscience.org.za;
        fi

fi

