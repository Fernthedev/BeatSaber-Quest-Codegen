#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnhandledExceptionHandler)
namespace UnityEngine {
class __UnhandledExceptionHandler____c;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace System {
class Object;
}
namespace System {
class UnhandledExceptionEventArgs;
}
// Forward declare root types
namespace UnityEngine {
class UnhandledExceptionHandler;
}
namespace UnityEngine {
class __UnhandledExceptionHandler____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnhandledExceptionHandler);
MARK_REF_PTR_T(::UnityEngine::__UnhandledExceptionHandler____c);
// Type: ::<>c
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10226))
// CS Name: ::UnhandledExceptionHandler::<>c*
class CORDL_TYPE __UnhandledExceptionHandler____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::__UnhandledExceptionHandler____c*  value) ;

static inline ::UnityEngine::__UnhandledExceptionHandler____c* getStaticF___9() ;

static inline void setStaticF___9__0_0(::System::UnhandledExceptionEventHandler*  value) ;

static inline ::System::UnhandledExceptionEventHandler* getStaticF___9__0_0() ;

static inline ::UnityEngine::__UnhandledExceptionHandler____c* New_ctor() ;

/// @brief Method .ctor addr 0x2cd3560 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <RegisterUECatcher>b__0_0 addr 0x2cd3568 size 0xb4 virtual false final false
inline void _RegisterUECatcher_b__0_0(::System::Object*  sender, ::System::UnhandledExceptionEventArgs*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "__UnhandledExceptionHandler____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UnhandledExceptionHandler____c(__UnhandledExceptionHandler____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UnhandledExceptionHandler____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UnhandledExceptionHandler____c(__UnhandledExceptionHandler____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UnhandledExceptionHandler____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__0_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__UnhandledExceptionHandler____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::UnhandledExceptionHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10227))
// CS Name: ::UnityEngine::UnhandledExceptionHandler*
class CORDL_TYPE UnhandledExceptionHandler : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::__UnhandledExceptionHandler____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method RegisterUECatcher addr 0x2cd3404 size 0xf8 virtual false final false
static inline void RegisterUECatcher() ;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnhandledExceptionHandler(UnhandledExceptionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnhandledExceptionHandler(UnhandledExceptionHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnhandledExceptionHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnhandledExceptionHandler, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::UnhandledExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnhandledExceptionHandler*, "UnityEngine", "UnhandledExceptionHandler");
NEED_NO_BOX(::UnityEngine::__UnhandledExceptionHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__UnhandledExceptionHandler____c*, "UnityEngine", "UnhandledExceptionHandler/<>c");
