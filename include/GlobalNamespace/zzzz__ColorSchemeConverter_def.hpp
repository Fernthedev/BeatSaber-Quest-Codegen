#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeConverter)
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeConverter);
// Type: ::ColorSchemeConverter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5827))
// CS Name: ::ColorSchemeConverter*
class CORDL_TYPE ColorSchemeConverter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method FromNetSerializable addr 0x22ec398 size 0x218 virtual false final false
static inline ::GlobalNamespace::ColorScheme* FromNetSerializable(::GlobalNamespace::ColorSchemeNetSerializable  serialized) ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemeConverter(ColorSchemeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemeConverter(ColorSchemeConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemeConverter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeConverter, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeConverter*, "", "ColorSchemeConverter");
