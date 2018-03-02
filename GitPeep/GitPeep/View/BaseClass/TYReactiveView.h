//
//  TYReactiveView.h
//  GitPeep
//
//  Created by IGEN-TECH on 2018/2/26.
//  Copyright © 2018年 tianyao. All rights reserved.
//

@protocol TYReactiveView <NSObject>

@optional

/// Bind view model to view
- (void)bindViewModel:(id)viewModel;

/// Set model to cell
- (void)setModel:(id)model withIndexPath:(NSIndexPath *)indexPath;


@end
