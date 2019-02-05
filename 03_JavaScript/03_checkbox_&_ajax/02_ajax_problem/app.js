var temp=0;

// on click of Search Button do an ajax request to local json file.
$("#search").on("click",function () {
    // temp=$("#display p").load("data_file.json");
    temp=$.ajax({
        url:"data_file.json",
    });
    console.log(temp);
});


