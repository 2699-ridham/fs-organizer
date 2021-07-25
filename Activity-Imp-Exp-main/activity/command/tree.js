let fs=require("fs");
let path=require("path");

let types = {
    media: [".mp4", ".mkv"],
    archives: ['.zip', '.7z', '.rar', '.tar', '.gz', '.ar', '.iso', ".xz"],
    documents: ['.docx', '.doc', '.pdf', '.xlsx', '.xls', '.odt', '.ods', '.odp', '.odg', '.odf', '.txt', '.ps', '.tex'],
    app: ['.exe', '.dmg', '.pkg', ".deb"]
}

function tree(src){

    let allEntities=fs.readdirSync(src);
    for(let i=0;i<allEntities.length;i++){
        let fileName=allEntities[i];
        let fullPath=path.join(src,fileName);
        let statusOfPath=fs.lstatSync(fullPath);
        
        if(statusOfPath.isFile()){
            let ext = path.extname(fullPath);
            if(types.media.includes(ext)){
                console.log("media -> "+fileName);
         }else if(types.archives.includes(ext)){
            console.log("archives -> "+fileName);
         }else if(types.documents.includes(ext)){
            console.log("documents -> "+fileName);
         }else if(types.app.includes(ext)){
            console.log("app -> "+fileName);
         }else{
                console.log("others -> "+fileName);
         }

        }
    }

    return "tree command executed with path "+"\""+src+"\"";
}

module.exports={
    fxn:tree
}
