#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidProgramException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidProgramException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidProgramException);
// Type: System::InvalidProgramException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2428))
// CS Name: ::System::InvalidProgramException*
class CORDL_TYPE InvalidProgramException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::InvalidProgramException* New_ctor() ;

/// @brief Method .ctor addr 0x25adb54 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::InvalidProgramException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25adbb0 size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::InvalidProgramException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25adbd4 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidProgramException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidProgramException(InvalidProgramException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidProgramException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidProgramException(InvalidProgramException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidProgramException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidProgramException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::InvalidProgramException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidProgramException*, "System", "InvalidProgramException");
