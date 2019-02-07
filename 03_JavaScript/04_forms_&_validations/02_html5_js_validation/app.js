let firstName = document.querySelector("#firstName"),
    lastName = document.querySelector("#lastName"),
    mobileNo = document.querySelector("#mobileNo"),
    email = document.querySelector("#email"),
    pass = document.querySelector("#password"),
    rePass = document.querySelector("#rePassword"),
    myVar,
    submitBtn = document.querySelector(".btn");


// Check whether all the input fields are filled before submitting
submitBtn.addEventListener("click", (event) => {
    displayErrMsg();
    console.log(event);
    myVar=event;
    localStorage.setItem("eventBtn",JSON.stringify(event));
});

// First name validation logic & sanitation
function firstNameVal() {
    if (firstName.value == "") {

    }
    if (firstName.value.length > 20) {

    }
}

// Last name validation logic & sanitation







// function to animate alert box
function displayErrMsg() {
    $("#errDisplay").fadeIn(3500, function () {
        $(this).delay(1000).fadeOut(2000);
    });
}



/* 
$("input[type=submit]").on("click", (event) => {
    if (document.getElementById('password').value != document.getElementById('rePassword').value) {
        document.getElementById('rePassword').setCustomValidity('Passwords must match.');
    } else {
        document.getElementById('password').setCustomValidity('');
    }
}); */

/* $("#mobileNo").change((event) => {
        document.getElementById('mobileNo').setCustomValidity('Enter a valid mobile number of 10 digit');
}); */
/* 
myInput.oninput = function () {
    if (this.value.length > 4) {
        this.value = this.value.slice(0, 4);
    }
} */