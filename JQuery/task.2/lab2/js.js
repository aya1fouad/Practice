$.ajax({
    url: "rockbands.json",
    type: "GET",
    success: function(res) {
        var result = res;
        for (var key in result) {
            $("#dropDown").append("<option>" + key +"</option>"); }

        $("#dropDown").change(function() {
            console.log(result);
            $("#dropDown2").empty();
            var value = $("#dropDown").val();
            console.log(value);
            $("#dropDown2").append("<option >choose rom this:</option>");
            for (var i = 0; i < result[value].length; i++) {
                $("#dropDown2").append("<option value='" + result[value][i]['value'] + "'>" + result[value][i]['name'] + "</option>");
            }
        })

        $("#dropDown2").change(function() {
            var url = $("#dropDown2").val();
            if (url) {
                window.location = url;
            }
            return false;
        })
    },


    error: function(e) {
        console.log(e);
    }
})
