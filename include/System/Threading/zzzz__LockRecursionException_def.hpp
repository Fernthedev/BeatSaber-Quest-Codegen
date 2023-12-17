#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LockRecursionException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class LockRecursionException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::LockRecursionException);
// Type: System.Threading::LockRecursionException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2664))
// CS Name: ::System.Threading::LockRecursionException*
class CORDL_TYPE LockRecursionException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::System::Threading::LockRecursionException* New_ctor() ;

/// @brief Method .ctor addr 0x260fc90 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::System::Threading::LockRecursionException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x260fce8 size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::System::Threading::LockRecursionException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x260fd50 size 0x80 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "LockRecursionException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LockRecursionException(LockRecursionException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockRecursionException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockRecursionException(LockRecursionException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LockRecursionException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LockRecursionException, 0x90>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::LockRecursionException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockRecursionException*, "System.Threading", "LockRecursionException");
