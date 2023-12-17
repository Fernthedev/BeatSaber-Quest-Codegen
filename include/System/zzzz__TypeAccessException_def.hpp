#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
CORDL_MODULE_EXPORT(TypeAccessException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TypeAccessException;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeAccessException);
// Type: System::TypeAccessException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2495))
// CS Name: ::System::TypeAccessException*
class CORDL_TYPE TypeAccessException : public ::System::TypeLoadException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::TypeLoadException)]{};

static inline ::System::TypeAccessException* New_ctor() ;

/// @brief Method .ctor addr 0x25cb14c size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::TypeAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25cb1a8 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "TypeAccessException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeAccessException(TypeAccessException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeAccessException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeAccessException(TypeAccessException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeAccessException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeAccessException, 0xb0>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::TypeAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeAccessException*, "System", "TypeAccessException");
