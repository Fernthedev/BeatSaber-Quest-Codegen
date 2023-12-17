#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__CustomFormatRangeValuesSlider_def.hpp"
//  Writing Method size for method: ::HMUI::CustomFormatRangeValuesSlider.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::CustomFormatRangeValuesSlider::*)(float_t)>(&::HMUI::CustomFormatRangeValuesSlider::TextForValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21223d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CustomFormatRangeValuesSlider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CustomFormatRangeValuesSlider::*)()>(&::HMUI::CustomFormatRangeValuesSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2122448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::CustomFormatRangeValuesSlider::__set__formatString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x168>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HMUI::CustomFormatRangeValuesSlider::__get__formatString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x168>(this);
}
constexpr ::StringW const& HMUI::CustomFormatRangeValuesSlider::__get__formatString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x168>(this);
}
inline ::StringW HMUI::CustomFormatRangeValuesSlider::TextForValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, value);
}
inline ::HMUI::CustomFormatRangeValuesSlider* HMUI::CustomFormatRangeValuesSlider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::CustomFormatRangeValuesSlider*>());
}
inline void HMUI::CustomFormatRangeValuesSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CustomFormatRangeValuesSlider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
