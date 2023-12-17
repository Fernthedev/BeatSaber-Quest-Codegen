#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputObjectInfo)
namespace System {
class Type;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class HEU_BoundingVolume;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputObjectInfo);
// Type: HoudiniEngineUnity::HEU_InputObjectInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9646))
// CS Name: ::HoudiniEngineUnity::HEU_InputObjectInfo*
class CORDL_TYPE HEU_InputObjectInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::Object)]{};

/// @brief Field _gameObject offset 0x10
 __declspec(property(get=__get__gameObject, put=__set__gameObject)) ::UnityEngine::GameObject*  _gameObject;

/// @brief Field _terrainReference offset 0x18
 __declspec(property(get=__get__terrainReference, put=__set__terrainReference)) ::UnityEngine::Terrain*  _terrainReference;

/// @brief Field _boundingVolumeReference offset 0x20
 __declspec(property(get=__get__boundingVolumeReference, put=__set__boundingVolumeReference)) ::GlobalNamespace::HEU_BoundingVolume*  _boundingVolumeReference;

/// @brief Field _tilemapReference offset 0x28
 __declspec(property(get=__get__tilemapReference, put=__set__tilemapReference)) ::UnityEngine::Tilemaps::Tilemap*  _tilemapReference;

/// @brief Field _syncdTransform offset 0x30
 __declspec(property(get=__get__syncdTransform, put=__set__syncdTransform)) ::UnityEngine::Matrix4x4  _syncdTransform;

/// @brief Field _useTransformOffset offset 0x70
 __declspec(property(get=__get__useTransformOffset, put=__set__useTransformOffset)) bool  _useTransformOffset;

/// @brief Field _translateOffset offset 0x74
 __declspec(property(get=__get__translateOffset, put=__set__translateOffset)) ::UnityEngine::Vector3  _translateOffset;

/// @brief Field _rotateOffset offset 0x80
 __declspec(property(get=__get__rotateOffset, put=__set__rotateOffset)) ::UnityEngine::Vector3  _rotateOffset;

/// @brief Field _scaleOffset offset 0x8c
 __declspec(property(get=__get__scaleOffset, put=__set__scaleOffset)) ::UnityEngine::Vector3  _scaleOffset;

/// @brief Field _inputInterfaceType offset 0x98
 __declspec(property(get=__get__inputInterfaceType, put=__set__inputInterfaceType)) ::System::Type*  _inputInterfaceType;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*() noexcept;

constexpr void __set__gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__gameObject() const;

constexpr void __set__terrainReference(::UnityEngine::Terrain*  value) ;

constexpr ::UnityEngine::Terrain* __get__terrainReference() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> __get__terrainReference() const;

constexpr void __set__boundingVolumeReference(::GlobalNamespace::HEU_BoundingVolume*  value) ;

constexpr ::GlobalNamespace::HEU_BoundingVolume* __get__boundingVolumeReference() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HEU_BoundingVolume*> __get__boundingVolumeReference() const;

constexpr void __set__tilemapReference(::UnityEngine::Tilemaps::Tilemap*  value) ;

constexpr ::UnityEngine::Tilemaps::Tilemap* __get__tilemapReference() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> __get__tilemapReference() const;

constexpr void __set__syncdTransform(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get__syncdTransform() ;

constexpr ::UnityEngine::Matrix4x4 const& __get__syncdTransform() const;

constexpr void __set__useTransformOffset(bool  value) ;

constexpr bool& __get__useTransformOffset() ;

constexpr bool const& __get__useTransformOffset() const;

constexpr void __set__translateOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__translateOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__translateOffset() const;

constexpr void __set__rotateOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rotateOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__rotateOffset() const;

constexpr void __set__scaleOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__scaleOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__scaleOffset() const;

constexpr void __set__inputInterfaceType(::System::Type*  value) ;

constexpr ::System::Type* __get__inputInterfaceType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__inputInterfaceType() const;

/// @brief Method CopyTo addr 0x216fcc0 size 0x74 virtual false final false
inline void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo*  destObject) ;

/// @brief Method SetReferencesFromGameObject addr 0x216ffa8 size 0xec virtual false final false
inline void SetReferencesFromGameObject() ;

/// @brief Method IsEquivalentTo addr 0x2171fe0 size 0x28c virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo*  other) ;

static inline ::HoudiniEngineUnity::HEU_InputObjectInfo* New_ctor() ;

/// @brief Method .ctor addr 0x216fbd8 size 0xe8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_InputObjectInfo(HEU_InputObjectInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_InputObjectInfo(HEU_InputObjectInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_InputObjectInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputObjectInfo, 0xa0>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputObjectInfo*, "HoudiniEngineUnity", "HEU_InputObjectInfo");
