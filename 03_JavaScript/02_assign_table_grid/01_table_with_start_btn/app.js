let start = document.querySelector("#start");
start.addEventListener("click", function () {
    printTable(5);
});

function printTable(num) {
    let display=document.querySelector("div");  
    for (let i = 1; i <= num; i++) {
        for (let j = 1; j <= 10; j++) {
            display.innerText+=" "+i*j;
        }
        display.innerHTML+="<br>";
    }
}