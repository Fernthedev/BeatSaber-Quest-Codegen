#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvalidEnumArgumentException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class InvalidEnumArgumentException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InvalidEnumArgumentException);
// Type: System.ComponentModel::InvalidEnumArgumentException
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9399))
// CS Name: ::System.ComponentModel::InvalidEnumArgumentException*
class CORDL_TYPE InvalidEnumArgumentException : public ::System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::ArgumentException)]{};

static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor() ;

/// @brief Method .ctor addr 0x2904e34 size 0xc virtual false final false
inline void _ctor() ;

static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x2904e40 size 0x8 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor(::StringW  argumentName, int32_t  invalidValue, ::System::Type*  enumClass) ;

/// @brief Method .ctor addr 0x2904e48 size 0xe4 virtual false final false
inline void _ctor(::StringW  argumentName, int32_t  invalidValue, ::System::Type*  enumClass) ;

static inline ::System::ComponentModel::InvalidEnumArgumentException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2904f2c size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidEnumArgumentException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidEnumArgumentException(InvalidEnumArgumentException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidEnumArgumentException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidEnumArgumentException(InvalidEnumArgumentException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidEnumArgumentException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InvalidEnumArgumentException, 0x98>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InvalidEnumArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InvalidEnumArgumentException*, "System.ComponentModel", "InvalidEnumArgumentException");
