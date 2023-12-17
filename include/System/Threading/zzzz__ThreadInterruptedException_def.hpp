#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
CORDL_MODULE_EXPORT(ThreadInterruptedException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading {
class ThreadInterruptedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadInterruptedException);
// Type: System.Threading::ThreadInterruptedException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2726))
// CS Name: ::System.Threading::ThreadInterruptedException*
class CORDL_TYPE ThreadInterruptedException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::SystemException)]{};

static inline ::System::Threading::ThreadInterruptedException* New_ctor() ;

/// @brief Method .ctor addr 0x261a428 size 0x7c virtual false final false
inline void _ctor() ;

static inline ::System::Threading::ThreadInterruptedException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x261a4a4 size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadInterruptedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadInterruptedException(ThreadInterruptedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadInterruptedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadInterruptedException(ThreadInterruptedException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadInterruptedException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadInterruptedException, 0x90>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::ThreadInterruptedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadInterruptedException*, "System.Threading", "ThreadInterruptedException");
