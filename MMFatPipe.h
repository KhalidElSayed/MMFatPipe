//
//  MMFatPipe.h
//  ListDocs
//
//  Created by Maximilian Mackh on 7/28/12.
//  Copyright (c) 2012 Maximilian Mackh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MMFatPipe : NSObject

//1 Page
- (void)sendImagewithToken:(NSString *)token andImageData:(id)imageData andTitle:(NSString *)title andNote:(NSString *)note withOptimization:(NSString *)wantsOptimized;

//2 Pages
- (void)sendImagewithToken:(NSString *)token andImageData:(id)imageData withPageTwo:(id)imageDataTwo andTitle:(NSString *)title andNote:(NSString *)note withOptimization:(NSString *)wantsOptimized;

@end
