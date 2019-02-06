let jsonData,
    alertBox = document.querySelector("#alertBox"),
    jokeType = document.querySelector("#jokeType"),
    display = document.querySelector("#display p");

document.onload = onloadTask();
// Function to execute after dom gets loaded.
function onloadTask() {
    alertBox.innerHTML = "Select joke type to get any random joke of that particular type.";
    displayAlertBox();
    getData();
    display.innerText = "Display";
}

// Ajax request to fetch data from Public Joke API Server.
function getData() {
    $.get("https://official-joke-api.appspot.com/random_ten", function (json) {
        jsonData = json;
    });
}

// On click of Generate Joke Button, print joke in display.
$("#getJoke").on("click", () => {
    let joke = checkJokeType();
    display.innerHTML = joke;
});

// On click of Request New Data Button, an AJAX request is made to fetch new jokes dataset from server.
$("#getJokeData").on("click", () => {
    getData();
});

// logic to check joke type and then respond.
function checkJokeType() {
    if (jokeType.value == "general") {
        while (true) {
            let randId = getRandom();
            if (jsonData[randId].type == "general") {
                return `Joke Type:=${jsonData[randId].type} <br> ${jsonData[randId].setup} <br> ${jsonData[randId].punchline}`;
            }
        }
    } else if (jokeType.value == "programming") {
        while (true) {
            let randId = getRandom();
            if (jsonData[randId].type == "programming") {
                return `Joke Type:=${jsonData[randId].type} <br> ${jsonData[randId].setup} <br> ${jsonData[randId].punchline}`;
            }
        }
    } else {
        let randId = getRandom();
        return `Joke Type:=${jsonData[randId].type} <br> ${jsonData[randId].setup} <br> ${jsonData[randId].punchline}`;
    }
}

// Logic to get any random joke Id.
function getRandom() {
    return parseInt(Math.random() * jsonData.length);
}

// function to animate alert box
function displayAlertBox() {
    $("#alertBox").fadeIn(1500, function () {
        $(this).delay(100).fadeOut(2000);
    });
}