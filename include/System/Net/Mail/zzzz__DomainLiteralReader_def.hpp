#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomainLiteralReader)
// Forward declare root types
namespace System::Net::Mail {
class DomainLiteralReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::DomainLiteralReader);
// Type: System.Net.Mail::DomainLiteralReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9376))
// CS Name: ::System.Net.Mail::DomainLiteralReader*
class CORDL_TYPE DomainLiteralReader : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ReadReverse addr 0x2901778 size 0x228 virtual false final false
static inline int32_t ReadReverse(::StringW  data, int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "DomainLiteralReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DomainLiteralReader(DomainLiteralReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DomainLiteralReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DomainLiteralReader(DomainLiteralReader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DomainLiteralReader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::DomainLiteralReader, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::DomainLiteralReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::DomainLiteralReader*, "System.Net.Mail", "DomainLiteralReader");
