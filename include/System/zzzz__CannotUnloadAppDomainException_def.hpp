#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CannotUnloadAppDomainException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class CannotUnloadAppDomainException;
}
// Write type traits
MARK_REF_PTR_T(::System::CannotUnloadAppDomainException);
// Type: System::CannotUnloadAppDomainException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2525))
// CS Name: ::System::CannotUnloadAppDomainException*
class CORDL_TYPE CannotUnloadAppDomainException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::CannotUnloadAppDomainException* New_ctor() ;

/// @brief Method .ctor addr 0x25d12f8 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::System::CannotUnloadAppDomainException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x25d1350 size 0x20 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::CannotUnloadAppDomainException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25d1370 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "CannotUnloadAppDomainException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CannotUnloadAppDomainException(CannotUnloadAppDomainException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CannotUnloadAppDomainException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CannotUnloadAppDomainException(CannotUnloadAppDomainException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CannotUnloadAppDomainException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::CannotUnloadAppDomainException, 0x90>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::CannotUnloadAppDomainException);
DEFINE_IL2CPP_ARG_TYPE(::System::CannotUnloadAppDomainException*, "System", "CannotUnloadAppDomainException");
