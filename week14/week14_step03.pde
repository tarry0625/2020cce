void setup(){//設定 只做一次
    size(300,200);
    textSize(30);
}
int ans =0;
void draw(){//畫圖，每60秒次 60fps
  background(#2C9CF0);
  //int ans = (int)random(60);//強制轉型casting
  text( ans, 30, 30);
}
void mousePressed(){//mouse按下去才會亂數
  ans = (int)random(60);
}
