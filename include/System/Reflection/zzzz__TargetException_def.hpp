#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TargetException)
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
namespace System::Reflection {
class TargetException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TargetException);
// Type: System.Reflection::TargetException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3497))
// CS Name: ::System.Reflection::TargetException*
class CORDL_TYPE TargetException : public ::System::ApplicationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::ApplicationException)]{};

static inline ::System::Reflection::TargetException* New_ctor() ;

/// @brief Method .ctor addr 0x24ec668 size 0x2c virtual false final false
inline void _ctor() ;

static inline ::System::Reflection::TargetException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x24ec694 size 0x28 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::Reflection::TargetException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor addr 0x24ec6bc size 0x24 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

static inline ::System::Reflection::TargetException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24ec6e0 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "TargetException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetException(TargetException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetException(TargetException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TargetException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TargetException, 0x90>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::TargetException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TargetException*, "System.Reflection", "TargetException");
