#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(MissingManifestResourceException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Resources {
class MissingManifestResourceException;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::MissingManifestResourceException);
// Type: System.Resources::MissingManifestResourceException
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3426))
// CS Name: ::System.Resources::MissingManifestResourceException*
class CORDL_TYPE MissingManifestResourceException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::Resources::MissingManifestResourceException* New_ctor() ;

/// @brief Method .ctor addr 0x24dee80 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::Resources::MissingManifestResourceException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24deedc size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "MissingManifestResourceException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissingManifestResourceException(MissingManifestResourceException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissingManifestResourceException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissingManifestResourceException(MissingManifestResourceException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissingManifestResourceException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::MissingManifestResourceException, 0x90>, "Size mismatch!");

} // namespace end def System::Resources
NEED_NO_BOX(::System::Resources::MissingManifestResourceException);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::MissingManifestResourceException*, "System.Resources", "MissingManifestResourceException");
