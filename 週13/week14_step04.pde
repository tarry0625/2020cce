//int a[]={1,2,3,4,5,6,7,8,9,10};//C,C++
int []a = {1,2,3,4,5,6,7,8,9,10};
void setup(){//設定 只做一次
    size(400,200);
    textSize(30);
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<10;i++){
    text(a[i], i*40, 100);
  }
}
void mousePressed(){
int i1 = (int) random(10);
int i2 = (int) random(10);
int temp =a[i1];a[i1]=a[i2];a[i2]=temp;
}//交換，行數太擠，所以塞成一行，中間是分號喔
