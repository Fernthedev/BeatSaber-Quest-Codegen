#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
CORDL_MODULE_EXPORT(MultipliedColorSO)
namespace GlobalNamespace {
class SimpleColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MultipliedColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultipliedColorSO);
// Type: ::MultipliedColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16207))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16209))
// CS Name: ::MultipliedColorSO*
class CORDL_TYPE MultipliedColorSO : public ::GlobalNamespace::ColorSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::ColorSO)]{};

/// @brief Field _baseColor offset 0x18
 __declspec(property(get=__get__baseColor, put=__set__baseColor)) ::GlobalNamespace::SimpleColorSO*  _baseColor;

/// @brief Field _multiplierColor offset 0x20
 __declspec(property(get=__get__multiplierColor, put=__set__multiplierColor)) ::UnityEngine::Color  _multiplierColor;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__baseColor(::GlobalNamespace::SimpleColorSO*  value) ;

constexpr ::GlobalNamespace::SimpleColorSO* __get__baseColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> __get__baseColor() const;

constexpr void __set__multiplierColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__multiplierColor() ;

constexpr ::UnityEngine::Color const& __get__multiplierColor() const;

/// @brief Method get_color addr 0x122d948 size 0x50 virtual true final false
inline ::UnityEngine::Color get_color() ;

static inline ::GlobalNamespace::MultipliedColorSO* New_ctor() ;

/// @brief Method .ctor addr 0x122d998 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipliedColorSO(MultipliedColorSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipliedColorSO(MultipliedColorSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultipliedColorSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultipliedColorSO, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultipliedColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultipliedColorSO*, "", "MultipliedColorSO");
