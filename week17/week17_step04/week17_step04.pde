void setup(){ //設定，只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q = "hello";
void draw(){// 每秒60次
  background(0);
  int len = line.length(); text(len, 100,50);
  text("Q:  "+Q,    100, 100);
  text("A   "+line, 100, 150);
}
void keyPressed(){//小心有時候會打字打到
  int len = line.length();
  if( key>='a' && key<='z') line = line + key;//小寫鍵 
  if( key>='A' && key<='Z') line = line + key;//大寫鍵
  if(key == BACKSPACE && len>0 ) line = line.substring(0,len-1);
}
