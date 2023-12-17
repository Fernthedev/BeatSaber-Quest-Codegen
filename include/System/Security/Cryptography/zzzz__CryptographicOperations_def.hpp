#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptographicOperations)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptographicOperations;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptographicOperations);
// Type: System.Security.Cryptography::CryptographicOperations
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2915))
// CS Name: ::System.Security.Cryptography::CryptographicOperations*
class CORDL_TYPE CryptographicOperations : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ZeroMemory addr 0x2459c58 size 0x68 virtual false final false
static inline void ZeroMemory(::System::Span_1<uint8_t>  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicOperations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptographicOperations(CryptographicOperations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicOperations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptographicOperations(CryptographicOperations const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CryptographicOperations()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptographicOperations, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptographicOperations);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicOperations*, "System.Security.Cryptography", "CryptographicOperations");
