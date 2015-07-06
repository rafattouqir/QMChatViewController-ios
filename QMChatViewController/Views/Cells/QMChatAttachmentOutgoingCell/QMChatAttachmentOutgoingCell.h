//
//  QMChatAttachmentOutgoingCell.h
//  sample-chat-swift
//
//  Created by Injoit on 7/1/15.
//  Copyright (c) 2015 quickblox. All rights reserved.
//

#import "QMChatCell.h"
#import "QMChatAttachmentCell.h"

@interface QMChatAttachmentOutgoingCell : QMChatCell<QMChatAttachmentCell>

@property (nonatomic, weak) IBOutlet UIImageView *attachmentImageView;

@end