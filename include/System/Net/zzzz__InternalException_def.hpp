#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(InternalException)
// Forward declare root types
namespace System::Net {
class InternalException;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::InternalException);
// Type: System.Net::InternalException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9073))
// CS Name: ::System.Net::InternalException*
class CORDL_TYPE InternalException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::Net::InternalException* New_ctor() ;

/// @brief Method .ctor addr 0x299d71c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InternalException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalException(InternalException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalException(InternalException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InternalException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::InternalException, 0x90>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::InternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::InternalException*, "System.Net", "InternalException");
