//
//  RNQuickLookView.h
//  RNToolkit
//
//  Created by 罗绪海 on 2022/4/7.
//

#import <UIKit/UIKit.h>

@interface RNQuickLookView : UIView {
    NSString* _url;
}

- (id)initWithPreviewItemUrl:(NSString*)url;

@end
