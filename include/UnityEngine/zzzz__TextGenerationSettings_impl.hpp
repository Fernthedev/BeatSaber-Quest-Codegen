#pragma once
#include "UnityEngine/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.CompareColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::UnityEngine::TextGenerationSettings::CompareColors)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2d4dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(),
                            "CompareColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.CompareVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::TextGenerationSettings::CompareVector2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d4dbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(),
                            "CompareVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerationSettings.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextGenerationSettings::*)(::UnityEngine::TextGenerationSettings)>(&::UnityEngine::TextGenerationSettings::Equals)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2d4dcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerationSettings>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextGenerationSettings::__set_font(::UnityEngine::Font*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Font*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Font*>(value));
}
constexpr ::UnityEngine::Font* UnityEngine::TextGenerationSettings::__get_font()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Font*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> UnityEngine::TextGenerationSettings::__get_font() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Font*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::TextGenerationSettings::__get_color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& UnityEngine::TextGenerationSettings::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_fontSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextGenerationSettings::__get_fontSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextGenerationSettings::__get_fontSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_lineSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextGenerationSettings::__get_lineSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::TextGenerationSettings::__get_lineSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_richText(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextGenerationSettings::__get_richText()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::TextGenerationSettings::__get_richText() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_scaleFactor(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::TextGenerationSettings::__get_scaleFactor()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::TextGenerationSettings::__get_scaleFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_fontStyle(::UnityEngine::FontStyle  value)  {
::cordl_internals::setInstanceField<::UnityEngine::FontStyle, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::FontStyle>(value));
}
constexpr ::UnityEngine::FontStyle& UnityEngine::TextGenerationSettings::__get_fontStyle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::FontStyle, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::FontStyle const& UnityEngine::TextGenerationSettings::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::FontStyle, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_textAnchor(::UnityEngine::TextAnchor  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextAnchor, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextAnchor>(value));
}
constexpr ::UnityEngine::TextAnchor& UnityEngine::TextGenerationSettings::__get_textAnchor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAnchor, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::TextAnchor const& UnityEngine::TextGenerationSettings::__get_textAnchor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAnchor, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_alignByGeometry(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextGenerationSettings::__get_alignByGeometry()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::TextGenerationSettings::__get_alignByGeometry() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_resizeTextForBestFit(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextGenerationSettings::__get_resizeTextForBestFit()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::TextGenerationSettings::__get_resizeTextForBestFit() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_resizeTextMinSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextGenerationSettings::__get_resizeTextMinSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextGenerationSettings::__get_resizeTextMinSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_resizeTextMaxSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextGenerationSettings::__get_resizeTextMaxSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextGenerationSettings::__get_resizeTextMaxSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_updateBounds(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextGenerationSettings::__get_updateBounds()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::TextGenerationSettings::__get_updateBounds() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_verticalOverflow(::UnityEngine::VerticalWrapMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::VerticalWrapMode, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::VerticalWrapMode>(value));
}
constexpr ::UnityEngine::VerticalWrapMode& UnityEngine::TextGenerationSettings::__get_verticalOverflow()  {
return ::cordl_internals::getInstanceField<::UnityEngine::VerticalWrapMode, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::VerticalWrapMode const& UnityEngine::TextGenerationSettings::__get_verticalOverflow() const {
return ::cordl_internals::getInstanceField<::UnityEngine::VerticalWrapMode, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_horizontalOverflow(::UnityEngine::HorizontalWrapMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::HorizontalWrapMode, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::HorizontalWrapMode>(value));
}
constexpr ::UnityEngine::HorizontalWrapMode& UnityEngine::TextGenerationSettings::__get_horizontalOverflow()  {
return ::cordl_internals::getInstanceField<::UnityEngine::HorizontalWrapMode, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::HorizontalWrapMode const& UnityEngine::TextGenerationSettings::__get_horizontalOverflow() const {
return ::cordl_internals::getInstanceField<::UnityEngine::HorizontalWrapMode, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_generationExtents(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextGenerationSettings::__get_generationExtents()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextGenerationSettings::__get_generationExtents() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_pivot(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextGenerationSettings::__get_pivot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextGenerationSettings::__get_pivot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextGenerationSettings::__set_generateOutOfBounds(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::TextGenerationSettings::__get_generateOutOfBounds()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::TextGenerationSettings::__get_generateOutOfBounds() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool UnityEngine::TextGenerationSettings::CompareColors(::UnityEngine::Color  left, ::UnityEngine::Color  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(),
                            "CompareColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, left, right);
}
inline bool UnityEngine::TextGenerationSettings::CompareVector2(::UnityEngine::Vector2  left, ::UnityEngine::Vector2  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(),
                            "CompareVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, left, right);
}
inline bool UnityEngine::TextGenerationSettings::Equals(::UnityEngine::TextGenerationSettings  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextGenerationSettings>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerationSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "textAnchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "alignByGeometry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "resizeTextForBestFit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "resizeTextMinSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resizeTextMaxSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "updateBounds", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "verticalOverflow", ty: "::UnityEngine::VerticalWrapMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "horizontalOverflow", ty: "::UnityEngine::HorizontalWrapMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "generationExtents", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "generateOutOfBounds", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextGenerationSettings::TextGenerationSettings(::UnityEngine::Font*  font, ::UnityEngine::Color  color, int32_t  fontSize, float_t  lineSpacing, bool  richText, float_t  scaleFactor, ::UnityEngine::FontStyle  fontStyle, ::UnityEngine::TextAnchor  textAnchor, bool  alignByGeometry, bool  resizeTextForBestFit, int32_t  resizeTextMinSize, int32_t  resizeTextMaxSize, bool  updateBounds, ::UnityEngine::VerticalWrapMode  verticalOverflow, ::UnityEngine::HorizontalWrapMode  horizontalOverflow, ::UnityEngine::Vector2  generationExtents, ::UnityEngine::Vector2  pivot, bool  generateOutOfBounds) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->font = font;
this->color = color;
this->fontSize = fontSize;
this->lineSpacing = lineSpacing;
this->richText = richText;
this->scaleFactor = scaleFactor;
this->fontStyle = fontStyle;
this->textAnchor = textAnchor;
this->alignByGeometry = alignByGeometry;
this->resizeTextForBestFit = resizeTextForBestFit;
this->resizeTextMinSize = resizeTextMinSize;
this->resizeTextMaxSize = resizeTextMaxSize;
this->updateBounds = updateBounds;
this->verticalOverflow = verticalOverflow;
this->horizontalOverflow = horizontalOverflow;
this->generationExtents = generationExtents;
this->pivot = pivot;
this->generateOutOfBounds = generateOutOfBounds;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
