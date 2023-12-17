#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__HEU_BoundingVolume_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectInfo::*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(&::HoudiniEngineUnity::HEU_InputObjectInfo::CopyTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x216fcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo.SetReferencesFromGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectInfo::*)()>(&::HoudiniEngineUnity::HEU_InputObjectInfo::SetReferencesFromGameObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x216ffa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            "SetReferencesFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputObjectInfo::*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(&::HoudiniEngineUnity::HEU_InputObjectInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2171fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectInfo::*)()>(&::HoudiniEngineUnity::HEU_InputObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x216fbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>"
constexpr  HoudiniEngineUnity::HEU_InputObjectInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__gameObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x10>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* HoudiniEngineUnity::HEU_InputObjectInfo::__get__gameObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> HoudiniEngineUnity::HEU_InputObjectInfo::__get__gameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__terrainReference(::UnityEngine::Terrain*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Terrain*, 0x18>(this, std::forward<::UnityEngine::Terrain*>(value));
}
constexpr ::UnityEngine::Terrain* HoudiniEngineUnity::HEU_InputObjectInfo::__get__terrainReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Terrain*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> HoudiniEngineUnity::HEU_InputObjectInfo::__get__terrainReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Terrain*, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__boundingVolumeReference(::GlobalNamespace::HEU_BoundingVolume*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HEU_BoundingVolume*, 0x20>(this, std::forward<::GlobalNamespace::HEU_BoundingVolume*>(value));
}
constexpr ::GlobalNamespace::HEU_BoundingVolume* HoudiniEngineUnity::HEU_InputObjectInfo::__get__boundingVolumeReference()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HEU_BoundingVolume*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HEU_BoundingVolume*> HoudiniEngineUnity::HEU_InputObjectInfo::__get__boundingVolumeReference() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HEU_BoundingVolume*, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__tilemapReference(::UnityEngine::Tilemaps::Tilemap*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Tilemaps::Tilemap*, 0x28>(this, std::forward<::UnityEngine::Tilemaps::Tilemap*>(value));
}
constexpr ::UnityEngine::Tilemaps::Tilemap* HoudiniEngineUnity::HEU_InputObjectInfo::__get__tilemapReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Tilemaps::Tilemap*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> HoudiniEngineUnity::HEU_InputObjectInfo::__get__tilemapReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Tilemaps::Tilemap*, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__syncdTransform(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x30>(this, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4& HoudiniEngineUnity::HEU_InputObjectInfo::__get__syncdTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x30>(this);
}
constexpr ::UnityEngine::Matrix4x4 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__syncdTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__useTransformOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_InputObjectInfo::__get__useTransformOffset()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__useTransformOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__translateOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x74>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectInfo::__get__translateOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__translateOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__rotateOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x80>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectInfo::__get__rotateOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x80>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__rotateOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x80>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__scaleOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectInfo::__get__scaleOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8c>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__scaleOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8c>(this);
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__inputInterfaceType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x98>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* HoudiniEngineUnity::HEU_InputObjectInfo::__get__inputInterfaceType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> HoudiniEngineUnity::HEU_InputObjectInfo::__get__inputInterfaceType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x98>(this);
}
inline void HoudiniEngineUnity::HEU_InputObjectInfo::CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo*  destObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, destObject);
}
inline void HoudiniEngineUnity::HEU_InputObjectInfo::SetReferencesFromGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            "SetReferencesFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputObjectInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputObjectInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputObjectInfo*>());
}
inline void HoudiniEngineUnity::HEU_InputObjectInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
