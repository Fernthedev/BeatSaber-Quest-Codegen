#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutputData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_UnityMaterialInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshIndexFormat_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
constexpr void GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::BOX{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SPHERE{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::MESH{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_BOX{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_SPHERE{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_CAPSULE{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::*)()>(&::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c1f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderType(::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, 0x10>(this, std::forward<::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType>(value));
}
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, 0x10>(this);
}
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, 0x10>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderCenter(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderCenter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderCenter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderSize(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderSize()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__convexCollider(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__convexCollider()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__convexCollider() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionGroupName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionGroupName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionGroupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionVertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionVertices()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionVertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x40>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionIndices(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x48>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionIndices()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x48>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x48>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__meshTopology(::UnityEngine::MeshTopology  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshTopology, 0x50>(this, std::forward<::UnityEngine::MeshTopology>(value));
}
constexpr ::UnityEngine::MeshTopology& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__meshTopology()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshTopology, 0x50>(this);
}
constexpr ::UnityEngine::MeshTopology const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__meshTopology() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshTopology, 0x50>(this);
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__isTrigger(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__isTrigger()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__isTrigger() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo* HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>());
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::*)()>(&::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c45c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c._GetFinalMaterialsFromComparingNewWithPrevious_b__63_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::*)(::UnityEngine::Material*)>(&::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GetFinalMaterialsFromComparingNewWithPrevious_b__63_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21c45cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                            "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c._GenerateLODMeshesFromGeoGroups_b__65_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::*)(float_t, float_t)>(&::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GenerateLODMeshesFromGeoGroups_b__65_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21c4628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                            "<GenerateLODMeshesFromGeoGroups>b__65_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::setStaticF___9(::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*  value)  {
::cordl_internals::setStaticField<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>(std::forward<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>(value));
}
inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::setStaticF___9__63_0(::System::Predicate_1<::UnityEngine::Material*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Material*>*, "<>9__63_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>(std::forward<::System::Predicate_1<::UnityEngine::Material*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Material*>* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::getStaticF___9__63_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Material*>*, "<>9__63_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::setStaticF___9__65_0(::System::Comparison_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<float_t>*, "<>9__65_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>(std::forward<::System::Comparison_1<float_t>*>(value));
}
inline ::System::Comparison_1<float_t>* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::getStaticF___9__65_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<float_t>*, "<>9__65_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>();
}
inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>());
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                            "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, material);
}
inline int32_t HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GenerateLODMeshesFromGeoGroups_b__65_0(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                            "<GenerateLODMeshesFromGeoGroups>b__65_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, b);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.get_GeoID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.get_PartID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.get_AssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.set_AssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)(int32_t)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::set_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "set_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GetPopulatedGeoCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_GenerateGeoCache* (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, int32_t, bool, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::StringW)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GetPopulatedGeoCache)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x21b9148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GetPopulatedGeoCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.PopulateUnityMaterialData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateUnityMaterialData)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x21b9648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "PopulateUnityMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GetMaterialKeyFromAttributeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, int32_t, ByRef<::StringW>, ByRef<::StringW>, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GetMaterialKeyFromAttributeIndex)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21bb85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GetMaterialKeyFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CreateMaterialInfoEntryFromAttributeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, int32_t)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMaterialInfoEntryFromAttributeIndex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21bb740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CreateMaterialInfoEntryFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.PopulateGeometryData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateGeometryData)> {
  constexpr static std::size_t size = 0x1ae4;
  constexpr static std::size_t addrs = 0x21b9c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "PopulateGeometryData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.ParseLODTransitionAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ByRef<::ArrayW<float_t,::Array<float_t>*>>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::ParseLODTransitionAttribute)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x21bb9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "ParseLODTransitionAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t,::Array<float_t>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.UpdateColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateColliders)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21bbb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "UpdateColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.UpdateCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateCollider)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x21bbcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "UpdateCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GetFinalMaterialsFromComparingNewWithPrevious
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>, ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GetFinalMaterialsFromComparingNewWithPrevious)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x21bc308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GetFinalMaterialsFromComparingNewWithPrevious",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateMeshFromSingleGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, int32_t, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromSingleGroup)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x21bc6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateMeshFromSingleGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateLODMeshesFromGeoGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, int32_t, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateLODMeshesFromGeoGroups)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x21bd354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateLODMeshesFromGeoGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateMeshFromGeoGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, int32_t, bool, bool, bool, bool, ByRef<::UnityEngine::Mesh*>, ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromGeoGroup)> {
  constexpr static std::size_t size = 0xaec;
  constexpr static std::size_t addrs = 0x21bc868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateMeshFromGeoGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Mesh*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CombineQuadMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<int32_t>*, bool)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CombineQuadMeshes)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x21be62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CombineQuadMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CombineMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<int32_t>*, bool, bool, ::HoudiniEngineUnity::HEU_MeshIndexFormat*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CombineMeshes)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x21bebd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CreateMeshFromMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::HoudiniEngineUnity::HEU_MeshData*, bool, bool, ::HoudiniEngineUnity::HEU_MeshIndexFormat*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMeshFromMeshData)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x21be390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CreateMeshFromMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.TransferRegularAttributesToVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int32_t,::Array<int32_t>*>, ::ArrayW<int32_t,::Array<int32_t>*>, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<float_t,::Array<float_t>*>, ByRef<::ArrayW<float_t,::Array<float_t>*>>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::TransferRegularAttributesToVertices)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x21bef60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "TransferRegularAttributesToVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t,::Array<float_t>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateGeoGroupUsingGeoCacheVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, bool, bool, bool, bool, bool, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCacheVertices)> {
  constexpr static std::size_t size = 0x2d00;
  constexpr static std::size_t addrs = 0x21bf24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateGeoGroupUsingGeoCacheVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateGeoGroupUsingGeoCachePoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, bool, bool, bool, bool, bool, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCachePoints)> {
  constexpr static std::size_t size = 0x226c;
  constexpr static std::size_t addrs = 0x21c22f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateGeoGroupUsingGeoCachePoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CalculateGroupMeshTopology
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshTopology (*)(::System::Collections::Generic::List_1<int32_t>*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CalculateGroupMeshTopology)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x21c1f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CalculateGroupMeshTopology",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x21b944c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__AssetID_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__AssetID_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__AssetID_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_GeoInfo, 0x14>(this, std::forward<::HoudiniEngineUnity::HAPI_GeoInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__geoInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_GeoInfo, 0x14>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__geoInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_GeoInfo, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__partInfo(::HoudiniEngineUnity::HAPI_PartInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_PartInfo, 0x38>(this, std::forward<::HoudiniEngineUnity::HAPI_PartInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_PartInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_PartInfo, 0x38>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_PartInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_PartInfo, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__partName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__vertexList(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x70>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__vertexList()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x70>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__vertexList() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__faceCounts(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x78>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__faceCounts()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x78>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__faceCounts() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__houdiniMaterialIDs(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x80>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__houdiniMaterialIDs()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x80>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__houdiniMaterialIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x80>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__singleFaceUnityMaterial(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceUnityMaterial()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceUnityMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__singleFaceHoudiniMaterial(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceHoudiniMaterial()  {
return ::cordl_internals::getInstanceField<bool, 0x89>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceHoudiniMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialInfos(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*, 0x90>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*, 0x90>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x98>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x98>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x98>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrName(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xc0>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrName()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xc0>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrName() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xc0>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, 0xc8>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrStringsMap()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrStringsMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, 0xc8>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrNameInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0xd0>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrNameInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0xd0>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrNameInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0xd0>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrName(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xf8>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrName()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xf8>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrName() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xf8>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, 0x100>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrStringsMap()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrStringsMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, 0x100>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrIndexInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x108>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndexInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x108>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndexInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x108>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrIndex(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x130>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndex()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x130>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndex() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x130>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__inUseMaterials(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0x138>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__inUseMaterials()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__inUseMaterials() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0x138>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__posAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x140>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttrInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x140>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttrInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x140>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__uvsAttrInfo(::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>, 0x168>(this, std::forward<::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>>(value));
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttrInfo()  {
return ::cordl_internals::getInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>, 0x168>(this);
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttrInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo,::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>, 0x168>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x170>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttrInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x170>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttrInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x170>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colorAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x198>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttrInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x198>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttrInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x198>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__alphaAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x1c0>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttrInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x1c0>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttrInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x1c0>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__tangentAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x1e8>(this, std::forward<::HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttrInfo()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x1e8>(this);
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttrInfo() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x1e8>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__posAttr(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x210>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttr()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x210>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x210>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__uvsAttr(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, 0x218>(this, std::forward<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>(value));
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttr()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, 0x218>(this);
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, 0x218>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalAttr(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x220>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttr()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x220>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x220>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colorAttr(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x228>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttr()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x228>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x228>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__alphaAttr(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x230>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttr()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x230>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x230>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__tangentAttr(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x238>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttr()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x238>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x238>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groups(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x240>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x240>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x240>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__hasGroupGeometry(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x248>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasGroupGeometry()  {
return ::cordl_internals::getInstanceField<bool, 0x248>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasGroupGeometry() const {
return ::cordl_internals::getInstanceField<bool, 0x248>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupSplitVertexIndices(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x250>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitVertexIndices()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x250>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitVertexIndices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x250>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupSplitFaceIndices(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*, 0x258>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitFaceIndices()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*, 0x258>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitFaceIndices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*, 0x258>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupVertexOffsets(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*, 0x260>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupVertexOffsets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*, 0x260>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupVertexOffsets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<int32_t>*>*, 0x260>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__allCollisionVertexList(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x268>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionVertexList()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x268>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionVertexList() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x268>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__allCollisionFaceIndices(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x270>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionFaceIndices()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x270>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionFaceIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x270>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalCosineThreshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x278>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalCosineThreshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x278>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalCosineThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x278>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__hasLODGroups(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x27c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasLODGroups()  {
return ::cordl_internals::getInstanceField<bool, 0x27c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasLODGroups() const {
return ::cordl_internals::getInstanceField<bool, 0x27c>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__LODTransitionValues(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x280>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__LODTransitionValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x280>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__LODTransitionValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x280>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__isMeshReadWrite(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x288>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__isMeshReadWrite()  {
return ::cordl_internals::getInstanceField<bool, 0x288>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__isMeshReadWrite() const {
return ::cordl_internals::getInstanceField<bool, 0x288>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colliderInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*, 0x290>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colliderInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*, 0x290>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colliderInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*, 0x290>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__materialCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0x298>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0x298>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, 0x298>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__materialIDToDataMap(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>*, 0x2a0>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialIDToDataMap()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>*, 0x2a0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialIDToDataMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MaterialData*>*, 0x2a0>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__assetCacheFolderPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x2a8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__assetCacheFolderPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x2a8>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__assetCacheFolderPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x2a8>(this);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__meshIndexFormat(::HoudiniEngineUnity::HEU_MeshIndexFormat*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_MeshIndexFormat*, 0x2b0>(this, std::forward<::HoudiniEngineUnity::HEU_MeshIndexFormat*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_MeshIndexFormat* HoudiniEngineUnity::HEU_GenerateGeoCache::__get__meshIndexFormat()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_MeshIndexFormat*, 0x2b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_MeshIndexFormat*> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__meshIndexFormat() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_MeshIndexFormat*, 0x2b0>(this);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_GeoID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_PartID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_AssetID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::set_AssetID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "set_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* HoudiniEngineUnity::HEU_GenerateGeoCache::GetPopulatedGeoCache(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  assetID, int32_t  geoID, int32_t  partID, bool  bUseLODGroups, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*  materialCache, ::StringW  assetCacheFolderPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GetPopulatedGeoCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_GenerateGeoCache*, false>(nullptr, ___internal_method, session, assetID, geoID, partID, bUseLODGroups, materialCache, assetCacheFolderPath);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateUnityMaterialData(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "PopulateUnityMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::GetMaterialKeyFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, int32_t  attributeIndex, ByRef<::StringW>  unityMaterialName, ByRef<::StringW>  substanceName, ByRef<int32_t>  substanceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GetMaterialKeyFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, geoCache, attributeIndex, unityMaterialName, substanceName, substanceIndex);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMaterialInfoEntryFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, int32_t  materialAttributeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CreateMaterialInfoEntryFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, materialAttributeIndex);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateGeometryData(::HoudiniEngineUnity::HEU_SessionBase*  session, bool  bUseLODGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "PopulateGeometryData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, session, bUseLODGroups);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::ParseLODTransitionAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ByRef<::ArrayW<float_t,::Array<float_t>*>>  LODTransitionValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "ParseLODTransitionAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t,::Array<float_t>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, LODTransitionValues);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateColliders(::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData*  outputData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "UpdateColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, outputData);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateCollider(::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData*  outputData, ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*  colliderInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "UpdateCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, outputData, colliderInfo);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::GetFinalMaterialsFromComparingNewWithPrevious(::UnityEngine::GameObject*  gameObject, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  previousMaterials, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  newMaterials, ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>  finalMaterials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GetFinalMaterialsFromComparingNewWithPrevious",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, previousMaterials, newMaterials, finalMaterials);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromSingleGroup(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_GeoGroup*  GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput*  generatedOutput, int32_t  defaultMaterialKey, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, bool  bPartInstanced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateMeshFromSingleGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroup, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateLODMeshesFromGeoGroups(::HoudiniEngineUnity::HEU_SessionBase*  session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*  GeoGroupMeshes, ::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput*  generatedOutput, int32_t  defaultMaterialKey, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, bool  bPartInstanced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateLODMeshesFromGeoGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroupMeshes, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromGeoGroup(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_GeoGroup*  GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, int32_t  defaultMaterialKey, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, bool  bPartInstanced, ByRef<::UnityEngine::Mesh*>  newMesh, ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>  newMaterials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateMeshFromGeoGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Mesh*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroup, geoCache, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced, newMesh, newMaterials);
}
inline ::UnityEngine::Mesh* HoudiniEngineUnity::HEU_GenerateGeoCache::CombineQuadMeshes(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*  subMeshesMap, ::System::Collections::Generic::List_1<int32_t>*  subMeshIndices, bool  bGenerateNormals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CombineQuadMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, subMeshesMap, subMeshIndices, bGenerateNormals);
}
inline ::UnityEngine::Mesh* HoudiniEngineUnity::HEU_GenerateGeoCache::CombineMeshes(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*  subMeshesMap, ::System::Collections::Generic::List_1<int32_t>*  submeshIndices, bool  bGenerateUVs, bool  bGenerateNormals, ::HoudiniEngineUnity::HEU_MeshIndexFormat*  meshIndexFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, subMeshesMap, submeshIndices, bGenerateUVs, bGenerateNormals, meshIndexFormat);
}
inline ::UnityEngine::Mesh* HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMeshFromMeshData(::HoudiniEngineUnity::HEU_MeshData*  submesh, bool  bGenerateUVs, bool  bGenerateNormals, ::HoudiniEngineUnity::HEU_MeshIndexFormat*  meshIndexFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CreateMeshFromMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, submesh, bGenerateUVs, bGenerateNormals, meshIndexFormat);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::TransferRegularAttributesToVertices(::ArrayW<int32_t,::Array<int32_t>*>  groupVertexList, ::ArrayW<int32_t,::Array<int32_t>*>  allFaceCounts, ::System::Collections::Generic::List_1<int32_t>*  groupFaces, ::System::Collections::Generic::List_1<int32_t>*  groupVertexOffset, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attribInfo, ::ArrayW<float_t,::Array<float_t>*>  inData, ByRef<::ArrayW<float_t,::Array<float_t>*>>  outData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "TransferRegularAttributesToVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t,::Array<float_t>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, groupVertexList, allFaceCounts, groupFaces, groupVertexOffset, attribInfo, inData, outData);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCacheVertices(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, bool  bUseLODGroups, bool  bPartInstanced, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>  LODGroupMeshes, ByRef<int32_t>  defaultMaterialKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateGeoGroupUsingGeoCacheVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCachePoints(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_GenerateGeoCache*  geoCache, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, bool  bUseLODGroups, bool  bPartInstanced, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>  LODGroupMeshes, ByRef<int32_t>  defaultMaterialKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "GenerateGeoGroupUsingGeoCachePoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
}
inline ::UnityEngine::MeshTopology HoudiniEngineUnity::HEU_GenerateGeoCache::CalculateGroupMeshTopology(::System::Collections::Generic::List_1<int32_t>*  groupFaces, ::ArrayW<int32_t,::Array<int32_t>*>  allFaceCounts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            "CalculateGroupMeshTopology",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology, false>(nullptr, ___internal_method, groupFaces, allFaceCounts);
}
inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* HoudiniEngineUnity::HEU_GenerateGeoCache::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_GenerateGeoCache*>());
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
