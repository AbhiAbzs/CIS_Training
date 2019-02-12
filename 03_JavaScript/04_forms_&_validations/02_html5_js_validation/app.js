let firstName = document.querySelector("#firstName"),
	lastName = document.querySelector("#lastName"),
	mobileNo = document.querySelector("#mobileNo"),
	email = document.querySelector("#email"),
	pass = document.querySelector("#password"),
	rePass = document.querySelector("#rePassword"),
	myVar,
	formDiv = document.querySelector(".form-div"),
	submitBtn = document.querySelector(".btn");


// Check whether all the input fields are filled before submitting
submitBtn.addEventListener("click", (event) => {
	displayErrMsg();
	myVar = event;
	localStorage.setItem("eventBtn", JSON.stringify(event));
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
	$("#errDisplay").show();
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
}

function numberField(d){
			var str = document.getElementById(d).value;
			var l = str.length;
			var ch =str.charAt(str.length-1);
			ch = ch.charCodeAt(0);
			if(ch >= 48 && ch <= 57 ){
				if(l >10){
					str = str.substring(0,str.length-1);
					document.getElementById(d).value = str;
				}
			}else{
				str = str.substring(0,str.length-1);
				document.getElementById(d).value = str;
			}
		}

		function checkTenDigit(d){
			var str = document.getElementById(d).value ;
			if(str.length != 10){
				alert(" Enter Valid Mobile number ");
				document.getElementById(d).value = "";
			}
		}

		function nameField(d){
			var str = document.getElementById(d).value;
			var ch =str.charAt(str.length-1);
			ch = ch.charCodeAt(0);
			if(ch >= 65 && ch <= 90 || ch >= 97 && ch <=122 || ch == 32){
				//
			}else{
				str = str.substring(0,str.length-1);
				document.getElementById(d).value = str;
			}
		}	

		function emailField(d){
			var str = document.getElementById(d).value;
			var check = false;
			for(var i =0;i<str.length;i++){
				if(str.charAt(i) == "@"){
					check = true;
					break;
				}
			}
			if(check == false){
				alert("Re-entered Correct Email");
				document.getElementById(d).value = "";
			}

		}	

		function passwordField(d){
			var str = document.getElementById(d).value;
			var spcl = false;
			var nu = false;
			var cp = false;
			var ch;
			if(str.length >= 8){
				for(var i =0;i<str.length;i++){
					ch = str.charCodeAt(i);
					if(ch >= 35 && ch <= 47 || ch >=60 && ch <= 64 ){
						spcl =true;
					}
				}
				for(var i =0;i<str.length;i++){
					ch = str.charCodeAt(i);
					if(ch >= 48 && ch <= 57 ){
						nu =true;
					}
				}
				for(var i =0;i<str.length;i++){
					ch = str.charCodeAt(i);
					if(ch >= 65 && ch <= 90 ){
						cp =true;
					}
				}
			}else{
				alert("Password must be greater than 8 character")
			}

			if(spcl == false || nu == false || cp == false){
				alert("Atleast use one special character or One Capital character or one Numeric character");
				document.getElementById(d).value = "";
			}
		}

		function checkForm(){
			//alert("btn click ");oninput=""
			if(document.getElementById('firstName').value == ""){
				alert("Enter First Name ");
				return;
			}else if(document.getElementById('lastName').value == ""){
				alert("Enter Last Name ");
				return;
			}else if(document.getElementById('phone').value == ""){
				alert("Enter Phone Number ");
				return;
			}else if(document.getElementById('email').value == ""){
				alert("Enter Email ");
				return;
			}else if(document.getElementById('address').value == ""){
				alert("Enter your Address Field ");
				return;
			}else if(document.getElementById('loginId').value == ""){
				alert("Enter LoginId ");
				return;
			}else if(document.getElementById('password').value == ""){
				alert("Enter Password ");
				return;
			}else if(document.getElementById('dob').value == ""){
				alert("Fill your DOB ");
				return;
			}else if(!(document.getElementById('M').checked || document.getElementById('F').checked)){
				alert("Enter your Gender ");
			}else if(!(document.getElementById('java').checked || document.getElementById('python').checked || document.getElementById('js').checked)){
				alert("Enter your Course ");
			}
		}
*/