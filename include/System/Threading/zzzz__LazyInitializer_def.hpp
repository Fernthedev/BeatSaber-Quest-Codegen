#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(LazyInitializer)
namespace System {
class Object;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace System::Threading {
class LazyInitializer;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::LazyInitializer);
// Type: System.Threading::LazyInitializer
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2662))
// CS Name: ::System.Threading::LazyInitializer*
class CORDL_TYPE LazyInitializer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method EnsureInitialized addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T EnsureInitialized(ByRef<T>  target) ;

/// @brief Method EnsureInitializedCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T EnsureInitializedCore(ByRef<T>  target) ;

/// @brief Method EnsureInitialized addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T EnsureInitialized(ByRef<T>  target, ::System::Func_1<T>*  valueFactory) ;

/// @brief Method EnsureInitializedCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T EnsureInitializedCore(ByRef<T>  target, ::System::Func_1<T>*  valueFactory) ;

/// @brief Method EnsureInitialized addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T EnsureInitialized(ByRef<T>  target, ByRef<::System::Object*>  syncLock, ::System::Func_1<T>*  valueFactory) ;

/// @brief Method EnsureInitializedCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T EnsureInitializedCore(ByRef<T>  target, ByRef<::System::Object*>  syncLock, ::System::Func_1<T>*  valueFactory) ;

/// @brief Method EnsureLockInitialized addr 0x260fc10 size 0x80 virtual false final false
static inline ::System::Object* EnsureLockInitialized(ByRef<::System::Object*>  syncLock) ;

// Ctor Parameters [CppParam { name: "", ty: "LazyInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyInitializer(LazyInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyInitializer(LazyInitializer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LazyInitializer()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LazyInitializer, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::LazyInitializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LazyInitializer*, "System.Threading", "LazyInitializer");
