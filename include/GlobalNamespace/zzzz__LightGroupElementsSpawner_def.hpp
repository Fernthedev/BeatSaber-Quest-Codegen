#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupElementsSpawner)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupElementsSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupElementsSpawner);
// Type: ::LightGroupElementsSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14512))
// CS Name: ::LightGroupElementsSpawner*
class CORDL_TYPE LightGroupElementsSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _lightPrefab offset 0x18
 __declspec(property(get=__get__lightPrefab, put=__set__lightPrefab)) ::UnityEngine::GameObject*  _lightPrefab;

/// @brief Field _useAlternatePrefab offset 0x20
 __declspec(property(get=__get__useAlternatePrefab, put=__set__useAlternatePrefab)) bool  _useAlternatePrefab;

/// @brief Field _alternateLightPrefab offset 0x28
 __declspec(property(get=__get__alternateLightPrefab, put=__set__alternateLightPrefab)) ::UnityEngine::GameObject*  _alternateLightPrefab;

constexpr void __set__lightPrefab(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__lightPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__lightPrefab() const;

constexpr void __set__useAlternatePrefab(bool  value) ;

constexpr bool& __get__useAlternatePrefab() ;

constexpr bool const& __get__useAlternatePrefab() const;

constexpr void __set__alternateLightPrefab(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__alternateLightPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__alternateLightPrefab() const;

static inline ::GlobalNamespace::LightGroupElementsSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x210e384 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupElementsSpawner(LightGroupElementsSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupElementsSpawner(LightGroupElementsSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupElementsSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupElementsSpawner, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupElementsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupElementsSpawner*, "", "LightGroupElementsSpawner");
