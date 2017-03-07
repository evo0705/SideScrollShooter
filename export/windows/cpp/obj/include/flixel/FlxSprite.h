#ifndef INCLUDED_flixel_FlxSprite
#define INCLUDED_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,_system,layer,Region)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxSprite_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.FlxSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSprite","\xf7","\xd5","\x84","\x45"); }

		::flixel::animation::FlxAnimationController animation;
		::openfl::_legacy::display::BitmapData framePixels;
		bool antialiasing;
		bool dirty;
		bool isColored;
		::flixel::_system::layer::frames::FlxFrame frame;
		int frameWidth;
		int frameHeight;
		int frames;
		::flixel::_system::layer::Region region;
		::flixel::_system::layer::frames::FlxSpriteFrames framesData;
		::flixel::util::loaders::CachedGraphics cachedGraphics;
		Float bakedRotationAngle;
		Float alpha;
		int facing;
		bool flipX;
		bool flipY;
		::flixel::util::FlxPoint origin;
		::flixel::util::FlxPoint offset;
		::flixel::util::FlxPoint scale;
		::openfl::_legacy::display::BlendMode blend;
		int color;
		::openfl::_legacy::geom::ColorTransform colorTransform;
		bool useColorTransform;
		Float _red;
		Float _green;
		Float _blue;
		int _facingHorizontalMult;
		int _facingVerticalMult;
		int _blendInt;
		::openfl::_legacy::geom::Point _flashPoint;
		::openfl::_legacy::geom::Rectangle _flashRect;
		::openfl::_legacy::geom::Rectangle _flashRect2;
		::openfl::_legacy::geom::Point _flashPointZero;
		::openfl::_legacy::geom::Matrix _matrix;
		Float _halfWidth;
		Float _halfHeight;
		Float _sinAngle;
		Float _cosAngle;
		bool _angleChanged;
		::haxe::ds::IntMap _facingFlip;
		virtual Void initVars( );

		virtual Void destroy( );

		virtual ::flixel::FlxSprite clone( ::flixel::FlxSprite NewSprite);
		Dynamic clone_dyn();

		virtual ::flixel::FlxSprite loadGraphicFromSprite( ::flixel::FlxSprite Sprite);
		Dynamic loadGraphicFromSprite_dyn();

		virtual ::flixel::FlxSprite loadGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);
		Dynamic loadGraphic_dyn();

		virtual ::flixel::FlxSprite loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  Rotations,hx::Null< int >  Frame,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer,::String Key);
		Dynamic loadRotatedGraphic_dyn();

		virtual ::flixel::FlxSprite loadGraphicFromTexture( Dynamic Data,hx::Null< bool >  Unique,::String FrameName);
		Dynamic loadGraphicFromTexture_dyn();

		virtual ::flixel::FlxSprite loadRotatedGraphicFromTexture( Dynamic Data,::String Image,hx::Null< int >  Rotations,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer);
		Dynamic loadRotatedGraphicFromTexture_dyn();

		virtual ::flixel::FlxSprite makeGraphic( int Width,int Height,hx::Null< int >  Color,hx::Null< bool >  Unique,::String Key);
		Dynamic makeGraphic_dyn();

		virtual Void resetSize( );
		Dynamic resetSize_dyn();

		virtual Void resetFrameSize( );
		Dynamic resetFrameSize_dyn();

		virtual Void resetSizeFromFrame( );
		Dynamic resetSizeFromFrame_dyn();

		virtual Void setGraphicSize( hx::Null< int >  Width,hx::Null< int >  Height);
		Dynamic setGraphicSize_dyn();

		virtual Void updateHitbox( );
		Dynamic updateHitbox_dyn();

		virtual Void resetHelpers( );
		Dynamic resetHelpers_dyn();

		virtual Void update( );

		virtual Void draw( );

		virtual Void stamp( ::flixel::FlxSprite Brush,hx::Null< int >  X,hx::Null< int >  Y);
		Dynamic stamp_dyn();

		virtual Void drawFrame( hx::Null< bool >  Force);
		Dynamic drawFrame_dyn();

		virtual Void centerOffsets( hx::Null< bool >  AdjustPosition);
		Dynamic centerOffsets_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual Array< ::Dynamic > replaceColor( int Color,int NewColor,hx::Null< bool >  FetchPositions);
		Dynamic replaceColor_dyn();

		virtual Void setColorTransform( hx::Null< Float >  redMultiplier,hx::Null< Float >  greenMultiplier,hx::Null< Float >  blueMultiplier,hx::Null< Float >  alphaMultiplier,hx::Null< Float >  redOffset,hx::Null< Float >  greenOffset,hx::Null< Float >  blueOffset,hx::Null< Float >  alphaOffset);
		Dynamic setColorTransform_dyn();

		virtual Void updateColorTransform( );
		Dynamic updateColorTransform_dyn();

		virtual bool pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  Mask,::flixel::FlxCamera Camera);
		Dynamic pixelsOverlapPoint_dyn();

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);
		Dynamic calcFrame_dyn();

		virtual Void updateFrameData( );
		Dynamic updateFrameData_dyn();

		virtual ::openfl::_legacy::display::BitmapData getFlxFrameBitmapData( );
		Dynamic getFlxFrameBitmapData_dyn();

		virtual ::flixel::util::FlxPoint getGraphicMidpoint( ::flixel::util::FlxPoint point);
		Dynamic getGraphicMidpoint_dyn();

		virtual Void resetFrameBitmapDatas( );
		Dynamic resetFrameBitmapDatas_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera Camera);

		virtual bool isSimpleRender( );
		Dynamic isSimpleRender_dyn();

		virtual Void setFacingFlip( int Direction,bool FlipX,bool FlipY);
		Dynamic setFacingFlip_dyn();

		virtual ::openfl::_legacy::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		virtual ::openfl::_legacy::display::BitmapData set_pixels( ::openfl::_legacy::display::BitmapData Pixels);
		Dynamic set_pixels_dyn();

		virtual ::flixel::_system::layer::frames::FlxFrame set_frame( ::flixel::_system::layer::frames::FlxFrame Value);
		Dynamic set_frame_dyn();

		virtual int set_facing( int Direction);
		Dynamic set_facing_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual Float set_angle( Float Value);

		virtual ::openfl::_legacy::display::BlendMode set_blend( ::openfl::_legacy::display::BlendMode Value);
		Dynamic set_blend_dyn();

		virtual ::flixel::util::loaders::CachedGraphics set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value);
		Dynamic set_cachedGraphics_dyn();

		virtual bool set_flipX( bool Value);
		Dynamic set_flipX_dyn();

		virtual bool set_flipY( bool Value);
		Dynamic set_flipY_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxSprite */ 
