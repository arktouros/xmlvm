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

qx.Class.define("android_widget_LinearLayout", {
  extend: android_view_ViewGroup,
  construct: function() {
    this.base(arguments);
    this.qx = new qx.ui.container.Composite(new qx.ui.layout.VBox());
    this.qx.set({allowGrowX: true, allowGrowY: true,
        allowShrinkX: true, allowShrinkY: true,
        margin: 0});
  },
  members: {
    $$init____android_content_Context: function(context) {
    },
    $setOrientation___int : function(orientation) {
    	// TODO
    }
  }
});
