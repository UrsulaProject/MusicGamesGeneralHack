//Written By Naville.Zhang
#include <stdio.h>
@interface IO:NSObject
{
    NSString * filename;
    NSString * directoryname;
}
+(void)storeString:(NSString *)fileName content:(NSString *)writeContent;
+(void)storeData:(NSString *)fileName content:(NSData *)writeContent;
@end

@implementation IO
+(NSString*)GetDocumentsPath:(NSString*)Name{
    NSString* string =[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    
    NSString* fileName = [string  stringByAppendingPathComponent:Name];
    return fileName;
    
    
    
}
+(NSString*)GetLibraryPath:(NSString*)Name{
    NSString* string =[NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    
    NSString* fileName = [string  stringByAppendingPathComponent:Name];
    return fileName;
    
    
    
}
+(void)storeString:(NSString *)fileName content:(NSString *)writeContent
{
    NSString *pathDocuments=[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    
    NSString *createPath=[NSString stringWithFormat:@"%@/%@",pathDocuments,fileName];//用文件名补全路
    NSData *data ;
    
    /*data = [writeContent dataUsingEncoding:NSUTF8StringEncoding];//新文件的初始数据
     [[NSFileManager defaultManager] createFileAtPath:createPath contents:data attributes:nil]; */
    if ([[NSFileManager defaultManager] fileExistsAtPath:createPath])//判断文件是否已存在
    {
        
        
    }
    else{
        data = [writeContent dataUsingEncoding:NSUTF8StringEncoding];//新文件的初始数据
        [[NSFileManager defaultManager] createFileAtPath:createPath contents:data attributes:nil];//创建文件
    }
    NSString * orig=[NSString stringWithContentsOfFile:createPath encoding:NSUTF8StringEncoding error:nil];
    writeContent=[writeContent stringByAppendingString:@"\n"];
    writeContent=[writeContent stringByAppendingString:orig];
    [writeContent writeToFile:(NSString *)createPath atomically:(BOOL)false encoding:(NSStringEncoding)NSUTF8StringEncoding error:(NSError **)nil];
}
////
////


+(void)storeData:(NSString *)fileName content:(NSData *)writeContent
{
    NSString *pathDocuments=[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    
    NSString *createPath=[NSString stringWithFormat:@"%@/%@",pathDocuments,fileName];//用文件名补全路
    NSData *data ;
    
    /*data = [writeContent dataUsingEncoding:NSUTF8StringEncoding];//新文件的初始数据
     [[NSFileManager defaultManager] createFileAtPath:createPath contents:data attributes:nil]; */
    if ([[NSFileManager defaultManager] fileExistsAtPath:createPath])//判断文件是否已存在
    {
        
        
    }
    else{
        data = writeContent;//新文件的初始数据
        [[NSFileManager defaultManager] createFileAtPath:createPath contents:data attributes:nil];//创建文件
    }
    
}
+(NSData*)GetData:(NSString*)path{
    
    NSString *pathDocuments=[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    
    NSString *createPath=[NSString stringWithFormat:@"%@/%@",pathDocuments,path];//用文件名补全路
    
    NSData* data = [NSData dataWithContentsOfFile: createPath];
    return data;
}



+(NSString *)hexStringFromString:(NSString *)string{
    NSData *myD = [string dataUsingEncoding:NSUTF8StringEncoding];
    Byte *bytes = (Byte *)[myD bytes];
    //下面是Byte 转换为16进制。
    NSString *hexStr=@"";
    for(int i=0;i<[myD length];i++)
        
    {
        NSString *newHexStr = [NSString stringWithFormat:@"%x",bytes[i]&0xff];///16进制数
        
        if([newHexStr length]==1)
            
            hexStr = [NSString stringWithFormat:@"%@0%@",hexStr,newHexStr];
        
        else 
            
            hexStr = [NSString stringWithFormat:@"%@%@",hexStr,newHexStr]; 
    } 
    return hexStr; 
}
@end
