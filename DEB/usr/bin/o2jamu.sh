#!/bin/sh
echo "正在定位目录"
var=$(find /var/mobile/Applications/ -name o2jamu_notice.dat)

var2=$(find /var/mobile/Applications/ -name o2jamu.dat)

echo "正在写入"
o2jamUTicket
rm -f $var
rm -f $var2
echo "o2jamU无限刷票工具，Hacked By Naville"