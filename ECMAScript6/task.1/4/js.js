function courseInfo(options = {courseName, courseDuration, courseOwner}){

    let x = Object.keys(options).every((item)=>{

        return item === "courseName" || item === "courseDuration" || item === "courseOwner";
    
    });

    if(x == false)
        throw "not allowed";

    console.log(options);
}

courseInfo({courseName :"html" });
courseInfo({courseInsractor :"ahmed" });