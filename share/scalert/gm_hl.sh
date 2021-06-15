lat=`scxmldump -fap -E $1  -d mysql://sysop:sysop@localhost/seiscomp3  |grep -n1 "<latitude>" |grep value |awk -F'[<>]' '{print $3}' `
lon=`scxmldump -fap -E $1  -d mysql://sysop:sysop@localhost/seiscomp3  |grep -n1 "<longitude>" |grep value |awk -F'[<>]' '{print $3}'`
echo "http://maps.google.com/?q=$lat,$lon&t=h&ll=$lat,$lon&z=12"
