//File input

// Encryption Panel
$("encryptIt").click(function(){

});

$("#clearIt").click(function(){

});

// Decryption Panel
let passwordFieldCount = 0;
$("#addPassword").click(function(){
  let passwordId = "pid" + passwordFieldCount++;
  let passwordCode = '<input type="text" id="' + passwordId + '" class="form-control" placeholder="Password" aria-describedby="basic-addon1">'
  $("#passwordArea").append(passwordCode);
  $("#passwordCount").text(passwordFieldCount);
});

$("#decryptIt").click(function(){

});
