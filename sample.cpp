<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="">
<style>
body {
  margin: 0;
  font-family: Optima;
}

.topnav {
  overflow: hidden;
  background-color: #333;
}

.topnav a {
  float: left;
  display: block;
  color: #f2f2f2;
  text-align: center;
  padding: 14px 16px;
  text-decoration: none;
  font-size: 17px;
}

.topnav a:hover {
  background-color: #ddd;
  color: black;
}

.topnav a.active {
  background-color: #04AA6D;
  color: white;
}

.topnav .icon {
  display: none;
}

@media screen and (max-width: 600px) {
  .topnav a:not(:first-child) {display: none;}
  .topnav a.icon {
    float: right;
    display: block;
  }
}

@media screen and (max-width: 600px) {
  .topnav.responsive {position: relative;}
  .topnav.responsive .icon {
    position: absolute;
    right: 0;
    top: 0;
  }
  .topnav.responsive a {
    float: none;
    display: block;
    text-align: right;
  }
  }
  h1 { 
  display: block;
  font-size: 2em;
  margin-top: 0.10em;
  margin-bottom: 0.10em;
  margin-left: 0;
  margin-right: 0;
  font-weight: bold;
}
table, th, td {
 border:1px solid black;
 border-collapse: collapse;
}

 .tablehead{
 width: 100%;
 min-width: 700px;
 min-height: 200px;
 text-align: center;
 background-image: url("ICTlandscape.jpg");
 background-repeat: no-repeat;
 background-position: center;
 }
 
</style>
</head>
<body>

<div class="topnav" id="myTopnav">
  <a href="duplicatehomepage.html">Home</a>
  <a href="form.html">Registration</a>
  <a href="#contact">School Tour</a>
  <a href="#about">About</a>
  <a href="javascript:void(0);" class="icon" onclick="myFunction()">
    <i class="fa fa-bars"></i>
  </a>
</div>
<table class="tablehead">
<tr>
<th>
  <h1><center><font face="Optima" size="5" color="#000080"><img src="tpaez logo.jpg" alt="tpaez logo" width="100" height="100" /><strong> TIMOTEO PAEZ HIGH SCHOOL </strong><img src="division.png" alt="deped logo" width="100" height="100" /></center></h1>
  <h1><center ><font face="Optima" size="5" color="#000080"><strong> Manila </strong></font></center></h1>
  <h1><center ><font face="Optima" size="5" color="#000080"><strong>T. Paez Integrated School- High School</strong></font></center></h1>
  <h1><center ><font face="Optima" size="5" color="#000080"><strong>Younger St., Balut, Tondo, Manila, Philippines</strong></font></center></h1>
</th>
</tr>
</table>
<script>
function myFunction() {
  var x = document.getElementById("myTopnav");
  if (x.className === "topnav") {
    x.className += " responsive";
  } else {
    x.className = "topnav";
  }
}
</script>
<center>
<table style="width:100%" background="gate.jpg">
<tr>
<th>
<center>
<div class="homepic" style="max-width:500px">
  <img class="mySlides" src="ICTlandscape.jpg" style="width:550px" "height:250px" noresize scrolling="no">
  <img class="mySlides" src="HElandscape.jpg" style="width:550px" "height:250px" noresize scrolling="no">
  <img class="mySlides" src="ABMlandscape.jpg" style="width:550px" "height:250px" noresize scrolling="no">
  <img class="mySlides" src="GASlandscape.jpg" style="width:550px" "height:250px" noresize scrolling="no">
</div>
</center>
<script>
var myIndex = 0;
carousel();

function carousel() {
  var i;
  var x = document.getElementsByClassName("mySlides");
  for (i = 0; i < x.length; i++) {
    x[i].style.display = "none";  
  }
  myIndex++;
  if (myIndex > x.length) {myIndex = 1}    
  x[myIndex-1].style.display = "block";  
  setTimeout(carousel, 5000); 
}
</script>
</center>
<table style="width:100%" "height=600px">
</th> 
  <tr>
    <td><iframe src="schoolpic.html" width="100%" height="600" style="border:none;">
</iframe></td>
  <td><iframe src="earlyregistration.html" width="100%" height="600" style="border:none;">
</iframe></td>
</tr>
</table>
</th>
</tr>


</body>
</html>