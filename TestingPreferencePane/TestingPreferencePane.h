//
//  TestingPreferencePane.h
//  TestingPreferencePane
//
//  Created by HAYDEN WILLIAMS on 10/13/23.
//

#import <PreferencePanes/NSPreferencePane.h>

@interface TestingPreferencePane : NSPreferencePane

@property (nonatomic, strong) IBOutlet NSView *myPreferenceView;
@property (nonatomic, strong) IBOutlet NSButton *myButton;

@end
