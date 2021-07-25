let fs=require("fs");
let path=require("path");

let types = {
    media: [".mp4", ".mkv"],
    archives: ['.zip', '.7z', '.rar', '.tar', '.gz', '.ar', '.iso', ".xz"],
    documents: ['.docx', '.doc', '.pdf', '.xlsx', '.xls', '.odt', '.ods', '.odp', '.odg', '.odf', '.txt', '.ps', '.tex'],
    app: ['.exe', '.dmg', '.pkg', ".deb"]
}

function organize(src){
    let allEntities=fs.readdirSync(src);
    let src2=path.join(src,"OrganisedFiles");
    fs.mkdirSync(src2);
    
    for(let i=0;i<allEntities.length;i++){
        let fileName=allEntities[i];
        let fullPath=path.join(src,fileName);
        let statusOfPath=fs.lstatSync(fullPath);
        
        if(statusOfPath.isFile()){
            let ext = path.extname(fullPath);
            if(types.media.includes(ext)){
                if(fs.existsSync(path.join(src2,"media"))==false){
                    let folderPath=path.join(src2,"media");
                    fs.mkdirSync(folderPath);
                    return ;
                }

                let copiedFilePath=path.basename(fullPath);
                let destFilePath=path.join(path.join(src2,"media"),copiedFilePath);
                fs.copyFileSync(fullPath,destFilePath);
            }else if(types.archives.includes(ext)){
                if(fs.existsSync(path.join(src2,"archives"))==false){
                let folderPath=path.join(src2,"archives");
                fs.mkdirSync(folderPath);
                }
                let copiedFilePath=path.basename(fullPath);
                let destFilePath=path.join(path.join(src2,"archives"),copiedFilePath);
                fs.copyFileSync(fullPath,destFilePath);

            }else if(types.documents.includes(ext)){
                if(fs.existsSync(path.join(src2,"documents"))==false){
                    let folderPath=path.join(src2,"documents");
                fs.mkdirSync(folderPath);
                }

                let copiedFilePath=path.basename(fullPath);
                let destFilePath=path.join(path.join(src2,"documents"),copiedFilePath);
                fs.copyFileSync(fullPath,destFilePath);

            }else if(types.app.includes(ext)){
                if(fs.existsSync(path.join(src2,"app"))==false){
                    let folderPath=path.join(src2,"app");
                fs.mkdirSync(folderPath);
                }

                let copiedFilePath=path.basename(fullPath);
                let destFilePath=path.join(path.join(src2,"app"),copiedFilePath);
                fs.copyFileSync(fullPath,destFilePath);

            }else{
                if(fs.existsSync(path.join(src2,"others"))==false){
                    let folderPath=path.join(src2,"others");
                fs.mkdirSync(folderPath);

                }
                
                let copiedFilePath=path.basename(fullPath);
                let destFilePath=path.join(path.join(src2,"others"),copiedFilePath);
                fs.copyFileSync(fullPath,destFilePath);
            }
        }
    }

    return "organize command executed with path "+"\""+src+"\"";
}

module.exports={
    fxn:organize
}