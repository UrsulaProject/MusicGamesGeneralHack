extern void init_CxB_hook();
extern void init_Jubeat_hook();
extern void init_RB_hook();

%group Universal

/*%hook NSURLConnection
+ (NSData *)sendSynchronousRequest:(NSURLRequest *)request returningResponse:(id)response error:err(id){
    if([request.URL.absoluteString isEqualToString:@"http://www.creapptive.co.kr/beatmp3/view/api2/purchase.html"]){
        return [@"<?XML version=\"1.0\" encoding=\"utf-8\" ?><RESPONSE><TITLE>PIANO
LIVE</TITLE><LANGUAGE>ko</LANGUAGE><RESULT_CODE>0</RESULT_CODE></RESPONSE>" dataUsingEncoding: NSUTF8StringEncoding];
    }
    else{
        return %orig;
    }
}
%end*/

%end

NSString *DocumentsDirectory() {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *basePath = paths.firstObject;
    [paths release];
    return [basePath stringByAppendingString:@"/"];
}

NSString *LibraryDirectory() {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    NSString *basePath = paths.firstObject;
    [paths release];
    return [basePath stringByAppendingString:@"/"];
}

%ctor {
    %init(Universal);

    NSString *BundleID = NSBundle.mainBundle.bundleIdentifier;

    if ([BundleID isEqualToString:@"jp.co.capcom.crossbeatjp"]) {
        init_CxB_hook();
    } else if ([BundleID containsString:@"jubeat"]) {
        init_Jubeat_hook();
    } else if ([BundleID containsString:@"rbplus"]) {
        init_RB_hook();
    }
}
