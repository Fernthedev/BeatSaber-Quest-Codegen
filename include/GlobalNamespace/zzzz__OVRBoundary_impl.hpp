#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void GlobalNamespace::__OVRBoundary__Node::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRBoundary__Node::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRBoundary__Node::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRBoundary__Node::__OVRBoundary__Node(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRBoundary__Node  GlobalNamespace::__OVRBoundary__Node::HandLeft{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__OVRBoundary__Node  GlobalNamespace::__OVRBoundary__Node::HandRight{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__OVRBoundary__Node  GlobalNamespace::__OVRBoundary__Node::Head{static_cast<int32_t>(0x9)};
constexpr void GlobalNamespace::__OVRBoundary__BoundaryType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRBoundary__BoundaryType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRBoundary__BoundaryType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType::__OVRBoundary__BoundaryType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType  GlobalNamespace::__OVRBoundary__BoundaryType::OuterBoundary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType  GlobalNamespace::__OVRBoundary__BoundaryType::PlayArea{static_cast<int32_t>(0x100)};
constexpr void GlobalNamespace::__OVRBoundary__BoundaryTestResult::__set_IsTriggering(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_IsTriggering()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_IsTriggering() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRBoundary__BoundaryTestResult::__set_ClosestDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_ClosestDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_ClosestDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRBoundary__BoundaryTestResult::__set_ClosestPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_ClosestPoint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_ClosestPoint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRBoundary__BoundaryTestResult::__set_ClosestPointNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_ClosestPointNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__OVRBoundary__BoundaryTestResult::__get_ClosestPointNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestPointNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryTestResult::__OVRBoundary__BoundaryTestResult(bool  IsTriggering, float_t  ClosestDistance, ::UnityEngine::Vector3  ClosestPoint, ::UnityEngine::Vector3  ClosestPointNormal) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->IsTriggering = IsTriggering;
this->ClosestDistance = ClosestDistance;
this->ClosestPoint = ClosestPoint;
this->ClosestPointNormal = ClosestPointNormal;
}
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetConfigured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::GetConfigured)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x270d5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.TestNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRBoundary__BoundaryTestResult (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::__OVRBoundary__Node, ::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::TestNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2715c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "TestNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__Node>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.TestPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRBoundary__BoundaryTestResult (::GlobalNamespace::OVRBoundary::*)(::UnityEngine::Vector3, ::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::TestPoint)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2715d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "TestPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::GetGeometry)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x270d654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetDimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::GetDimensions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2715e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::GetVisible)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2715f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.SetVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRBoundary::*)(bool)>(&::GlobalNamespace::OVRBoundary::SetVisible)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2715ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "SetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2716090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedVector3fSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "cachedVector3fSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRBoundary::getStaticF_cachedVector3fSize()  {
return ::cordl_internals::getStaticField<int32_t, "cachedVector3fSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>();
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedGeometryNativeBuffer(::GlobalNamespace::OVRNativeBuffer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRNativeBuffer*, "cachedGeometryNativeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>(std::forward<::GlobalNamespace::OVRNativeBuffer*>(value));
}
inline ::GlobalNamespace::OVRNativeBuffer* GlobalNamespace::OVRBoundary::getStaticF_cachedGeometryNativeBuffer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRNativeBuffer*, "cachedGeometryNativeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>();
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedGeometryManagedBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t,::Array<float_t>*>, "cachedGeometryManagedBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>(std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t,::Array<float_t>*> GlobalNamespace::OVRBoundary::getStaticF_cachedGeometryManagedBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t,::Array<float_t>*>, "cachedGeometryManagedBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>();
}
constexpr void GlobalNamespace::OVRBoundary::__set_cachedGeometryList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::OVRBoundary::__get_cachedGeometryList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> GlobalNamespace::OVRBoundary::__get_cachedGeometryList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x10>(this);
}
inline bool GlobalNamespace::OVRBoundary::GetConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRBoundary__BoundaryTestResult GlobalNamespace::OVRBoundary::TestNode(::GlobalNamespace::__OVRBoundary__Node  node, ::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "TestNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__Node>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRBoundary__BoundaryTestResult, false>(*this, ___internal_method, node, boundaryType);
}
inline ::GlobalNamespace::__OVRBoundary__BoundaryTestResult GlobalNamespace::OVRBoundary::TestPoint(::UnityEngine::Vector3  point, ::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "TestPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRBoundary__BoundaryTestResult, false>(*this, ___internal_method, point, boundaryType);
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVRBoundary::GetGeometry(::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, false>(*this, ___internal_method, boundaryType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRBoundary::GetDimensions(::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, boundaryType);
}
inline bool GlobalNamespace::OVRBoundary::GetVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "GetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRBoundary::SetVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            "SetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRBoundary::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRBoundary*>());
}
inline void GlobalNamespace::OVRBoundary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
