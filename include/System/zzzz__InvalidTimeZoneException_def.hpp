#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidTimeZoneException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidTimeZoneException;
}
// Write type traits
MARK_REF_PTR_T(::System::InvalidTimeZoneException);
// Type: System::InvalidTimeZoneException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2429))
// CS Name: ::System::InvalidTimeZoneException*
class CORDL_TYPE InvalidTimeZoneException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::System::InvalidTimeZoneException* New_ctor() ;

/// @brief Method .ctor addr 0x25adbdc size 0x58 virtual false final false
inline void _ctor() ;

static inline ::System::InvalidTimeZoneException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25adc34 size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::InvalidTimeZoneException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25adc9c size 0x80 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTimeZoneException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidTimeZoneException(InvalidTimeZoneException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidTimeZoneException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidTimeZoneException(InvalidTimeZoneException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvalidTimeZoneException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvalidTimeZoneException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::InvalidTimeZoneException);
DEFINE_IL2CPP_ARG_TYPE(::System::InvalidTimeZoneException*, "System", "InvalidTimeZoneException");
