find . -iname "*.sh" | awk -F/ '{print $NF}' | sed s/"\.sh$"//
