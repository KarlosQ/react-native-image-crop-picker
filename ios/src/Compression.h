//
//  Compression.h
//  imageCropPicker
//
//  Created by Ivan Pusic on 12/24/16.
//  Copyright © 2016 Ivan Pusic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ImageResult : NSObject

@property NSData *data;
@property NSNumber *width;
@property NSNumber *height;
@property NSString *mime;
@property UIImage *image;

@end

@interface VideoResult : NSObject

@end

@interface Compression : NSObject

- (NSData *)convertImageToOutputFormat:(UIImage *)image mimeType:(NSString *)mime compressQuality:(NSNumber *)compressQuality;
- (ImageResult*) compressImage:(UIImage*)image withOptions:(NSDictionary*)options  mimeType:(NSString *)mime;
- (void)compressVideo:(NSURL*)inputURL
            outputURL:(NSURL*)outputURL
          withOptions:(NSDictionary*)options
              handler:(void (^)(AVAssetExportSession*))handler;

@property NSDictionary *exportPresets;

@end
