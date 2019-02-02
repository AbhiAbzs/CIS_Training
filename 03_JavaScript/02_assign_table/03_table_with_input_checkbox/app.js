let print = document.querySelector("#print");
let input = document.querySelector("#input");
let display = document.querySelector("#display div.row");
let checkbox = document.querySelector("#checkbox_alert");
let alertboxPara = document.querySelector(".alert-danger p");
let arr=[];

// code for Response to click event for printing tables
print.addEventListener("click", function () {
    display.innerHTML = "";
    alertboxPara.innerHTML = "";
    response();
});

// response function for checking condition and printing errors
function response() {
    if (checkbox.checked == true) {
        if (input.value == "") {
            alert("Enter any value first.");
        } else if (input.value < 1 || input.value > 5) {
            alert("Value must be inbetween 1 to 5.");
        } else {
            console.log(arr);
            printTable(Number(input.value));
        }
    } else {
        if (input.value == "") {
            alertboxPara.innerHTML = "Enter any value first.";
            displayAlertBox()
        } else if (input.value < 1 || input.value > 5) {
            alertboxPara.innerHTML = "Value must be inbetween 1 to 5.";
            displayAlertBox()
        } else {
            console.log(arr);
            printTable(Number(input.value));
        }
    }
}

// function to print erors
function printTable(num) {
    for (let i = 1; i <= 10; i++) {
        display.innerHTML += num * i + "<br>";
    }
}

// function to animate alert box
function displayAlertBox() {
    $("#alertBox").fadeIn(1500, function () {
        $(this).delay(20).fadeOut(1500);
    });
}