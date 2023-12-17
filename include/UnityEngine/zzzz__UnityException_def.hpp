#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace UnityEngine {
class UnityException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnityException);
// Type: UnityEngine::UnityException
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10212))
// CS Name: ::UnityEngine::UnityException*
class CORDL_TYPE UnityException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::UnityEngine::UnityException* New_ctor() ;

/// @brief Method .ctor addr 0x2cd2664 size 0x80 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::UnityException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x2ccf7d4 size 0x78 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::UnityEngine::UnityException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2cd26e4 size 0x80 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityException(UnityException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityException(UnityException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityException, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::UnityException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityException*, "UnityEngine", "UnityException");
