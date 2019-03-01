//
//  UIView+Gradient.h
//  boluomi
//
//  Created by 马涛 on 2018/8/7.
//  Copyright © 2018年 马涛. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  为view设置渐变色
 *  注意：在设置colors属性后原有的backgroundColor属性会失效，即不管backgroundColor设置什么颜色，都会显示渐变色，要显示正常的backgroundColor只需要将colors设置为nil
 *  最好不要在UILabel设置渐变色时使用，因为UIlabel貌似已经重写过+layerClass方法
 */
@interface UIView (Gradient)

@property(nullable, copy) NSArray *colors;
@property(nullable, copy) NSArray<NSNumber *> *locations;
@property CGPoint startPoint;
@property CGPoint endPoint;

+ (UIView *_Nullable)gradientViewWithColors:(NSArray<UIColor *> *_Nullable)colors locations:(NSArray<NSNumber *> *_Nullable)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

- (void)setGradientBackgroundWithColors:(NSArray<UIColor *> *_Nullable)colors locations:(NSArray<NSNumber *> *_Nullable)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

@end
