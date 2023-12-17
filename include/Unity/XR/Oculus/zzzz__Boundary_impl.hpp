#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
constexpr void Unity::XR::Oculus::__Boundary__BoundaryType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::XR::Oculus::__Boundary__BoundaryType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::XR::Oculus::__Boundary__BoundaryType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType::__Boundary__BoundaryType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType  Unity::XR::Oculus::__Boundary__BoundaryType::OuterBoundary{static_cast<int32_t>(0x0)};
constexpr ::Unity::XR::Oculus::__Boundary__BoundaryType  Unity::XR::Oculus::__Boundary__BoundaryType::PlayArea{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.GetBoundaryConfigured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Boundary::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c77640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "GetBoundaryConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.GetBoundaryDimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::__Boundary__BoundaryType, ByRef<::UnityEngine::Vector3>)>(&::Unity::XR::Oculus::Boundary::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c77648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "GetBoundaryDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.GetBoundaryVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Boundary::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c77650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "GetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Boundary.SetBoundaryVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Boundary::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c77658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "SetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
inline bool Unity::XR::Oculus::Boundary::GetBoundaryConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "GetBoundaryConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::Boundary::GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType  boundaryType, ByRef<::UnityEngine::Vector3>  dimensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "GetBoundaryDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
inline bool Unity::XR::Oculus::Boundary::GetBoundaryVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "GetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Boundary::SetBoundaryVisible(bool  boundaryVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Boundary*>::get(),
                            "SetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
