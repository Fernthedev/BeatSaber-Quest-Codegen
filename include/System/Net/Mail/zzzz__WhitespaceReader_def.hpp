#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WhitespaceReader)
// Forward declare root types
namespace System::Net::Mail {
class WhitespaceReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::WhitespaceReader);
// Type: System.Net.Mail::WhitespaceReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9381))
// CS Name: ::System.Net.Mail::WhitespaceReader*
class CORDL_TYPE WhitespaceReader : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ReadFwsReverse addr 0x29019a0 size 0x20c virtual false final false
static inline int32_t ReadFwsReverse(::StringW  data, int32_t  index) ;

/// @brief Method ReadCfwsReverse addr 0x29029dc size 0x2e0 virtual false final false
static inline int32_t ReadCfwsReverse(::StringW  data, int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "WhitespaceReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WhitespaceReader(WhitespaceReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhitespaceReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhitespaceReader(WhitespaceReader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WhitespaceReader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::WhitespaceReader, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::WhitespaceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::WhitespaceReader*, "System.Net.Mail", "WhitespaceReader");
