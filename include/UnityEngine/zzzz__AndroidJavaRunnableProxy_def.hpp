#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
CORDL_MODULE_EXPORT(AndroidJavaRunnableProxy)
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnableProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaRunnableProxy);
// Type: UnityEngine::AndroidJavaRunnableProxy
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14911))
// CS Name: ::UnityEngine::AndroidJavaRunnableProxy*
class CORDL_TYPE AndroidJavaRunnableProxy : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::AndroidJavaProxy)]{};

/// @brief Field mRunnable offset 0x20
 __declspec(property(get=__get_mRunnable, put=__set_mRunnable)) ::UnityEngine::AndroidJavaRunnable*  mRunnable;

constexpr void __set_mRunnable(::UnityEngine::AndroidJavaRunnable*  value) ;

constexpr ::UnityEngine::AndroidJavaRunnable* __get_mRunnable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaRunnable*> __get_mRunnable() const;

static inline ::UnityEngine::AndroidJavaRunnableProxy* New_ctor(::UnityEngine::AndroidJavaRunnable*  runnable) ;

/// @brief Method .ctor addr 0x2c840b0 size 0x80 virtual false final false
inline void _ctor(::UnityEngine::AndroidJavaRunnable*  runnable) ;

/// @brief Method run addr 0x2c841ac size 0x24 virtual false final false
inline void run() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJavaRunnableProxy(AndroidJavaRunnableProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJavaRunnableProxy(AndroidJavaRunnableProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidJavaRunnableProxy()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaRunnableProxy, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnableProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnableProxy*, "UnityEngine", "AndroidJavaRunnableProxy");
