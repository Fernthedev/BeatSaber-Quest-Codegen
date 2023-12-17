#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
constexpr void UnityEngine::UIElements::StyleSheets::__Dimension__Unit::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::__Dimension__Unit::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::__Dimension__Unit::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit::__Dimension__Unit(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Unitless{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Pixel{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Percent{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Second{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Millisecond{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Degree{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Gradian{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Radian{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  UnityEngine::UIElements::StyleSheets::__Dimension__Unit::Turn{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Dimension::*)(float_t, ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit)>(&::UnityEngine::UIElements::StyleSheets::Dimension::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2dea320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::ToLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2de68c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TimeValue (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::ToTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2de68f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Angle (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::ToAngle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2de959c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Dimension, ::UnityEngine::UIElements::StyleSheets::Dimension)>(&::UnityEngine::UIElements::StyleSheets::Dimension::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2dea32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Dimension>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Dimension>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::Dimension::*)(::UnityEngine::UIElements::StyleSheets::Dimension)>(&::UnityEngine::UIElements::StyleSheets::Dimension::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2dea354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Dimension>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::Dimension::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleSheets::Dimension::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2dea37c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dea408;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2de5cf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
constexpr  UnityEngine::UIElements::StyleSheets::Dimension::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::UIElements::StyleSheets::Dimension::__set_unit(::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit& UnityEngine::UIElements::StyleSheets::Dimension::__get_unit()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const& UnityEngine::UIElements::StyleSheets::Dimension::__get_unit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::Dimension::__set_value(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::StyleSheets::Dimension::__get_value()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::UIElements::StyleSheets::Dimension::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::UIElements::StyleSheets::Dimension::_ctor(float_t  value, ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  unit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, unit);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::Dimension::ToLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimeValue UnityEngine::UIElements::StyleSheets::Dimension::ToTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeValue, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::StyleSheets::Dimension::ToAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::Dimension::op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension  lhs, ::UnityEngine::UIElements::StyleSheets::Dimension  rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Dimension>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Dimension>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::StyleSheets::Dimension::Equals(::UnityEngine::UIElements::StyleSheets::Dimension  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Dimension>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleSheets::Dimension::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleSheets::Dimension::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleSheets::Dimension::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Dimension>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "unit", ty: "::UnityEngine::UIElements::StyleSheets::__Dimension__Unit", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension::Dimension(::UnityEngine::UIElements::StyleSheets::__Dimension__Unit  unit, float_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->unit = unit;
this->value = value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
