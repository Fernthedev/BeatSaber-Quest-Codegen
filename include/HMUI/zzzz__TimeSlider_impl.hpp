#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
constexpr void HMUI::__TimeSlider__TimeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__TimeSlider__TimeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__TimeSlider__TimeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__TimeSlider__TimeType::__TimeSlider__TimeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__TimeSlider__TimeType  HMUI::__TimeSlider__TimeType::Default{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__TimeSlider__TimeType  HMUI::__TimeSlider__TimeType::Miliseconds{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::HMUI::TimeSlider.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::TimeSlider::*)(float_t)>(&::HMUI::TimeSlider::TextForValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2124180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TimeSlider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TimeSlider::*)()>(&::HMUI::TimeSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21243d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::TimeSlider::__set__timeType(::HMUI::__TimeSlider__TimeType  value)  {
::cordl_internals::setInstanceField<::HMUI::__TimeSlider__TimeType, 0x168>(this, std::forward<::HMUI::__TimeSlider__TimeType>(value));
}
constexpr ::HMUI::__TimeSlider__TimeType& HMUI::TimeSlider::__get__timeType()  {
return ::cordl_internals::getInstanceField<::HMUI::__TimeSlider__TimeType, 0x168>(this);
}
constexpr ::HMUI::__TimeSlider__TimeType const& HMUI::TimeSlider::__get__timeType() const {
return ::cordl_internals::getInstanceField<::HMUI::__TimeSlider__TimeType, 0x168>(this);
}
inline ::StringW HMUI::TimeSlider::TextForValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, value);
}
inline ::HMUI::TimeSlider* HMUI::TimeSlider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::TimeSlider*>());
}
inline void HMUI::TimeSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TimeSlider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
