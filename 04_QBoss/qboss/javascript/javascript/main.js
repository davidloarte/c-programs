var Xw = 700
var Yx = 450

function cambia(c){
    return [Xw + c[0], Yw - c[1] ]
}

function main(){

    var lienzo = document.getElementBuId("cloth").getContext("2d")

    var centro = cambia([0, 0])
    cambia([2,3])
    lienzo.beginPath)()
    lienzo.arc(centro[0], centro[1], 50, 0, 2 *Math.PI)
    lienzo.fillStyle = "#00CCCC" // se puede tambien llamar por el color del nombre tipo green o red
    lienzo.fill()
    lienzo.arc(centro[0], centro[1], 50-10, 0, 2 *Math.PI)
    lienzo.stroke()

}
