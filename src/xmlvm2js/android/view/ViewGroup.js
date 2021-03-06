/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

qx.Class.define("android_view_ViewGroup", {
  extend: android_view_View,
  construct: function() {
  	this.base(arguments);
    this.qx = new qx.ui.container.Composite(new qx.ui.layout.Basic());
    // TODO: How can we make this composite to enlarge itself?
    if (android_view_Display.orientation == 0 /* SCREEN_ORIENTATION_LANDSCAPE */) {
    	this.qx.setUserBounds(0, 0, 480, 320);
    } else {
        this.qx.setUserBounds(0, 0, 320, 480);
    }
    this.qx.set({allowGrowX: true, allowGrowY: true,
      allowShrinkX: true, allowShrinkY: true,
      margin: 0});
    this.subviews = new Array();
  },
  members: {
	  subviews: 0,
	  $$init____android_content_Context: function(context) {
      },
      $addView___android_view_View: function(view) {
        this.qx.add(view.getQX(), {});
        this.subviews[this.subviews.length] = view;
      },
      $addView___android_view_View_android_view_ViewGroup$LayoutParams: function(view, params) {
        this.qx.add(view.getQX(), {});
        view.$setLayoutParams___android_view_ViewGroup$LayoutParams(params);
        this.subviews[this.subviews.length] = view;
      },
      $addView___android_view_View_int: function(view, index) {
	      //this.qx.addAt(view.getQX(), qxIndex, {});
	      this.qx.add(view.getQX(), {});
    	  var qxIndex = -(this.qx.getChildren().length - index);
    	  view.getQX().setZIndex(qxIndex);
          this.subviews[this.subviews.length] = view;
	  },
      $removeView___android_view_View: function(view) {
	      this.qx.remove(view.getQX());
	      // TODO need to remove view from this.subviews
	  },
	  $removeAllViews: function() {
		  this.qx.removeAll();
          this.subviews = new Array();
	  },
	  $findViewById___int: function(id) {
//	      for (var v in this.subviews) {
//	    	  if (v.id != undefined && v.id == id) {
//	    		  return v;
//	    	  }
//	      }
		  for (var i = 0; i < this.subviews.length; i++) {
			  var view = this.subviews[i];
			  if (view.id != undefined && view.id == id) {
				  return view;
			  }
		  }
	      return java_lang_null;
	  }
  }
});