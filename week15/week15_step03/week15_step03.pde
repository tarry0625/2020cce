//發出聲音，有點難，要用外掛 Prossing的Sound
//這裡叫 PDE: Prossing Developing Environment
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
