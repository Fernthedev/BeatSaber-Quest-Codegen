#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingMethodException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MissingMethodException;
}
// Write type traits
MARK_REF_PTR_T(::System::MissingMethodException);
// Type: System::MissingMethodException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2442))
// CS Name: ::System::MissingMethodException*
class CORDL_TYPE MissingMethodException : public ::System::MissingMemberException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::MissingMemberException)]{};

 __declspec(property(get=get_Message)) ::StringW  Message;

static inline ::System::MissingMethodException* New_ctor() ;

/// @brief Method .ctor addr 0x25afbfc size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::MissingMethodException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25afc58 size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::MissingMethodException* New_ctor(::StringW  className, ::StringW  methodName) ;

/// @brief Method .ctor addr 0x25afc7c size 0x2c virtual false final false
inline void _ctor(::StringW  className, ::StringW  methodName) ;

static inline ::System::MissingMethodException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25afca8 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Message addr 0x25afcb0 size 0x12c virtual true final false
inline ::StringW get_Message() ;

// Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissingMethodException(MissingMethodException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissingMethodException(MissingMethodException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissingMethodException()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MissingMethodException, 0xa8>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::MissingMethodException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMethodException*, "System", "MissingMethodException");
