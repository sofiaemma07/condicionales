// rect(0, 0, 100, 100)
// ellipse(width/2, height/2, 50 diametro hori, 50 diametro vert)
// line(width, 0, 0, height)

//let x = width/2;
function setup() {
  createCanvas(600, 600, P2D); // ancho y alto del lienzo
  background(255); //color de fondo
  fill(255, 0, 0); // color de relleno para figuras
  rect(0, 0, 100, 100); // un rectangulo(x, y, b, h)
  stroke(0, 255, 0); // color de linea
  ellipse(width/2, height/2, 50, 50); // ellipse(x,y,ancho,alto)
  line(width, 0, 0, height); // linea (x1,y1,x2,y2)

  for (let i = 0; i < 10; i++)
    line(i*60,0,i*60, height;
    line(0, i*60, width, i*60);
}

function draw() {
}
