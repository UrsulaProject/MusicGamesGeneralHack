extern void init_CxB_hook();
extern void init_Jubeat_hook();
extern void init_RB_hook();
NSString * DocumentsDirectory ()
{    
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *basePath = paths.firstObject;
    [paths release];
    return [basePath stringByAppendingString:@"/"];
}
NSString * LibraryDirectory ()
{    
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    NSString *basePath = paths.firstObject;
    [paths release];
    return [basePath stringByAppendingString:@"/"];
}
%ctor{
NSString* BundleID=[[NSBundle mainBundle] bundleIdentifier];
	if([BundleID isEqualToString:@"jp.co.capcom.crossbeatjp"]){
		init_CxB_hook();


	}
	if([BundleID containsString:@"jubeat"]){
		 init_Jubeat_hook();


	}
    if([BundleID containsString:@"rbplus"]){
      init_RB_hook();
    }


}