/* define your functions here */
function calculateTotal(price, quantity){
    return price * quantity 
}

function outputCartRow (item, total){
    total = calculateTotal(cart[item].product.price, cart[item].quantity)
    document.write("<tr><td>" + "<img src=images/" + cart[item].product.filename + ">" + "</td><td>" + cart[item].product.title + "</td><td>" + cart[item].quantity + "</td><td>" + cart[item].product.price.toFixed(2) + "</td><td>" + total.toFixed(2) + "</td></tr>");
}

function calculateSubtotal(){
    for (i=0;i<cart.length;i++){
        subtotal += calculateTotal(cart[i].product.price, cart[i].quantity);
        return subtotal;
    }
}




        
