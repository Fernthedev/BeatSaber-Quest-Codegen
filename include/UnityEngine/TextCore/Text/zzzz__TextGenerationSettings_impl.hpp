#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextureMapping_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexSortingOrder_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&::UnityEngine::TextCore::Text::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2d40874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerationSettings::*)(::System::Object*)>(&::UnityEngine::TextCore::Text::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d40c28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(&::UnityEngine::TextCore::Text::TextGenerationSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x2d40cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerationSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerationSettings::*)()>(&::UnityEngine::TextCore::Text::TextGenerationSettings::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d4125c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextGenerationSettings::__get_text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_screenRect(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x18>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& UnityEngine::TextCore::Text::TextGenerationSettings::__get_screenRect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x18>(this);
}
constexpr ::UnityEngine::Rect const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_screenRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x18>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_margins(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x28>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& UnityEngine::TextCore::Text::TextGenerationSettings::__get_margins()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x28>(this);
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_margins() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x28>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_scale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_scale()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontAsset(::UnityEngine::TextCore::Text::FontAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x40>(this, std::forward<::UnityEngine::TextCore::Text::FontAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x40>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x48>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::TextCore::Text::TextGenerationSettings::__get_material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::TextCore::Text::TextGenerationSettings::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x48>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_spriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0x50>(this, std::forward<::UnityEngine::TextCore::Text::SpriteAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::SpriteAsset* UnityEngine::TextCore::Text::TextGenerationSettings::__get_spriteAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> UnityEngine::TextCore::Text::TextGenerationSettings::__get_spriteAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset*, 0x50>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_styleSheet(::UnityEngine::TextCore::Text::TextStyleSheet*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextStyleSheet*, 0x58>(this, std::forward<::UnityEngine::TextCore::Text::TextStyleSheet*>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextStyleSheet* UnityEngine::TextCore::Text::TextGenerationSettings::__get_styleSheet()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextStyleSheet*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextStyleSheet*> UnityEngine::TextCore::Text::TextGenerationSettings::__get_styleSheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextStyleSheet*, 0x58>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontStyle(::UnityEngine::TextCore::Text::FontStyles  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0x60>(this, std::forward<::UnityEngine::TextCore::Text::FontStyles>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontStyles& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontStyle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0x60>(this);
}
constexpr ::UnityEngine::TextCore::Text::FontStyles const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0x60>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_textSettings(::UnityEngine::TextCore::Text::TextSettings*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextSettings*, 0x68>(this, std::forward<::UnityEngine::TextCore::Text::TextSettings*>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextSettings* UnityEngine::TextCore::Text::TextGenerationSettings::__get_textSettings()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextSettings*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextSettings*> UnityEngine::TextCore::Text::TextGenerationSettings::__get_textSettings() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextSettings*, 0x68>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_textAlignment(::UnityEngine::TextCore::Text::TextAlignment  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x70>(this, std::forward<::UnityEngine::TextCore::Text::TextAlignment>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment& UnityEngine::TextCore::Text::TextGenerationSettings::__get_textAlignment()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x70>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_textAlignment() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x70>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_overflowMode(::UnityEngine::TextCore::Text::TextOverflowMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextOverflowMode, 0x74>(this, std::forward<::UnityEngine::TextCore::Text::TextOverflowMode>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode& UnityEngine::TextCore::Text::TextGenerationSettings::__get_overflowMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextOverflowMode, 0x74>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextOverflowMode const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_overflowMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextOverflowMode, 0x74>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_wordWrap(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_wordWrap()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_wordWrap() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_wordWrappingRatio(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_wordWrappingRatio()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_wordWrappingRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x80>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::Text::TextGenerationSettings::__get_color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x80>(this);
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x80>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontColorGradient(::UnityEngine::TextCore::Text::TextColorGradient*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextColorGradient*, 0x90>(this, std::forward<::UnityEngine::TextCore::Text::TextColorGradient*>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextColorGradient* UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontColorGradient()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextColorGradient*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextColorGradient*> UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontColorGradient() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextColorGradient*, 0x90>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_tintSprites(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_tintSprites()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_tintSprites() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_overrideRichTextColors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x99>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_overrideRichTextColors()  {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_overrideRichTextColors() const {
return ::cordl_internals::getInstanceField<bool, 0x99>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_autoSize(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_autoSize()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_autoSize() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontSizeMin(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa4>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontSizeMin()  {
return ::cordl_internals::getInstanceField<float_t, 0xa4>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontSizeMin() const {
return ::cordl_internals::getInstanceField<float_t, 0xa4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontSizeMax(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontSizeMax()  {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontSizeMax() const {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_enableKerning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xac>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_enableKerning()  {
return ::cordl_internals::getInstanceField<bool, 0xac>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_enableKerning() const {
return ::cordl_internals::getInstanceField<bool, 0xac>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_richText(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xad>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_richText()  {
return ::cordl_internals::getInstanceField<bool, 0xad>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_richText() const {
return ::cordl_internals::getInstanceField<bool, 0xad>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_isRightToLeft(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xae>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_isRightToLeft()  {
return ::cordl_internals::getInstanceField<bool, 0xae>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_isRightToLeft() const {
return ::cordl_internals::getInstanceField<bool, 0xae>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_extraPadding(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xaf>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_extraPadding()  {
return ::cordl_internals::getInstanceField<bool, 0xaf>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_extraPadding() const {
return ::cordl_internals::getInstanceField<bool, 0xaf>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_parseControlCharacters(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_parseControlCharacters()  {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_parseControlCharacters() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_characterSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_characterSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_characterSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_wordSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_wordSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_wordSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_lineSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_lineSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_lineSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_paragraphSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_paragraphSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_paragraphSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_lineSpacingMax(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc4>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_lineSpacingMax()  {
return ::cordl_internals::getInstanceField<float_t, 0xc4>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_lineSpacingMax() const {
return ::cordl_internals::getInstanceField<float_t, 0xc4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_maxVisibleCharacters(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_maxVisibleCharacters()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_maxVisibleCharacters() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_maxVisibleWords(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_maxVisibleWords()  {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_maxVisibleWords() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_maxVisibleLines(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_maxVisibleLines()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_maxVisibleLines() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_firstVisibleCharacter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_firstVisibleCharacter()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_firstVisibleCharacter() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_useMaxVisibleDescender(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_useMaxVisibleDescender()  {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_useMaxVisibleDescender() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_fontWeight(::UnityEngine::TextCore::Text::TextFontWeight  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xdc>(this, std::forward<::UnityEngine::TextCore::Text::TextFontWeight>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontWeight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xdc>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_fontWeight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xdc>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_pageToDisplay(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xe0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_pageToDisplay()  {
return ::cordl_internals::getInstanceField<int32_t, 0xe0>(this);
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_pageToDisplay() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_horizontalMapping(::UnityEngine::TextCore::Text::TextureMapping  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextureMapping, 0xe4>(this, std::forward<::UnityEngine::TextCore::Text::TextureMapping>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping& UnityEngine::TextCore::Text::TextGenerationSettings::__get_horizontalMapping()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextureMapping, 0xe4>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_horizontalMapping() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextureMapping, 0xe4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_verticalMapping(::UnityEngine::TextCore::Text::TextureMapping  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextureMapping, 0xe8>(this, std::forward<::UnityEngine::TextCore::Text::TextureMapping>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping& UnityEngine::TextCore::Text::TextGenerationSettings::__get_verticalMapping()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextureMapping, 0xe8>(this);
}
constexpr ::UnityEngine::TextCore::Text::TextureMapping const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_verticalMapping() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextureMapping, 0xe8>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_uvLineOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xec>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_uvLineOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0xec>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_uvLineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0xec>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_geometrySortingOrder(::UnityEngine::TextCore::Text::VertexSortingOrder  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::VertexSortingOrder, 0xf0>(this, std::forward<::UnityEngine::TextCore::Text::VertexSortingOrder>(value));
}
constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder& UnityEngine::TextCore::Text::TextGenerationSettings::__get_geometrySortingOrder()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::VertexSortingOrder, 0xf0>(this);
}
constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_geometrySortingOrder() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::VertexSortingOrder, 0xf0>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_inverseYAxis(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf4>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerationSettings::__get_inverseYAxis()  {
return ::cordl_internals::getInstanceField<bool, 0xf4>(this);
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_inverseYAxis() const {
return ::cordl_internals::getInstanceField<bool, 0xf4>(this);
}
constexpr void UnityEngine::TextCore::Text::TextGenerationSettings::__set_charWidthMaxAdj(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xf8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerationSettings::__get_charWidthMaxAdj()  {
return ::cordl_internals::getInstanceField<float_t, 0xf8>(this);
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerationSettings::__get_charWidthMaxAdj() const {
return ::cordl_internals::getInstanceField<float_t, 0xf8>(this);
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::Equals(::UnityEngine::TextCore::Text::TextGenerationSettings*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool UnityEngine::TextCore::Text::TextGenerationSettings::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::TextCore::Text::TextGenerationSettings::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* UnityEngine::TextCore::Text::TextGenerationSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::TextGenerationSettings*>());
}
inline void UnityEngine::TextCore::Text::TextGenerationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
