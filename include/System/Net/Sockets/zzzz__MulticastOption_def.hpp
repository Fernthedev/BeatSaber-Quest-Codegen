#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MulticastOption)
// Forward declare root types
namespace System::Net::Sockets {
class MulticastOption;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::MulticastOption);
// Type: System.Net.Sockets::MulticastOption
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9342))
// CS Name: ::System.Net.Sockets::MulticastOption*
class CORDL_TYPE MulticastOption : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "MulticastOption", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MulticastOption(MulticastOption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MulticastOption", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MulticastOption(MulticastOption const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MulticastOption()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::MulticastOption, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::MulticastOption);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::MulticastOption*, "System.Net.Sockets", "MulticastOption");
