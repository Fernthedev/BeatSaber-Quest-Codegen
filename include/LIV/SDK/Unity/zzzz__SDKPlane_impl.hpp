#pragma once
#include "LIV/SDK/Unity/zzzz__SDKPlane_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.op_Implicit___LIV__SDK__Unity__SDKPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPlane (*)(::UnityEngine::Plane)>(&::LIV::SDK::Unity::SDKPlane::op_Implicit___LIV__SDK__Unity__SDKPlane)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2214c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPlane (*)()>(&::LIV::SDK::Unity::SDKPlane::get_empty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2214ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPlane.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKPlane::*)()>(&::LIV::SDK::Unity::SDKPlane::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2214cb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void LIV::SDK::Unity::SDKPlane::__set_distance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& LIV::SDK::Unity::SDKPlane::__get_distance()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& LIV::SDK::Unity::SDKPlane::__get_distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LIV::SDK::Unity::SDKPlane::__set_normal(::LIV::SDK::Unity::SDKVector3  value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3& LIV::SDK::Unity::SDKPlane::__get_normal()  {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::LIV::SDK::Unity::SDKVector3 const& LIV::SDK::Unity::SDKPlane::__get_normal() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::LIV::SDK::Unity::SDKPlane LIV::SDK::Unity::SDKPlane::op_Implicit___LIV__SDK__Unity__SDKPlane(::UnityEngine::Plane  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPlane, false>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKPlane LIV::SDK::Unity::SDKPlane::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPlane, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKPlane::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPlane>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normal", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPlane::SDKPlane(float_t  distance, ::LIV::SDK::Unity::SDKVector3  normal) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->distance = distance;
this->normal = normal;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
