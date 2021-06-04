```C
void setup(){//設定 只做一次
  size(400,200);
}
void draw(){
  int s = second();
  if(s%2==0){
    background(255,0,0);
  }else
  {
    background(51,109,200);
  }
}
```
轉換
```C
function setup(){//設定 只做一次
  createCanvas(400,200);
}
function draw(){
  let s = second();
  if(s%2==0){
    background(255,0,0);
  }else
  {
    background(51,109,200);
  }
}
```
