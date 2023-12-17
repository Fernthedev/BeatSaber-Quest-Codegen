#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_ThreadedTask)
namespace System::Threading {
struct ThreadPriority;
}
namespace System {
class Object;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ThreadedTask;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ThreadedTask);
// Type: HoudiniEngineUnity::HEU_ThreadedTask
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9809))
// CS Name: ::HoudiniEngineUnity::HEU_ThreadedTask*
class CORDL_TYPE HEU_ThreadedTask : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _isComplete offset 0x10
 __declspec(property(get=__get__isComplete, put=__set__isComplete)) bool  _isComplete;

/// @brief Field _isActive offset 0x11
 __declspec(property(get=__get__isActive, put=__set__isActive)) bool  _isActive;

/// @brief Field _stopRequested offset 0x12
 __declspec(property(get=__get__stopRequested, put=__set__stopRequested)) bool  _stopRequested;

/// @brief Field _lockHandle offset 0x18
 __declspec(property(get=__get__lockHandle, put=__set__lockHandle)) ::System::Object*  _lockHandle;

/// @brief Field _thread offset 0x20
 __declspec(property(get=__get__thread, put=__set__thread)) ::System::Threading::Thread*  _thread;

/// @brief Field _priority offset 0x28
 __declspec(property(get=__get__priority, put=__set__priority)) ::System::Threading::ThreadPriority  _priority;

/// @brief Field _isBackground offset 0x2c
 __declspec(property(get=__get__isBackground, put=__set__isBackground)) bool  _isBackground;

/// @brief Field _name offset 0x30
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

 __declspec(property(get=get_TaskName)) ::StringW  TaskName;

 __declspec(property(get=get_IsComplete, put=set_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

 __declspec(property(get=get_StopRequested, put=set_StopRequested)) bool  StopRequested;

 __declspec(property(get=get_Priority, put=set_Priority)) ::System::Threading::ThreadPriority  Priority;

 __declspec(property(get=get_IsBackground, put=set_IsBackground)) bool  IsBackground;

constexpr void __set__isComplete(bool  value) ;

constexpr bool& __get__isComplete() ;

constexpr bool const& __get__isComplete() const;

constexpr void __set__isActive(bool  value) ;

constexpr bool& __get__isActive() ;

constexpr bool const& __get__isActive() const;

constexpr void __set__stopRequested(bool  value) ;

constexpr bool& __get__stopRequested() ;

constexpr bool const& __get__stopRequested() const;

constexpr void __set__lockHandle(::System::Object*  value) ;

constexpr ::System::Object* __get__lockHandle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__lockHandle() const;

constexpr void __set__thread(::System::Threading::Thread*  value) ;

constexpr ::System::Threading::Thread* __get__thread() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> __get__thread() const;

constexpr void __set__priority(::System::Threading::ThreadPriority  value) ;

constexpr ::System::Threading::ThreadPriority& __get__priority() ;

constexpr ::System::Threading::ThreadPriority const& __get__priority() const;

constexpr void __set__isBackground(bool  value) ;

constexpr bool& __get__isBackground() ;

constexpr bool const& __get__isBackground() const;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

/// @brief Method Start addr 0x21abda0 size 0x13c virtual true final false
inline void Start() ;

/// @brief Method Stop addr 0x21ac05c size 0x3c virtual true final false
inline void Stop() ;

/// @brief Method Abort addr 0x21ac220 size 0x34 virtual true final false
inline void Abort() ;

/// @brief Method Reset addr 0x21ac254 size 0x84 virtual true final false
inline void Reset() ;

/// @brief Method Update addr 0x21ac2d8 size 0x58 virtual true final false
inline void Update() ;

/// @brief Method DoWork addr 0x21ac4c0 size 0x4 virtual true final false
inline void DoWork() ;

/// @brief Method OnComplete addr 0x21ac4c4 size 0x4 virtual true final false
inline void OnComplete() ;

/// @brief Method OnStopped addr 0x21ac4c8 size 0x4 virtual true final false
inline void OnStopped() ;

/// @brief Method CleanUp addr 0x21ac4cc size 0x4 virtual true final false
inline void CleanUp() ;

/// @brief Method Run addr 0x21ac4d0 size 0x24 virtual false final false
inline void Run() ;

/// @brief Method get_TaskName addr 0x21ac4f4 size 0x8 virtual false final false
inline ::StringW get_TaskName() ;

/// @brief Method get_IsComplete addr 0x21ac098 size 0xc8 virtual false final false
inline bool get_IsComplete() ;

/// @brief Method set_IsComplete addr 0x21abf9c size 0xc0 virtual false final false
inline void set_IsComplete(bool  value) ;

/// @brief Method get_IsActive addr 0x21ac330 size 0xc8 virtual false final false
inline bool get_IsActive() ;

/// @brief Method set_IsActive addr 0x21abedc size 0xc0 virtual false final false
inline void set_IsActive(bool  value) ;

/// @brief Method get_StopRequested addr 0x21ac3f8 size 0xc8 virtual false final false
inline bool get_StopRequested() ;

/// @brief Method set_StopRequested addr 0x21ac160 size 0xc0 virtual false final false
inline void set_StopRequested(bool  value) ;

/// @brief Method get_Priority addr 0x21ac4fc size 0x8 virtual false final false
inline ::System::Threading::ThreadPriority get_Priority() ;

/// @brief Method set_Priority addr 0x21ac504 size 0x8 virtual false final false
inline void set_Priority(::System::Threading::ThreadPriority  value) ;

/// @brief Method get_IsBackground addr 0x21ac50c size 0x8 virtual false final false
inline bool get_IsBackground() ;

/// @brief Method set_IsBackground addr 0x21ac514 size 0xc virtual false final false
inline void set_IsBackground(bool  value) ;

static inline ::HoudiniEngineUnity::HEU_ThreadedTask* New_ctor() ;

/// @brief Method .ctor addr 0x21ac520 size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ThreadedTask(HEU_ThreadedTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ThreadedTask(HEU_ThreadedTask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ThreadedTask()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ThreadedTask, 0x38>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadedTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadedTask*, "HoudiniEngineUnity", "HEU_ThreadedTask");
