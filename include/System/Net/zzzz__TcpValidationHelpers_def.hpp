#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TcpValidationHelpers)
// Forward declare root types
namespace System::Net {
class TcpValidationHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::TcpValidationHelpers);
// Type: System.Net::TcpValidationHelpers
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9025))
// CS Name: ::System.Net::TcpValidationHelpers*
class CORDL_TYPE TcpValidationHelpers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ValidatePortNumber addr 0x298a254 size 0xc virtual false final false
static inline bool ValidatePortNumber(int32_t  port) ;

// Ctor Parameters [CppParam { name: "", ty: "TcpValidationHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TcpValidationHelpers(TcpValidationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TcpValidationHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TcpValidationHelpers(TcpValidationHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TcpValidationHelpers()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TcpValidationHelpers, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::TcpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TcpValidationHelpers*, "System.Net", "TcpValidationHelpers");
