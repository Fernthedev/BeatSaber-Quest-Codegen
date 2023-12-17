#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInitializationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TypeInitializationException;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeInitializationException);
// Type: System::TypeInitializationException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2497))
// CS Name: ::System::TypeInitializationException*
class CORDL_TYPE TypeInitializationException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::SystemException)]{};

/// @brief Field _typeName offset 0x90
 __declspec(property(get=__get__typeName, put=__set__typeName)) ::StringW  _typeName;

 __declspec(property(get=get_TypeName)) ::StringW  TypeName;

constexpr void __set__typeName(::StringW  value) ;

constexpr ::StringW& __get__typeName() ;

constexpr ::StringW const& __get__typeName() const;

static inline ::System::TypeInitializationException* New_ctor() ;

/// @brief Method .ctor addr 0x25cb1b0 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::System::TypeInitializationException* New_ctor(::StringW  fullTypeName, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x25cb208 size 0x80 virtual false final false
inline void _ctor(::StringW  fullTypeName, ::System::Exception*  innerException) ;

static inline ::System::TypeInitializationException* New_ctor(::StringW  fullTypeName, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x25cb288 size 0x38 virtual false final false
inline void _ctor(::StringW  fullTypeName, ::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::TypeInitializationException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25cb2c0 size 0x84 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x25cb344 size 0x108 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_TypeName addr 0x25cb44c size 0x54 virtual false final false
inline ::StringW get_TypeName() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeInitializationException(TypeInitializationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeInitializationException(TypeInitializationException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeInitializationException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeInitializationException, 0x98>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::TypeInitializationException);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeInitializationException*, "System", "TypeInitializationException");
