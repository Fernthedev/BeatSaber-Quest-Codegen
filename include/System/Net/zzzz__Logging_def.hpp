#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Logging)
// Forward declare root types
namespace System::Net {
class Logging;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Logging);
// Type: System.Net::Logging
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9145))
// CS Name: ::System.Net::Logging*
class CORDL_TYPE Logging : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_On addr 0x29ba838 size 0x8 virtual false final false
static inline bool get_On() ;

// Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Logging(Logging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logging(Logging const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Logging()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Logging, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::Logging);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Logging*, "System.Net", "Logging");
