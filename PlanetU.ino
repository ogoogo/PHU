bool ohajikiotoshimasuka = true;
bool mojikannidouchuu = false;
int phase=1;

void setup(){

}

void loop(){
    linetrace();

    if (phase==1){
         if (ohajikiotoshimasuka){
             ohajiki();
         }

         if(/*完了マーク*/){
             //終了！！！
         }else if (/*文字終了マーク*/){
            phase=3;
            ohajikiotoshimasuka=false;
        }else if (/*左に道あり*/){
            turn(3);
        }else if (/*前に道あり*/){
            
        }else if (/*右に道あり*/){
            turn(1);
        }else{
            uTurn();
            ohajikiotoshimasuka=false;
            phase=2;

        }
    }else if (phase==2){
        if(/*左に道あり*/){
            turn(3);
            ohajikiotoshimasuka=true;
            phase=1;
        }else if(/*右に道あり*/){
            ohajikiotoshimasuka=true;
            phase=1;
        }

    }else/*phase3のとき*/{
        if(/*文字開始マークあり*/){
            ohajikiotoshimasuka=true;
            phase=1;
        }else if (/*左に道あり*/){
            turn(3);
        }else if (/*前に道あり*/){
            
        }else if (/*右に道あり*/){
            turn(1);
        }
    }
    
     
     
}

void linetrace(){
//ライントレース
    goStraightALittle();

    if(digitalRead(LTRIGHT)==LOW && digitalRead(LTLEFT)==HIGH){
        digitalWrite(IN1R, HIGH);
        digitalWrite(IN2R, LOW);
        digitalWrite(IN1L, LOW);
        digitalWrite(IN2L, HIGH);
        delay(500);
    }else if(digitalRead(LTRIGHT)==HIGH && digitalRead(LTLEFT)==LOW){
        digitalWrite(IN1R, LOW);
        digitalWrite(IN2R, HIGH);
        digitalWrite(IN1L, HIGH);
        digitalWrite(IN2L, LOW);
        delay(500);
    }
}

void ohajiki(){
//おはじきとうか
}

void turn(int u){
    //1だったら右に、3だったら左に回転
    if (u==1){
        digitalWrite(IN1R, HIGH);
        digitalWrite(IN2R, LOW);
        digitalWrite(IN1L, LOW);
        digitalWrite(IN2L, HIGH);
        delay(1000);
    }else if(u==3){
        digitalWrite(IN1R, LOW);
        digitalWrite(IN2R, HIGH);
        digitalWrite(IN1L, HIGH);
        digitalWrite(IN2L, LOW);
        delay(1000);
    }

}
void uTurn(){
    //Uターンさせる。出力センサとかモータの向きを全部ここで反転

}