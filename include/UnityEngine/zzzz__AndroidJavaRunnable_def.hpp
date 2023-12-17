#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaRunnable)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaRunnable);
// Type: UnityEngine::AndroidJavaRunnable
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14908))
// CS Name: ::UnityEngine::AndroidJavaRunnable*
class CORDL_TYPE AndroidJavaRunnable : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::AndroidJavaRunnable* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2c83da4 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2c83e60 size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJavaRunnable(AndroidJavaRunnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJavaRunnable(AndroidJavaRunnable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidJavaRunnable()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaRunnable, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnable*, "UnityEngine", "AndroidJavaRunnable");
