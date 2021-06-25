import processing.video.*;
Movie movie;
void setup(){
  size(640,480);
  
  movie = new Movie(this, "video.mov");
  movie.loop();//movie.play();
}
void draw(){
  if(movie.available() ){ 
    movie.read();//讀視訊
  }
  set( 0, 0, movie);
  
}
