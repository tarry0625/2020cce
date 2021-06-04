//Step03出發，做Step05
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this, "bell.mp3");
}//把bell.mp3放進來
void draw(){
    background(41,109,207);
}
void mousePressed(){
    if(player.isPlaying() )
    {
      player.stop();
    }
    else {
      player.play();
    }
}
