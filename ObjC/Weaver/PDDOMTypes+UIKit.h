//
//  PDDOMTypes+UIKit.h
//  Texture
//
//  Copyright (c) 2017-present, Pinterest, Inc.  All rights reserved.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//

#import <UIKit/UIKit.h>
#import <Weaver/PDDOMTypes.h>

@interface NSDictionary (PDDOMRGBA)

- (UIColor *)UIColor;

@end

@interface NSDictionary (PDDOMHighlightConfig)

- (UIColor *)contentUIColor;

- (UIColor *)paddingUIColor;

- (UIColor *)borderUIColor;

- (UIColor *)marginUIColor;

@end
