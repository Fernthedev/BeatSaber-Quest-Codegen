#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeThread)
namespace System::Threading {
class Thread;
}
namespace System::Threading {
class ParameterizedThreadStart;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class RuntimeThread;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::RuntimeThread);
// Type: Internal.Runtime.Augments::RuntimeThread
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2308))
// CS Name: ::Internal.Runtime.Augments::RuntimeThread*
class CORDL_TYPE RuntimeThread : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field thread offset 0x10
 __declspec(property(get=__get_thread, put=__set_thread)) ::System::Threading::Thread*  thread;

 __declspec(property(put=set_IsBackground)) bool  IsBackground;

static inline void setStaticF_OptimalMaxSpinWaitsPerSpinIteration(int32_t  value) ;

static inline int32_t getStaticF_OptimalMaxSpinWaitsPerSpinIteration() ;

constexpr void __set_thread(::System::Threading::Thread*  value) ;

constexpr ::System::Threading::Thread* __get_thread() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> __get_thread() const;

static inline ::Internal::Runtime::Augments::RuntimeThread* New_ctor(::System::Threading::Thread*  t) ;

/// @brief Method .ctor addr 0x242c728 size 0x28 virtual false final false
inline void _ctor(::System::Threading::Thread*  t) ;

/// @brief Method Create addr 0x242c750 size 0xa4 virtual false final false
static inline ::Internal::Runtime::Augments::RuntimeThread* Create(::System::Threading::ParameterizedThreadStart*  start, int32_t  maxStackSize) ;

/// @brief Method set_IsBackground addr 0x242c7f4 size 0x20 virtual false final false
inline void set_IsBackground(bool  value) ;

/// @brief Method Start addr 0x242c814 size 0x1c virtual false final false
inline void Start(::System::Object*  state) ;

/// @brief Method Sleep addr 0x242c830 size 0x8 virtual false final false
static inline void Sleep(int32_t  millisecondsTimeout) ;

/// @brief Method Yield addr 0x242c838 size 0x8 virtual false final false
static inline bool Yield() ;

/// @brief Method SpinWait addr 0x242c840 size 0x18 virtual false final false
static inline bool SpinWait(int32_t  iterations) ;

/// @brief Method GetCurrentProcessorId addr 0x242c858 size 0x8 virtual false final false
static inline int32_t GetCurrentProcessorId() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeThread", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeThread(RuntimeThread && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeThread", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeThread(RuntimeThread const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeThread()  = default;
public:


// Fields

// Static field OptimalMaxSpinWaitsPerSpinIteration


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::RuntimeThread, 0x18>, "Size mismatch!");

} // namespace end def Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::RuntimeThread);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::RuntimeThread*, "Internal.Runtime.Augments", "RuntimeThread");
