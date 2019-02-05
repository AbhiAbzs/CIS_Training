let print = document.querySelector("#print"),
    input = document.querySelector("#input"),
    display = document.querySelector("#display div.row"),
    checkbox = document.querySelector("#checkbox_alert"),
    alertboxPara = document.querySelector(".alert-danger p"),
    arr = [];

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
            arr.forEach(append);
            arr.forEach(printTable);
            alert("Enter any value first.");
        } else if (input.value < 1 || input.value > 5) {
            arr.forEach(append);
            arr.forEach(printTable);
            alert("Value must be inbetween 1 to 5.");
        } else {
            if (arr.indexOf(input.value) == -1) {
                arr.push(input.value);
                arr.forEach(append);
                arr.forEach(printTable);
            } else {
                alert("Value already printed.");
                arr.forEach(append);
                arr.forEach(printTable);
            }
        }
    } else {
        if (input.value == "") {
            arr.forEach(append);
            arr.forEach(printTable);
            alertboxPara.innerHTML = "Enter any value first.";
            displayAlertBox();
        } else if (input.value < 1 || input.value > 5) {
            arr.forEach(append);
            arr.forEach(printTable);
            alertboxPara.innerHTML = "Value must be inbetween 1 to 5.";
            displayAlertBox();
        } else {
            if (arr.indexOf(input.value) == -1) {
                arr.push(input.value);
                arr.forEach(append);
                arr.forEach(printTable);
            } else {
                arr.forEach(append);
                arr.forEach(printTable);
                alertboxPara.innerHTML = "Value already printed.";
                displayAlertBox();
            }
        }
    }
}

// function to create & append child elements to display
function append(num) {
    let elem = document.createElement("div");
    elem.className = "col-xs-2 col-sm-2";
    elem.id = "div" + num;
    display.appendChild(elem);
}

// function to print erors
function printTable(num) {
    for (let i = 1; i <= 10; i++) {
        document.querySelector("#div" + num).innerHTML += num * i + "<br>";
    }
}

// function to animate alert box
function displayAlertBox() {
    $("#alertBox").fadeIn(1500, function () {
        $(this).delay(20).fadeOut(1500);
    });
}