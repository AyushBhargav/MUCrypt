//File input
var fs = require('fs');
var vex = require('vex-js');
vex.registerPlugin(require('vex-dialog'))
vex.defaultOptions.className = 'vex-theme-os'
var execFile = require('child_process').execFile;

function fetchFile() {
  let file = document.getElementById("fileSelector").files[0].path;
  fs.readFile(file, "utf-8", (err, data)=>{
      if(err) {
        console.log("File can't be opened!");
        return;
      }
      $("#fileContent").text(data);
  });
}
$("#fileSelector").change(function(){
  fetchFile();
});

//Text Area related code
let startIndex = -1;
let endIndex = -1;

let textArea = document.getElementById("fileContent");
textArea.addEventListener('select', function() {
  let selectionRange = $("#fileContent").getSelection();
  startIndex = selectionRange.start;
  endIndex = selectionRange.start + selectionRange.length - 1;
  vex.dialog.alert('Starting Index : ' + (startIndex + 1) + "\nEnding Index : " + (endIndex + 1));
  }, false);

// Encryption Panel
$("#encryptIt").click(function(){
  let operationCode = "encrypt";
  let file = document.getElementById("fileSelector").files[0].path;
  let password = $("#userPassword").val();
  if(startIndex == -1 || endIndex == -1)
    return;
  console.log(">>" + startIndex);
  console.log(">>>" + endIndex);

  // Real code starts
  var child = execFile("./MU_Crypt",
    [operationCode, file, password, startIndex.toString(), endIndex.toString()],
    function(error, stdout, stderr) {
      console.log(stdout);
      vex.dialog.alert('Encryption done!');
      fetchFile();
    });
});

$("#clearIt").click(function(){
  startIndex = -1;
  endIndex = -1;
  window.getSelection().removeAllRanges();
  vex.dialog.alert('Selection Cleared!');
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
  let operationCode = "decrypt";
  let file = document.getElementById("fileSelector").files[0].path;
  for(var i = 0; i < passwordFieldCount; i++) {
    var pid = "#pid" + i;
    var password = $(pid).val();
    var child = execFile("./MU_Crypt",
      [operationCode, file, password],
      function(error, stdout, stderr) {
        console.log(stdout);
      });
  }

  vex.dialog.alert('Decryption done!');
  fetchFile();
});
