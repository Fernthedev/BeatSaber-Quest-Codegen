#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void GlobalNamespace::__DynamicBoneColliderBase__Direction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DynamicBoneColliderBase__Direction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DynamicBoneColliderBase__Direction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction::__DynamicBoneColliderBase__Direction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction  GlobalNamespace::__DynamicBoneColliderBase__Direction::X{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction  GlobalNamespace::__DynamicBoneColliderBase__Direction::Y{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction  GlobalNamespace::__DynamicBoneColliderBase__Direction::Z{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__DynamicBoneColliderBase__Bound::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DynamicBoneColliderBase__Bound::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DynamicBoneColliderBase__Bound::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound::__DynamicBoneColliderBase__Bound(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound  GlobalNamespace::__DynamicBoneColliderBase__Bound::Outside{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound  GlobalNamespace::__DynamicBoneColliderBase__Bound::Inside{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::DynamicBoneColliderBase.Collide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBoneColliderBase::*)(ByRef<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::DynamicBoneColliderBase::Collide)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12308e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBoneColliderBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBoneColliderBase::*)()>(&::GlobalNamespace::DynamicBoneColliderBase::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1230880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DynamicBoneColliderBase::__set_m_Direction(::GlobalNamespace::__DynamicBoneColliderBase__Direction  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__DynamicBoneColliderBase__Direction, 0x18>(this, std::forward<::GlobalNamespace::__DynamicBoneColliderBase__Direction>(value));
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction& GlobalNamespace::DynamicBoneColliderBase::__get_m_Direction()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBoneColliderBase__Direction, 0x18>(this);
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction const& GlobalNamespace::DynamicBoneColliderBase::__get_m_Direction() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBoneColliderBase__Direction, 0x18>(this);
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__set_m_Center(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x1c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBoneColliderBase::__get_m_Center()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBoneColliderBase::__get_m_Center() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x1c>(this);
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__set_m_Bound(::GlobalNamespace::__DynamicBoneColliderBase__Bound  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__DynamicBoneColliderBase__Bound, 0x28>(this, std::forward<::GlobalNamespace::__DynamicBoneColliderBase__Bound>(value));
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound& GlobalNamespace::DynamicBoneColliderBase::__get_m_Bound()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBoneColliderBase__Bound, 0x28>(this);
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound const& GlobalNamespace::DynamicBoneColliderBase::__get_m_Bound() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DynamicBoneColliderBase__Bound, 0x28>(this);
}
inline void GlobalNamespace::DynamicBoneColliderBase::Collide(ByRef<::UnityEngine::Vector3>  particlePosition, float_t  particleRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(),
                            "Collide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, particlePosition, particleRadius);
}
inline ::GlobalNamespace::DynamicBoneColliderBase* GlobalNamespace::DynamicBoneColliderBase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DynamicBoneColliderBase*>());
}
inline void GlobalNamespace::DynamicBoneColliderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
