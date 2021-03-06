package org.xmlvm.ios;
import java.util.*;

import org.xmlvm.XMLVMSkeletonOnly;
@XMLVMSkeletonOnly
public class UIBarButtonItem extends UIBarItem {

	/*
	 * Constructors
	 */

	/**
	 * - (id)initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action;
	 */
	public UIBarButtonItem(UIImage arg0, int arg1, UIBarButtonItemDelegate arg2) {}

	/**
	 * - (id)initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action;
	 */
	public UIBarButtonItem(String arg0, int arg1, UIBarButtonItemDelegate arg2) {}

	/**
	 * - (id)initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem target:(id)target action:(SEL)action;
	 */
	public UIBarButtonItem(int arg0, UIBarButtonItemDelegate arg1) {}

	/**
	 * - (id)initWithCustomView:(UIView *)customView;
	 */
	public UIBarButtonItem(UIView customView) {}

	/** Default constructor */
	public UIBarButtonItem() {
		super();
	}

	/*
	 * Properties
	 */

	/**
	 * @property(nonatomic) UIBarButtonItemStyle style;
	 */
	public int getStyle(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) UIBarButtonItemStyle style;
	 */
	public void setStyle(int style){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) CGFloat width;
	 */
	public float getWidth(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) CGFloat width;
	 */
	public void setWidth(float width){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic,copy) NSSet *possibleTitles;
	 */
	public Set getPossibleTitles(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic,copy) NSSet *possibleTitles;
	 */
	public void setPossibleTitles(Set possibleTitles){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic,retain) UIView *customView;
	 */
	public UIView getCustomView(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic,retain) UIView *customView;
	 */
	public void setCustomView(UIView customView){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) SEL action;
	 */
	public SEL getAction(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic) SEL action;
	 */
	public void setAction(SEL action){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic,assign) id target;
	 */
	public Object getTarget(){
		throw new RuntimeException("Stub");
	}

	/**
	 * @property(nonatomic,assign) id target;
	 */
	public void setTarget(Object target){
		throw new RuntimeException("Stub");
	}
}
