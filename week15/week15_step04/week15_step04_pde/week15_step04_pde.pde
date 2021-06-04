//秒數s: 0,1,2.....59
//       59,58,57...0(幫手)59-s
//===========================
//倒數: 9,8,7......0
import processing.sound.*;//Step03的程式
SoundFile player;//Step03的程式
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this, "tada.mp3");
}//Step03的程式，記得把tada.mp3也放進來
void draw(){//每秒60次
    background(41,109,207);//隨便猜的色彩
    int s = second();//秒鐘
    //text( 59-s, 100,100);
    text( 9-s%10, 100,100);
    if(9-s%10 == 0)player.play();//Step03的程式
}//0秒的時候，if()會進去60次，吵死了!!!
