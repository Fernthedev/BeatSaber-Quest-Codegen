#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncComputeOperation)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeOperation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncComputeOperation);
// Type: ::AsyncComputeOperation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12679))
// CS Name: ::AsyncComputeOperation*
class CORDL_TYPE AsyncComputeOperation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _timeoutMs offset 0x10
 __declspec(property(get=__get__timeoutMs, put=__set__timeoutMs)) int32_t  _timeoutMs;

/// @brief Field _stopwatch offset 0x18
 __declspec(property(get=__get__stopwatch, put=__set__stopwatch)) ::System::Diagnostics::Stopwatch*  _stopwatch;

 __declspec(property(get=get_elapsedTime)) double_t  elapsedTime;

 __declspec(property(get=get_hasTimedOut)) bool  hasTimedOut;

constexpr void __set__timeoutMs(int32_t  value) ;

constexpr int32_t& __get__timeoutMs() ;

constexpr int32_t const& __get__timeoutMs() const;

constexpr void __set__stopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr ::System::Diagnostics::Stopwatch* __get__stopwatch() ;

constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> __get__stopwatch() const;

/// @brief Method get_elapsedTime addr 0xe292b8 size 0x84 virtual false final false
inline double_t get_elapsedTime() ;

/// @brief Method get_hasTimedOut addr 0xe2933c size 0x30 virtual false final false
inline bool get_hasTimedOut() ;

static inline ::GlobalNamespace::AsyncComputeOperation* New_ctor(int32_t  timeoutMs) ;

/// @brief Method .ctor addr 0xe2936c size 0x88 virtual false final false
inline void _ctor(int32_t  timeoutMs) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute(bool  disposed) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncComputeOperation(AsyncComputeOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncComputeOperation(AsyncComputeOperation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncComputeOperation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncComputeOperation, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeOperation*, "", "AsyncComputeOperation");
