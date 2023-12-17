#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotSupportedException)
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
class NotSupportedException;
}
// Write type traits
MARK_REF_PTR_T(::System::NotSupportedException);
// Type: System::NotSupportedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2446))
// CS Name: ::System::NotSupportedException*
class CORDL_TYPE NotSupportedException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::NotSupportedException* New_ctor() ;

/// @brief Method .ctor addr 0x25afef4 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::NotSupportedException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25a8e44 size 0x24 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::NotSupportedException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x25aff50 size 0x24 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::NotSupportedException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25aff74 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotSupportedException(NotSupportedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotSupportedException(NotSupportedException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotSupportedException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotSupportedException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::NotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(::System::NotSupportedException*, "System", "NotSupportedException");
