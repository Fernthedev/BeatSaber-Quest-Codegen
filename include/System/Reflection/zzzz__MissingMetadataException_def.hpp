#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeAccessException_def.hpp"
CORDL_MODULE_EXPORT(MissingMetadataException)
// Forward declare root types
namespace System::Reflection {
class MissingMetadataException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MissingMetadataException);
// Type: System.Reflection::MissingMetadataException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2495))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3505))
// CS Name: ::System.Reflection::MissingMetadataException*
class CORDL_TYPE MissingMetadataException : public ::System::TypeAccessException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::TypeAccessException)]{};

static inline ::System::Reflection::MissingMetadataException* New_ctor() ;

/// @brief Method .ctor addr 0x24edeac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissingMetadataException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissingMetadataException(MissingMetadataException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissingMetadataException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissingMetadataException(MissingMetadataException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissingMetadataException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MissingMetadataException, 0xb0>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::MissingMetadataException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MissingMetadataException*, "System.Reflection", "MissingMetadataException");
