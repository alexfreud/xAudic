/*  
 *  xAudic - an audio player for MacOS X
 *  Copyright (C) 1999-2001  Scott P. Bender (sbender@harmony-ds.com)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; see the file COPYING if not, write to 
 *  the Free Software Foundation, Inc., 59 Temple Place - Suite 330, 
 *  Boston, MA 02111-1307, USA.
*/
#import <AppKit/AppKit.h>

@interface MainWindow : NSWindow
{
  NSString *name;
}
- (id)initWithContentRect:(NSRect)contentRect 
		styleMask:(unsigned int)aStyle 
		  backing:(NSBackingStoreType)bufferingType 
		    defer:(BOOL)flag
		     name:(NSString *)name;

- (void)updateAlwaysOnTop;
- (NSString *)name;
- (void)saveFrame;

@end

@interface WAView : NSView

- (BOOL)isDockedTo:(WAView *)view;
- (BOOL)isDockedToBotton:(WAView *)view;
- (BOOL)isVisible;

@end
