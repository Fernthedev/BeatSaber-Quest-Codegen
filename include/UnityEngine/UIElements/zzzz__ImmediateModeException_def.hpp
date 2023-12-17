#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(ImmediateModeException)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ImmediateModeException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ImmediateModeException);
// Type: UnityEngine.UIElements::ImmediateModeException
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6857))
// CS Name: ::UnityEngine.UIElements::ImmediateModeException*
class CORDL_TYPE ImmediateModeException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::UnityEngine::UIElements::ImmediateModeException* New_ctor(::System::Exception*  inner) ;

/// @brief Method .ctor addr 0x2dc7f70 size 0x80 virtual false final false
inline void _ctor(::System::Exception*  inner) ;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateModeException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmediateModeException(ImmediateModeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateModeException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmediateModeException(ImmediateModeException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ImmediateModeException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ImmediateModeException, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ImmediateModeException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ImmediateModeException*, "UnityEngine.UIElements", "ImmediateModeException");
