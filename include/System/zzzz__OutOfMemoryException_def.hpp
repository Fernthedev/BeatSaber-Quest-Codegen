#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OutOfMemoryException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class OutOfMemoryException;
}
// Write type traits
MARK_REF_PTR_T(::System::OutOfMemoryException);
// Type: System::OutOfMemoryException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2529))
// CS Name: ::System::OutOfMemoryException*
class CORDL_TYPE OutOfMemoryException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::OutOfMemoryException* New_ctor() ;

/// @brief Method .ctor addr 0x25d1de0 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::System::OutOfMemoryException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25d1e38 size 0x20 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::OutOfMemoryException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25d1e58 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "OutOfMemoryException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OutOfMemoryException(OutOfMemoryException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutOfMemoryException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutOfMemoryException(OutOfMemoryException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OutOfMemoryException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OutOfMemoryException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::OutOfMemoryException);
DEFINE_IL2CPP_ARG_TYPE(::System::OutOfMemoryException*, "System", "OutOfMemoryException");
