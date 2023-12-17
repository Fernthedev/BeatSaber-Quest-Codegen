#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassLightTypeSO)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLightTypeSO);
// Type: ::BloomPrePassLightTypeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14476))
// CS Name: ::BloomPrePassLightTypeSO*
class CORDL_TYPE BloomPrePassLightTypeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _renderingPriority offset 0x18
 __declspec(property(get=__get__renderingPriority, put=__set__renderingPriority)) int32_t  _renderingPriority;

/// @brief Field _material offset 0x20
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

 __declspec(property(get=get_renderingPriority)) int32_t  renderingPriority;

 __declspec(property(get=get_material)) ::UnityEngine::Material*  material;

constexpr void __set__renderingPriority(int32_t  value) ;

constexpr int32_t& __get__renderingPriority() ;

constexpr int32_t const& __get__renderingPriority() const;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

/// @brief Method get_renderingPriority addr 0x2107170 size 0x8 virtual false final false
inline int32_t get_renderingPriority() ;

/// @brief Method get_material addr 0x2107178 size 0x8 virtual false final false
inline ::UnityEngine::Material* get_material() ;

static inline ::GlobalNamespace::BloomPrePassLightTypeSO* New_ctor() ;

/// @brief Method .ctor addr 0x2107180 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassLightTypeSO(BloomPrePassLightTypeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassLightTypeSO(BloomPrePassLightTypeSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassLightTypeSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLightTypeSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightTypeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
