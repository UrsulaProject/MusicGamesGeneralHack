var DocumentsDirectory = dlsym(RTLD_DEFAULT, 'DocumentsDirectory');
var CC_MD5_Init = dlsym(RTLD_DEFAULT, 'CC_MD5_Init');
var CC_MD5_Update = dlsym(RTLD_DEFAULT 'CC_MD5_Update');
var CC_MD5_Final = dlsym(RTLD_DEFAULT, 'CC_MD5_Final');

DocumentsDirectory = (typedef void *())(DocumentsDirectory);
CC_MD5_Init = (typedef int(void *))(CC_MD5_Init);
CC_MD5_Update = (typedef int(void *, void *, int))(CC_MD5_Update);
CC_MD5_Final = (typedef int(char *, void *))(CC_MD5_Final);
strlen = (typedef int(char *))(strlen);

struct CC_MD5_CTX {
    long A;
    long B;
    long C;
    long D;
    long Nl;
    long Nh;
    long *data; // 64 / sizeof(uint32_t)
    int num;
};

function NSMakeRange(loc, len) { return {location:loc, length:len}; }

function saveMulist(outfile, infile) {
    var savePath = DocumentsDirectory() + outfile;
    // ...
    var data = [NSMutableData dataWithBytes:'ASHU' length:4];

    var yoSwag = [NSData dataWithContentsOfFile:infile];
    [data appendData:yoSwag];
    var mk = [musicListKey UTF8String];
    var r5 = strlen(mk);
    var md5 = new (struct CC_MD5_CTX);
    CC_MD5_Init(md5.value())
    // ..

    [bfc cipherInit:s];
    [bfc encipher:data.valueOf()];
    [data writeToFile:savePath atomically:true];
}

function decryptMulist(infile) {
    var savePath = DocumentsDirectory() + infile;
    var musicListKey = [JubeatAppDelegate musicListKey];

    if (![[NSFileManager defaultManager] fileExistsAtPath:savePath]) {
        return;
    }

    if (!musicListKey) {
        return;
    }

    var oldData = [NSMutableData dataWithContentsOfFile:savePath];
    var bfc = [[BFCodec alloc] init];
    var mk = [musicListKey UTF8String];
    var r5 = strlen(mk);

    var md5 = new (struct CC_MD5_CTX);
    md5->data = malloc(16);

    CC_MD5_CTX(md5.valueOf());
    CC_MD5_Update(md5.valueOf(), mk.valueOf(), r5);
    var digest = malloc(16);
    CC_MD5_Final(digest.valueOf(), md5.valueOf());
    var s = [NSData dataWithBytes:digest length:0x10];

    [bfc cipherInit:s];
    [bfc decipher:oldData.valueOf()];
    var data = [NSMutableData dataWithData:[oldData subdataWithRange:NSMakeRange(4, oldData.length - 4)]];
    [data writeToFile:(savePath + '.decrypted') atomically:true];
}
