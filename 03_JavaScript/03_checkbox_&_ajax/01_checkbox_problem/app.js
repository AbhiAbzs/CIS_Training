let checkboxValInput = document.querySelector("#checkboxValInput"),
    addCheckBoxBtn = document.querySelector("#addCheckBoxBtn"),
    display = document.querySelector("#display p"),
    alertBox = document.querySelector("#alertBox p"),
    checkboxRecord = [],
    temp,
    checkedSet = new Set();


document.onload = onloadMessage();
// Function to give user message to create there checkboxes
function onloadMessage() {
    alertBox.innerHTML = "Create as many checkboxes as you want.<br>By adding your own values in the input.";
    displayAlertBox();
}

// Adding eventListner & handler on the button for creating checkboxes.
addCheckBoxBtn.addEventListener("click", () => {
    alertBox.innerText = "";
    if (checkboxValInput.value != "") {
        createcheckboxes(checkboxValInput.value);
        addCheckboxEvent();
    } else {
        alertBox.innerText = "Enter a value First.";
        displayAlertBox();
    }
});

// Logic for creating checkboxes
function createcheckboxes(num) {
    if (checkboxRecord.indexOf(num) == -1) {
        checkboxRecord.push(num);
        let label = `&ThickSpace;<label for="${'val'+num}">${num}</label>&ThickSpace;`,
            input = `<input type="checkbox" name=${"val"+num}" value="${num}" id="${"val"+num}">`;
        $("#checkbox").append(label);
        $("#checkbox").append(input);
    } else {
        alertBox.innerText = "Value Already Entered";
        displayAlertBox();
    }
}

// Logic to display all selected checkboxes values.
function addCheckboxEvent() {
    $("input[type=checkbox]").on("click", function (event) {
        display.innerText ="";
        if (event.target.checked) {
            checkedSet.add(event.target.value);
            printChecked();
        } else {
            checkedSet.delete(event.target.value);
            printChecked();
        }
    });
}

// Print values in checked set on display
function printChecked() {
    checkedSet.forEach((data) => {
        display.innerHTML += data + "&ThickSpace;"
    });
}

// function to animate alert box
function displayAlertBox() {
    $("#alertBox").fadeIn(1500, function () {
        $(this).delay(20).fadeOut(1500);
    });
}