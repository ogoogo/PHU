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
}

void ohajiki(){
//おはじきとうか
}

void turn(int u){
    //1だったら右に、3だったら左に回転

}
void uTurn(){
    //Uターンさせる。出力センサとかモータの向きを全部ここで反転

}