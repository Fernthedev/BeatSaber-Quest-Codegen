#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LockQueue)
namespace System::Threading {
class ReaderWriterLock;
}
// Forward declare root types
namespace System::Threading {
class LockQueue;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::LockQueue);
// Type: System.Threading::LockQueue
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2742))
// CS Name: ::System.Threading::LockQueue*
class CORDL_TYPE LockQueue : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field rwlock offset 0x10
 __declspec(property(get=__get_rwlock, put=__set_rwlock)) ::System::Threading::ReaderWriterLock*  rwlock;

/// @brief Field lockCount offset 0x18
 __declspec(property(get=__get_lockCount, put=__set_lockCount)) int32_t  lockCount;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set_rwlock(::System::Threading::ReaderWriterLock*  value) ;

constexpr ::System::Threading::ReaderWriterLock* __get_rwlock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLock*> __get_rwlock() const;

constexpr void __set_lockCount(int32_t  value) ;

constexpr int32_t& __get_lockCount() ;

constexpr int32_t const& __get_lockCount() const;

static inline ::System::Threading::LockQueue* New_ctor(::System::Threading::ReaderWriterLock*  rwlock) ;

/// @brief Method .ctor addr 0x261df7c size 0x28 virtual false final false
inline void _ctor(::System::Threading::ReaderWriterLock*  rwlock) ;

/// @brief Method Wait addr 0x261dfa4 size 0x1b4 virtual false final false
inline bool Wait(int32_t  timeout) ;

/// @brief Method get_IsEmpty addr 0x261e158 size 0xc0 virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Pulse addr 0x261e218 size 0xb8 virtual false final false
inline void Pulse() ;

// Ctor Parameters [CppParam { name: "", ty: "LockQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LockQueue(LockQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LockQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LockQueue(LockQueue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LockQueue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::LockQueue, 0x20>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::LockQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockQueue*, "System.Threading", "LockQueue");
