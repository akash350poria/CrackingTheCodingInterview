while (maxLength>0) {
        if (str[length-1]!=' ') {
            str[maxLength-1]=str[length-1];
            maxLength--;
        }
        else {
            str[maxLength-1]='0';
            str[maxLength-2]='2';
            str[maxLength-3]='%';
            maxLength-=3;
        }
        length--;
    }
    puts(str);