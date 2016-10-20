//
//  WrappedController.h
//  IIViewDeck
//
//  Copyright (C) 2011-2016, ViewDeck
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//  of the Software, and to permit persons to whom the Software is furnished to do
//  so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <UIKit/UIKit.h>


__deprecated_msg("This class isn't used anymore and will be removed in a future version.")
@interface IIWrapController : UIViewController

@property (nonatomic, readonly, retain) UIViewController* wrappedController;
@property (nonatomic, copy) void(^onViewDidLoad)(IIWrapController* controller);
@property (nonatomic, copy) void(^onViewWillAppear)(IIWrapController* controller, BOOL animated);
@property (nonatomic, copy) void(^onViewDidAppear)(IIWrapController* controller, BOOL animated);
@property (nonatomic, copy) void(^onViewWillDisappear)(IIWrapController* controller, BOOL animated);
@property (nonatomic, copy) void(^onViewDidDisappear)(IIWrapController* controller, BOOL animated);

- (id)initWithViewController:(UIViewController*)controller;

@end


#pragma clang diagnostics push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

// category on WrappedController to provide access to the viewDeckController in the
// contained viewcontrollers, a la UINavigationController.
@interface UIViewController (WrapControllerItem) 

@property(nonatomic,readonly,assign) IIWrapController *wrapController; 

@end

#pragma clang diagnostics pop