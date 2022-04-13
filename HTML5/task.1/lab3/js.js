// var play =document.getElementsByTagName("button")[0];
// var pasue =document.getElementsByTagName("button")[1];
// var stop =document.getElementsByTagName("button")[2];
// var mute =document.getElementsByTagName("button")[3];

// var audio=document.getElementsByTagName("audio")[0];
// // var audio2=document.getElementsByTagName("audio")[1];
// // var audio3=document.getElementsByTagName("audio")[2];
// ////////////////////////////////////////////////////
// //console.log(audio);
// function play(){
//     audio.play();
// }
// }
// //////////////////////////
// function pause(){
//      audio.pasue();
//     }
// ////////////////////////////////
// function stop(){  
//     audio.load();   
//     audio.pasue();  
//     //audio.currentTime = 0;
//  }
// ///////////////////////////////
// function mute(){  
//     audio.mute();
// }
// /////////////////////////////////////
// // function chose(s){ 
// //      s.play();
// //     }
// ///////////////////////////////////
// function rng(r){ 
//      window.onload=function (){
//            audio.duration=r.value; }
    
// }
// //////////////////////////////
// function vol(v){ 
//     audio.volume=v.value;
//  }
//  ////////////////////////////////////////////////
var arrSong = [
    ["1.mp3", "11.jpg"],
    ["2.mp3", "22.jpg"],
    ["3.mp3", "33.jpg"]
  ];
  var audio1 = document.getElementById("aud");
  var volu = document.getElementById("volu");
  var img = document.getElementsByTagName("img");
  var s = document.getElementById("sou");
  var divSong = document.getElementById("divsong");
  var ull = document.getElementsByTagName("ul");
  arrSong.forEach(function (index, i) {
    if (Array.isArray(arrSong[i][0])) {
      arrSong[i][0].forEach(function (index1, j) {
        var list1 = document.createElement("li");
        list1.textContent = index1;
        ull[0].appendChild(list1);
      });
    } else {
      var list = document.createElement("li");
      list.textContent = arrSong[i][0];
      ull[0].appendChild(list);
    }
  });
  $("li").click(function (e) {
    console.log(e.target);
    audio1.pause();
    audio1.setAttribute("src", e.target.textContent);
    audio1.load();
    arrSong.forEach(function (index, i) {
      if (Array.isArray(arrSong[i][0])) {
        arrSong[i][0].forEach(function (index1, j) {
          if (arrSong[i][0].includes(e.target.textContent)) {
            img[0].src = arrSong[i][1];
          }
        });
      } else {
        if (arrSong[i].includes(e.target.textContent)) {
          img[0].src = arrSong[i][1];
        }
      }
    });
  });
  function play() {
    console.log(s.src);
    audio1.play();
  }
  function pause() {
    audio1.pause();
  }
  function stop() {
    audio1.load();
    audio1.stop();
  }
  function vol() {
    audio1.volume = volu.value;
  }
  function mute(){  
    audio1.volume=0;
     }