#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DSASignatureFormatter)
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSASignatureFormatter);
// Type: System.Security.Cryptography::DSASignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2920))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2933))
// CS Name: ::System.Security.Cryptography::DSASignatureFormatter*
class CORDL_TYPE DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Security::Cryptography::AsymmetricSignatureFormatter)]{};

/// @brief Field _oid offset 0x10
 __declspec(property(get=__get__oid, put=__set__oid)) ::StringW  _oid;

constexpr void __set__oid(::StringW  value) ;

constexpr ::StringW& __get__oid() ;

constexpr ::StringW const& __get__oid() const;

static inline ::System::Security::Cryptography::DSASignatureFormatter* New_ctor() ;

/// @brief Method .ctor addr 0x245e188 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DSASignatureFormatter(DSASignatureFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DSASignatureFormatter(DSASignatureFormatter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DSASignatureFormatter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSASignatureFormatter, 0x18>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureFormatter*, "System.Security.Cryptography", "DSASignatureFormatter");
