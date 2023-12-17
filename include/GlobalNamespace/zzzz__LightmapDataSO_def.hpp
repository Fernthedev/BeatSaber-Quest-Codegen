#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LightmapDataSO)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapDataSO);
// Type: ::LightmapDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5863))
// CS Name: ::LightmapDataSO*
class CORDL_TYPE LightmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _lightmap1 offset 0x18
 __declspec(property(get=__get__lightmap1, put=__set__lightmap1)) ::UnityEngine::Texture2D*  _lightmap1;

/// @brief Field _lightmap2 offset 0x20
 __declspec(property(get=__get__lightmap2, put=__set__lightmap2)) ::UnityEngine::Texture2D*  _lightmap2;

 __declspec(property(get=get_lightmap1, put=set_lightmap1)) ::UnityEngine::Texture2D*  lightmap1;

 __declspec(property(get=get_lightmap2, put=set_lightmap2)) ::UnityEngine::Texture2D*  lightmap2;

constexpr void __set__lightmap1(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get__lightmap1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get__lightmap1() const;

constexpr void __set__lightmap2(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get__lightmap2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get__lightmap2() const;

/// @brief Method get_lightmap1 addr 0x22f80e0 size 0x8 virtual false final false
inline ::UnityEngine::Texture2D* get_lightmap1() ;

/// @brief Method set_lightmap1 addr 0x22f80e8 size 0x8 virtual false final false
inline void set_lightmap1(::UnityEngine::Texture2D*  value) ;

/// @brief Method get_lightmap2 addr 0x22f80f0 size 0x8 virtual false final false
inline ::UnityEngine::Texture2D* get_lightmap2() ;

/// @brief Method set_lightmap2 addr 0x22f80f8 size 0x8 virtual false final false
inline void set_lightmap2(::UnityEngine::Texture2D*  value) ;

static inline ::GlobalNamespace::LightmapDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x22f8100 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapDataSO(LightmapDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapDataSO(LightmapDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightmapDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapDataSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapDataSO*, "", "LightmapDataSO");
