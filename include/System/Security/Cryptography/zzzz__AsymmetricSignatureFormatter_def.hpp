#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsymmetricSignatureFormatter)
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricSignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricSignatureFormatter);
// Type: System.Security.Cryptography::AsymmetricSignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2920))
// CS Name: ::System.Security.Cryptography::AsymmetricSignatureFormatter*
class CORDL_TYPE AsymmetricSignatureFormatter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::System::Security::Cryptography::AsymmetricSignatureFormatter* New_ctor() ;

/// @brief Method .ctor addr 0x245bff8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsymmetricSignatureFormatter(AsymmetricSignatureFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsymmetricSignatureFormatter(AsymmetricSignatureFormatter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsymmetricSignatureFormatter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricSignatureFormatter, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricSignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricSignatureFormatter*, "System.Security.Cryptography", "AsymmetricSignatureFormatter");
