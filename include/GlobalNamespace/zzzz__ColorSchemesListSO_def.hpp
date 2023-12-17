#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ColorSchemesListSO)
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesListSO);
// Type: ::ColorSchemesListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16205))
// CS Name: ::ColorSchemesListSO*
class CORDL_TYPE ColorSchemesListSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _colorSchemes offset 0x18
 __declspec(property(get=__get__colorSchemes, put=__set__colorSchemes)) ::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>  _colorSchemes;

 __declspec(property(get=get_colorSchemes)) ::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>  colorSchemes;

constexpr void __set__colorSchemes(::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*>& __get__colorSchemes() ;

constexpr ::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*> const& __get__colorSchemes() const;

/// @brief Method get_colorSchemes addr 0x122d580 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::ColorSchemeSO*,::Array<::GlobalNamespace::ColorSchemeSO*>*> get_colorSchemes() ;

static inline ::GlobalNamespace::ColorSchemesListSO* New_ctor() ;

/// @brief Method .ctor addr 0x122d588 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesListSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemesListSO(ColorSchemesListSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesListSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemesListSO(ColorSchemesListSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemesListSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesListSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemesListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesListSO*, "", "ColorSchemesListSO");
