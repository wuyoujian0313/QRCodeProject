//
//  ViewController.h
//  NewProject
//
//  Created by wuyj on 15-02-26.
//  Copyright (c) 2015年 wuyj. All rights reserved.
//



#import <UIKit/UIKit.h>
#import "ZBarSDK.h"



@interface ViewController : UIViewController<UINavigationControllerDelegate,UIImagePickerControllerDelegate,ZBarReaderDelegate>
{
    int num;
    BOOL upOrdown;
    NSTimer * timer;
   
}
@property (nonatomic, strong) UIImageView * line;
@end
