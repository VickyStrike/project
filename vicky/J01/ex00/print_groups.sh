groups $FT_USER | awk -F: '{print $ 2}' | awk -F\  '{for ( cont=1 ; cont<NF ; cont++ ){printf $cont ","} printf $NF}'
