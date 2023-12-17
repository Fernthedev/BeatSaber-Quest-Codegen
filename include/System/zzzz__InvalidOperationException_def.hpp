#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidOperationException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class InvalidOperationException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidOperationException);
// Type: System::InvalidOperationException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2427))
// CS Name: ::System::InvalidOperationException*
class CORDL_TYPE InvalidOperationException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::InvalidOperationException* New_ctor() ;

/// @brief Method .ctor addr 0x25adaa8 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::InvalidOperationException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25adb04 size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::InvalidOperationException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x25adb28 size 0x24 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::InvalidOperationException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25adb4c size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidOperationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidOperationException(InvalidOperationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidOperationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidOperationException(InvalidOperationException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidOperationException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidOperationException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::InvalidOperationException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidOperationException*, "System", "InvalidOperationException");
