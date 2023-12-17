#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingFieldException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System {
class MissingFieldException;
}
// Write type traits
MARK_REF_PTR_T(::System::MissingFieldException);
// Type: System::MissingFieldException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2527))
// CS Name: ::System::MissingFieldException*
class CORDL_TYPE MissingFieldException : public ::System::MissingMemberException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::MissingMemberException)]{};

 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

static inline ::System::MissingFieldException* New_ctor() ;

/// @brief Method .ctor addr 0x25d174c size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::MissingFieldException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25d17cc size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::MissingFieldException* New_ctor(::StringW  className, ::StringW  fieldName) ;

/// @brief Method .ctor addr 0x25d17f0 size 0x28 virtual false final false
inline void _ctor(::StringW  className, ::StringW  fieldName) ;

static inline ::System::MissingFieldException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25d1874 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Message addr 0x25d19fc size 0x114 virtual true final false
inline ::StringW get_Message() ;

// Ctor Parameters [CppParam { name: "", ty: "MissingFieldException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissingFieldException(MissingFieldException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissingFieldException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissingFieldException(MissingFieldException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissingFieldException()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MissingFieldException, 0xa8>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::MissingFieldException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingFieldException*, "System", "MissingFieldException");
