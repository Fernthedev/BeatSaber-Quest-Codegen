#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Bootstring_def.hpp"
CORDL_MODULE_EXPORT(Punycode)
// Forward declare root types
namespace System::Globalization {
class Punycode;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::Punycode);
// Type: System.Globalization::Punycode
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3725))
// CS Name: ::System.Globalization::Punycode*
class CORDL_TYPE Punycode : public ::System::Globalization::Bootstring {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Globalization::Bootstring)]{};

static inline ::System::Globalization::Punycode* New_ctor() ;

/// @brief Method .ctor addr 0x2577d4c size 0x40 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Punycode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Punycode(Punycode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Punycode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Punycode(Punycode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Punycode()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::Punycode, 0x30>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::Punycode);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::Punycode*, "System.Globalization", "Punycode");
