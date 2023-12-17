#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OperationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class OperationException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::OperationException);
// Type: UnityEngine.ResourceManagement.Exceptions::OperationException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13963))
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::OperationException*
class CORDL_TYPE OperationException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::UnityEngine::ResourceManagement::Exceptions::OperationException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x2bd0098 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method ToString addr 0x2bd0108 size 0x88 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationException(OperationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationException(OperationException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OperationException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::OperationException, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::OperationException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::OperationException*, "UnityEngine.ResourceManagement.Exceptions", "OperationException");
