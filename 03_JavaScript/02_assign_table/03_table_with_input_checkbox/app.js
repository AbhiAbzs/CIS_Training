let print = document.querySelector("#print");
let input = document.querySelector("#input");
let display = document.querySelector("#display");
let checkbox = document.querySelector("#checkbox_alert");
let alertbox = document.querySelector(".alert-danger");
let alertboxPara = document.querySelector(".alert-danger p");

print.addEventListener("click", function () {
    display.innerHTML = "";
    alertboxPara.innerHTML = "";
    if (checkbox.checked == "true") {
        if (input.value == "") {
            alert("Enter any value first.");
        } else if (input.value < 1 || input.value > 5) {
            alert("Value must be inbetween 1 to 5.");
        } else {
            printTable(Number(input.value));
        }
    } else {
        if (input.value == "") {
            alertboxPara.innerHTML="Enter any value first.";
            displayAlertBox()
        } else if (input.value < 1 || input.value > 5) {
            alertboxPara.innerHTML="Value must be inbetween 1 to 5.";
            displayAlertBox()
        } else {
            printTable(Number(input.value));
        }
    }
});

function printTable(num) {
    for (let i = 1; i <= 10; i++) {
        display.innerHTML += num * i + "<br>";
    }
}

function displayAlertBox(){
    alertbox.removeAttribute("hidden");
}