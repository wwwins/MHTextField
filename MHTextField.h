//
//  MHTextField.h
//
//  Created by Mehfuz Hossain on 4/11/13.
//  Copyright (c) 2013 Mehfuz Hossain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MHTextField : UITextField

@property (nonatomic) BOOL required;
@property (nonatomic) BOOL isNeedScrollToTop;

@property (nonatomic, strong) UIToolbar *toolbar;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) NSString *dateFormat;
@property NSInteger maxYear;

@property (nonatomic, setter = setEmailField:) BOOL isEmailField;
@property (nonatomic, setter = setDateField:) BOOL isDateField;
@property (nonatomic, setter = setTimeField:) BOOL isTimeField;
@property (nonatomic, setter = setPhoneField:) BOOL isPhoneField;
@property (nonatomic, readonly) BOOL isValid;

- (BOOL) validate;
- (void) setDateFieldWithFormat:(NSString *)dateFormat;

/*
 Invoked when text field is disabled or input is invalid. Override to set your own tint or background color.
 */
- (void) setNeedsAppearance:(id)sender;

@end
