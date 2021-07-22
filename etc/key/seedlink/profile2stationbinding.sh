#/bin/bash

module=seedlink



for i in `ls profile_[ABCDEFGHIJKLMNOPQRSTUVWXYZ]*`; do

    station=${i:8:5}
    keyFile=`ls $SEISCOMP_ROOT/etc/key/station_??_$station`
    
    if [ -f $keyFile ] && [ -s "$keyFile" ]; then
        basename "$keyFile"
        fileName="$(basename -- $keyFile)"
        echo $i
        echo $station
        echo $keyFile
        echo $fileName
        awk 'substr($1,0,5)!="seedl" {print $0}' $keyFile > /tmp/keyfile
        echo "seedlink" >> /tmp/keyfile
        mv /tmp/keyfile $keyFile
        mv $i $fileName
    fi
done
