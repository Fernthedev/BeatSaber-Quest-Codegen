#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MarshalDirectiveException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MarshalDirectiveException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::MarshalDirectiveException);
// Type: System.Runtime.InteropServices::MarshalDirectiveException
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3304))
// CS Name: ::System.Runtime.InteropServices::MarshalDirectiveException*
class CORDL_TYPE MarshalDirectiveException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::Runtime::InteropServices::MarshalDirectiveException* New_ctor() ;

/// @brief Method .ctor addr 0x24d6794 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::Runtime::InteropServices::MarshalDirectiveException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x24d67f0 size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::Runtime::InteropServices::MarshalDirectiveException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24d6814 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "MarshalDirectiveException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarshalDirectiveException(MarshalDirectiveException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarshalDirectiveException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarshalDirectiveException(MarshalDirectiveException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MarshalDirectiveException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::MarshalDirectiveException, 0x90>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::MarshalDirectiveException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MarshalDirectiveException*, "System.Runtime.InteropServices", "MarshalDirectiveException");
