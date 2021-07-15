 vector<string> readBinaryWatch(int turnedOn) {
        vector<string>time;
        for(int i=0;i<12;i++){
            bitset<4> h(i);
            for(int j=0;j<60;j++){
                bitset<6>m(j);
                if(h.count()+m.count()==turnedOn){
                    string hours=to_string(i);
                    string minutes=(j<10)?":0":":";
                    minutes+=to_string(j);
                    time.push_back(hours+minutes);
                }
            }
        }
        return time;
    }