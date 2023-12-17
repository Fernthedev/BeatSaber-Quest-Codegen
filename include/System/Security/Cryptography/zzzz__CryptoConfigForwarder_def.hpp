#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CryptoConfigForwarder)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfigForwarder;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoConfigForwarder);
// Type: System.Security.Cryptography::CryptoConfigForwarder
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2988))
// CS Name: ::System.Security.Cryptography::CryptoConfigForwarder*
class CORDL_TYPE CryptoConfigForwarder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateFromName addr 0x2474a90 size 0x54 virtual false final false
static inline ::System::Object* CreateFromName(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfigForwarder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoConfigForwarder(CryptoConfigForwarder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfigForwarder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoConfigForwarder(CryptoConfigForwarder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CryptoConfigForwarder()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoConfigForwarder, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfigForwarder);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfigForwarder*, "System.Security.Cryptography", "CryptoConfigForwarder");
