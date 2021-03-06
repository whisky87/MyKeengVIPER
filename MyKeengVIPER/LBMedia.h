//
//  Media.h
//  MyKeeng
//
//  Created by Le Van Binh on 7/12/16.
//  Copyright © 2016 LB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/MTLModel.h>
#import <Mantle/MTLJSONAdapter.h>
#import "LBPhoto.h"




@interface LBMedia :MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) LBPhoto * image;
@property (nonatomic, retain) LBPhoto * image310;
@property (nonatomic, retain) NSNumber * listen_no;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * singer;
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSNumber * item_type;
@property (nonatomic, retain) NSNumber *price;
@property (nonatomic, retain) NSDate *fetch_datetime;



@end
