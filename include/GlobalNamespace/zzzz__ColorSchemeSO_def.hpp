#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeSO)
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeSO);
// Type: ::ColorSchemeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16206))
// CS Name: ::ColorSchemeSO*
class CORDL_TYPE ColorSchemeSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _colorScheme offset 0x18
 __declspec(property(get=__get__colorScheme, put=__set__colorScheme)) ::GlobalNamespace::ColorScheme*  _colorScheme;

 __declspec(property(get=get_colorScheme)) ::GlobalNamespace::ColorScheme*  colorScheme;

constexpr void __set__colorScheme(::GlobalNamespace::ColorScheme*  value) ;

constexpr ::GlobalNamespace::ColorScheme* __get__colorScheme() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> __get__colorScheme() const;

/// @brief Method get_colorScheme addr 0x122d590 size 0x8 virtual false final false
inline ::GlobalNamespace::ColorScheme* get_colorScheme() ;

/// @brief Method LogColorScheme addr 0x122d598 size 0x2a4 virtual false final false
inline void LogColorScheme() ;

static inline ::GlobalNamespace::ColorSchemeSO* New_ctor() ;

/// @brief Method .ctor addr 0x122d83c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemeSO(ColorSchemeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemeSO(ColorSchemeSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemeSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeSO*, "", "ColorSchemeSO");
