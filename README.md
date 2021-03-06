#MHTextField  [![Build Status](https://travis-ci.org/mehfuzh/MHTextField.png?branch=master)](https://travis-ci.org/mehfuzh/MHTextField)
MHTextField is an iOS drop-in class that extends UITextField  with built-in toolbar, validation and scrolling support.

[![](https://raw.github.com/mehfuzh/MHTextField/gh-pages/demo.gif)](https://raw.github.com/mehfuzh/MHTextField/gh-pages/demo.gif)


##Requirements
MHTextField works on iOS 5 and above and is compatible with ARC projects. It depends on the following Apple frameworks:

* Foundation.framework
* UIKit.framework

##Including MHTextField to your project

### Source files

You can directly add the `MHTextField.h` and `MHTextField.m` source files to your project.

1. Download the latest zip from github or clone the source in your desired directory.
2. Open your project in Xcode, then drag and drop `MHTextField.h` and `MHTextField.m` onto your project (use the "Product Navigator view"). Make sure to select Copy items when asked if you extracted the code archive outside of your project. 
3. Include MHTextField with `#import "MHTextField.h"`.


### Cocoapods
[CocoaPods](http://cocoapods.org) is the recommended way to add MHTextField to your project.

1. Add a pod entry for MHTextField to your Podfile `pod 'MHTextField', '~> 0.5'`
2. Install the pod(s) by running `pod install`.
3. Include MHTextField with `#import "MHTextField.h"`.

### Usage
```
[self.textFieldForEmail setRequired:YES];
[self.textFieldForEmail setEmailField:YES];
[self.textFieldForEmail setScrollView:_scrollView];

[self.textFieldForDate setRequired:YES];
[self.textFieldForDate setDateField:YES];
[self.textFieldForDate setDateFieldWithFormat:@"yyyy/MM/dd"];
[self.textFieldForDate setScrollView:_scrollView];

// maximum year for age limits.(>21)
self.textFieldForDate.maxYear = 21;

[self.textFieldForSection setRequired:YES];
[self.textFieldForSection setInputView:_pickerView];
[self.textFieldForSection setScrollView:_scrollView];
```

## License

This code is distributed under the terms and conditions of the [MIT license](LICENSE). 
