#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorTypeExtensions)
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorTypeExtensions);
// Type: ::ColorTypeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14753))
// CS Name: ::ColorTypeExtensions*
class CORDL_TYPE ColorTypeExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Opposite addr 0xe006dc size 0x18 virtual false final false
static inline ::GlobalNamespace::ColorType Opposite(::GlobalNamespace::ColorType  colorType) ;

// Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorTypeExtensions(ColorTypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorTypeExtensions(ColorTypeExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorTypeExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTypeExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTypeExtensions*, "", "ColorTypeExtensions");
