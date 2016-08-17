ifconfig | grep "HWaddr" | awk -F\  "{print \$NF}"
