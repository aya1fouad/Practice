function drop(e, self) {
    var id = e.dataTransfer.getData("name");
    var div = document.getElementById(id).parentElement;
    var div2 = self;
    var img = div2.childNodes[0];
    if (condition(id, img.id)) {
        div2.appendChild(document.getElementById(id));
        div.appendChild(img);
    }
}
////////////////////////////////////////////////
function drag(e, self) {
    e.dataTransfer.setData("name", self.id);
}
/////////////////////////////////////////////////
function condition(x, y) {
    switch (x) {
        case "paper":
            if (y == "rock") {
                return true;
            }
            return false;
            break;
        case "rock":
            if (y == "scissors") {
                return true;
            }
            return false;
            break;
        case "scissors":
            if (y == "paper") {
                return true;
            }
            return false;
            break;
    }
}