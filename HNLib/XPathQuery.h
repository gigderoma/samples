//
//  XPathQuery.m
//  HackerNews
//
//  Created by Cosmin Stejerean on 11/8/09
//  based on code by Matt Gallagher with the following license
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <Foundation/Foundation.h>

NSArray *PerformHTMLXPathQuery(NSData *document, NSString *query);
NSArray *PerformXMLXPathQuery(NSData *document, NSString *query);