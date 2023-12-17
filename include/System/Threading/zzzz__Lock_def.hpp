#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Lock)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Lock;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Lock);
// Type: System.Threading::Lock
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2696))
// CS Name: ::System.Threading::Lock*
class CORDL_TYPE Lock : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _lock offset 0x10
 __declspec(property(get=__get__lock, put=__set__lock)) ::System::Object*  _lock;

constexpr void __set__lock(::System::Object*  value) ;

constexpr ::System::Object* __get__lock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__lock() const;

/// @brief Method Acquire addr 0x261417c size 0x8 virtual false final false
inline void Acquire() ;

/// @brief Method Release addr 0x26141a0 size 0x8 virtual false final false
inline void Release() ;

static inline ::System::Threading::Lock* New_ctor() ;

/// @brief Method .ctor addr 0x26141b0 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Lock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lock(Lock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lock(Lock const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Lock()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Lock, 0x18>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::Lock);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Lock*, "System.Threading", "Lock");
