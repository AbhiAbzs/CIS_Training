let display = document.querySelector("#display p");
let gridContainer = document.querySelector("#gridContainer");
let count = 0;
let arr = ['A', 'B', 'C', 'D', 'E'];
let temp = ['A', 'B', 'C', 'D', 'E'];
let record = {};


document.onload = createBtnGrid();
// Function for creating 50 buttons grid of size 5X10
function createBtnGrid() {
    for (let i = 0; i < 10; i++) {
        addRow(i + 1);
    }
    for (let i = 0; i < 5; i++) {
        addRowsGrid();
    }
    // createCombination();    for creating combination of A-E digits
}

// Function to handle grids, Row creation work
function addRow(rowNum) {
    let elem = document.createElement("div");
    elem.className = "row gridRow";
    // elem.id="row"+rowNum;       //would be useful for child button grids to select, although could have used css parent sudo selector for the same, but this is clean and safe.
    gridContainer.appendChild(elem);
}

// Function to handle each rows button grid creation
function addRowsGrid() {
    /* let elem = document.createElement("button");
    elem.className = "btn btn-outline-info btn-lg col-sm-2"; */ // change of plan using jquery to ease out some task.
    $(".gridRow").append('<button type="button" class="btn btn-outline-info btn-lg col-xs-2 col-sm-2"> </button>');
}

// Creating Combination of A to E upto 50 numbers
function createCombination() {
    for (let i = 0; i < 9; i++) {
        arr.forEach(function (char) {
            temp.push(temp[i] + char);
        });
    }
}

// adding eventListner to each button. || Using jquery for ease, else in js, I would have to select all elements and loop through each of them adding eventListner on them.
$(".btn").on("click", function (event) {
    if (count <= 50) {
        if (this.id == "") {
            count++;
            this.id = "btn" + count;
        }
        if (record[this.id == undefined]) {
            record[this.id] = getCombination();
            displayCombination(this.id);
        } else {
            displayCombination(this.id);
        }
    }
    // console.log(event);
});

// Logic for displaying combination for the button clicked
function displayCombination(btnId) {
    display.innerHTML = record[this.id];
    event.srcElement.classList.remove("btn-outline-info");
    event.srcElement.classList.add("btn-info");

}

// Logic for getting current value of combination
function getCombination() {

}






// old, but awesome debugging session. ||**js just uses current copy of array in forEach loop, so it wont be infnite loop, no need for manually throwing exception
/* let arr = ['a', 'b', 'c', 'd', 'e'];
let temp = ['a', 'b', 'c', 'd', 'e'];
let BreakException = {};

try {
    temp.forEach(function (pt_data) {
        if (temp.length == 50) {
            throw BreakException;
        } else {
            arr.forEach(function (char) {
                temp.push(pt_data + char);
            });
        }
    });
} catch (e) {
    if (e !== BreakException) throw e;
} */