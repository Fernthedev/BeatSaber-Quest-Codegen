#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ColorSO)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSO);
// Type: ::ColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16207))
// CS Name: ::ColorSO*
class CORDL_TYPE ColorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

/// @brief Method get_color addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method op_Implicit addr 0x122d844 size 0x8c virtual false final false
static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSO*  c) ;

static inline ::GlobalNamespace::ColorSO* New_ctor() ;

/// @brief Method .ctor addr 0x122d8d0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSO(ColorSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSO(ColorSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSO()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSO, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSO*, "", "ColorSO");
