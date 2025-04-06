 function validate (){
    var decimal=  /^(?=.*\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[^a-zA-Z0-9])(?!.*\s).{8,15}$/;
    var path=document.getElementById("pass").value;
     if(path.match(decimal))
    { 
        alert('Correct, try another...')
      return true;
    } 
       else
        { 
        alert('Wrong...!')
        return false;
        }
   }
   
// function myFunction() {
//   var x = document.getElementById("myTopnav");
//   if (x.className === "topnav") {
//     x.className += " responsive";
//   } else {
//     x.className = "topnav";
//   }
// }
// //validition password
// function verify() {
// var pw = document.getElementById("pswd").value;
// var pass=pw.toString();
// var n=0,c=0,d=0;
// let newtest=/^(?=.[~`!@#$%^&()--+={}\[\]|\\:;"'<>,.?/_₹]).*$/;
// for(let i=0;i<pass.length;i++)
// {
//   if(pass[i]==" ")
//   n=-1;
// };

// for(let t=0;t<pass.length;t++)
// {
//   if(pass[t]>='A' && pass[t]<='z')
//   c++;
// };

// for(let t=0;t<pass.length;t++)
// {
//   if(pass[t]>=0||pass[t]<=9)
//   d=1;
// };

// //check empty password field
// if(pw == "") {
//    document.getElementById("message").innerHTML = "**Fill the password please!";
//    return false;
// }

// //minimum password length validation
// else if(pw.length < 8) {
//    document.getElementById("message").innerHTML = "**Password length must be atleast 8 characters";
//    return false;
// }

// else if(n==-1)
// {
// document.getElementById("message").innerHTML = "**Password contain whitespace";
// return false;
// }
// else if(pass[0]<'A' || pass[0]>'Z')
// {
//   document.getElementById("message").innerHTML = "**Password Must Start with Uppercase character";
//   return false;
// }
// else if(c!=8)
// {
// document.getElementById("message").innerHTML = "**Password contain less or more than 8 character";
// return false;
// }

// else if(d==0)
// {
// document.getElementById("message").innerHTML = "**Password Must contain At least one digit";
// return false;
// }
// else if(pw.search(/[~`!@#$%^&*()--+={}\[\]|\\:;"'<>,.?/_₹]/) <0 ) {
//   document.getElementById("message").innerHTML = "**Password Must contain one special character";
// return false;
// }
// else {
// document.getElementById("message").innerHTML = "";
// }


// //validation email

// let emailAddress= document.getElementById("emailAddress");

// let emailAddressValue=emailAddress.value.trim(); 
// let newemail= emailAddressValue.toString();
// let ee=0;
// let bb=0;
// for(let eee=0;eee<newemail.length;eee++)
// {
//  if(newemail[eee]=='@')
//  {ee=1;
//  bb++;
// var ind=eee;
// }
// }
// if(emailAddressValue=="")
// {
//  document.getElementById("message2").innerHTML="Email Address is required";
//  return false;
// }else if(ee==0){
//  document.getElementById("message2").innerHTML="@ NotExist";
//   return false;
// }
// else if(bb>1){
//  document.getElementById("message2").innerHTML="Only One @";
//   return false;
// }
// else if(newemail[0]=='@')
// {
//  document.getElementById("message2").innerHTML="cannot start with @";
//   return false;
// }
// else if(newemail[ind+1]==undefined)
//          {
//           document.getElementById("message2").innerHTML="cannot end with @";
//            return false;
//          }
// else {
// document.getElementById("message2").innerHTML = "";
// }
// //validation number 

// var mobileNumber= document.getElementById("mobileNumber");
//   var mobvalu=mobileNumber.value.trim();
//   validMobileNumber=/^[0-9]*$/;
//   var stringnumber=mobvalu.toString();
//   if(mobvalu=="")
//   {
//       document.getElementById("message1").innerHTML="Pleas Enter Your Mobile";
//       return false;
//   }
//   else if(mobvalu.length!=11 )
//   {
//       document.getElementById("message1").innerHTML="Mobile Must be 11 Digit";
//       return false;
//   }
//   else if(!validMobileNumber.test(mobvalu)){
//       document.getElementById("message1").innerHTML="Mobile Number must be a number";
//   return false;
//   }
//   else if(stringnumber[0]!=0)
//   {
//       document.getElementById("message1").innerHTML="Mobile Must start with 0";
//       return false;
//   }
//   else {
// document.getElementById("message1").innerHTML = "";
// }

  


// }
