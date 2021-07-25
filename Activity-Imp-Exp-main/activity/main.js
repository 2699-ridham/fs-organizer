let path=require("path");


let helpObj=require("./command/help");
let organizeObj=require("./command/organize");
let treeObj=require("./command/tree");

let inputArr=process.argv.slice(2);
let fileName=inputArr[0];
let givenPath=inputArr[1];

if(fileName=="help"){
    console.log(helpObj.fxn(givenPath));

}else if(fileName=="tree"){
    console.log(treeObj.fxn(givenPath));

}else if(fileName=="organize"){
    console.log(organizeObj.fxn(givenPath));
}else{
    console.log("kindly enter correct command");
}


