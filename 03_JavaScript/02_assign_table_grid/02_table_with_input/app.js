let print = document.querySelector("#print"),
    input = document.querySelector("#input"),
    display = document.querySelector("#display");

print.addEventListener("click", function () {
    display.innerHTML = "";
    if (input.value == "") {
        alert("Enter any value first.");
    } else if (input.value < 1 || input.value > 5) {
        alert("Value must be inbetween 1 to 5.");
    } else {
        printTable(Number(input.value));
    }
});

function printTable(num) {
    for (let i = 1; i <= 10; i++) {
        display.innerHTML += num * i + "<br>";
    }
}