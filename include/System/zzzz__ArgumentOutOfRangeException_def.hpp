#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArgumentOutOfRangeException)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class ArgumentOutOfRangeException;
}
// Write type traits
MARK_REF_PTR_T(::System::ArgumentOutOfRangeException);
// Type: System::ArgumentOutOfRangeException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2346))
// CS Name: ::System::ArgumentOutOfRangeException*
class CORDL_TYPE ArgumentOutOfRangeException : public ::System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::ArgumentException)]{};

/// @brief Field _actualValue offset 0x98
 __declspec(property(get=__get__actualValue, put=__set__actualValue)) ::System::Object*  _actualValue;

 __declspec(property(get=get_Message)) ::StringW  Message;

constexpr void __set__actualValue(::System::Object*  value) ;

constexpr ::System::Object* __get__actualValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__actualValue() const;

static inline ::System::ArgumentOutOfRangeException* New_ctor() ;

/// @brief Method .ctor addr 0x2520d2c size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::StringW  paramName) ;

/// @brief Method .ctor addr 0x2520d88 size 0x6c virtual false final false
inline void _ctor(::StringW  paramName) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::StringW  paramName, ::StringW  message) ;

/// @brief Method .ctor addr 0x251c910 size 0x38 virtual false final false
inline void _ctor(::StringW  paramName, ::StringW  message) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::StringW  paramName, ::System::Object*  actualValue, ::StringW  message) ;

/// @brief Method .ctor addr 0x251da30 size 0x3c virtual false final false
inline void _ctor(::StringW  paramName, ::System::Object*  actualValue, ::StringW  message) ;

static inline ::System::ArgumentOutOfRangeException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2520df4 size 0xd8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x2520ecc size 0xd8 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Message addr 0x2520fa4 size 0xac virtual true final false
inline ::StringW get_Message() ;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentOutOfRangeException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArgumentOutOfRangeException(ArgumentOutOfRangeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentOutOfRangeException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArgumentOutOfRangeException(ArgumentOutOfRangeException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArgumentOutOfRangeException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgumentOutOfRangeException, 0xa0>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ArgumentOutOfRangeException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentOutOfRangeException*, "System", "ArgumentOutOfRangeException");
