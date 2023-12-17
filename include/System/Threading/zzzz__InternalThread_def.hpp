#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalThread)
namespace System::Threading {
struct ThreadState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class InternalThread;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::InternalThread);
// Type: System.Threading::InternalThread
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3354))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2747))
// CS Name: ::System.Threading::InternalThread*
class CORDL_TYPE InternalThread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x128};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x128 - sizeof(::System::Runtime::ConstrainedExecution::CriticalFinalizerObject)]{};

/// @brief Field lock_thread_id offset 0x10
 __declspec(property(get=__get_lock_thread_id, put=__set_lock_thread_id)) int32_t  lock_thread_id;

/// @brief Field handle offset 0x18
 __declspec(property(get=__get_handle, put=__set_handle)) ::cordl_internals::intptr_t  handle;

/// @brief Field native_handle offset 0x20
 __declspec(property(get=__get_native_handle, put=__set_native_handle)) ::cordl_internals::intptr_t  native_handle;

/// @brief Field name_chars offset 0x28
 __declspec(property(get=__get_name_chars, put=__set_name_chars)) ::cordl_internals::intptr_t  name_chars;

/// @brief Field name_free offset 0x30
 __declspec(property(get=__get_name_free, put=__set_name_free)) int32_t  name_free;

/// @brief Field name_length offset 0x34
 __declspec(property(get=__get_name_length, put=__set_name_length)) int32_t  name_length;

/// @brief Field state offset 0x38
 __declspec(property(get=__get_state, put=__set_state)) ::System::Threading::ThreadState  state;

/// @brief Field abort_exc offset 0x40
 __declspec(property(get=__get_abort_exc, put=__set_abort_exc)) ::System::Object*  abort_exc;

/// @brief Field abort_state_handle offset 0x48
 __declspec(property(get=__get_abort_state_handle, put=__set_abort_state_handle)) int32_t  abort_state_handle;

/// @brief Field thread_id offset 0x50
 __declspec(property(get=__get_thread_id, put=__set_thread_id)) int64_t  thread_id;

/// @brief Field debugger_thread offset 0x58
 __declspec(property(get=__get_debugger_thread, put=__set_debugger_thread)) ::cordl_internals::intptr_t  debugger_thread;

/// @brief Field static_data offset 0x60
 __declspec(property(get=__get_static_data, put=__set_static_data)) ::cordl_internals::uintptr_t  static_data;

/// @brief Field runtime_thread_info offset 0x68
 __declspec(property(get=__get_runtime_thread_info, put=__set_runtime_thread_info)) ::cordl_internals::intptr_t  runtime_thread_info;

/// @brief Field current_appcontext offset 0x70
 __declspec(property(get=__get_current_appcontext, put=__set_current_appcontext)) ::System::Object*  current_appcontext;

/// @brief Field root_domain_thread offset 0x78
 __declspec(property(get=__get_root_domain_thread, put=__set_root_domain_thread)) ::System::Object*  root_domain_thread;

/// @brief Field _serialized_principal offset 0x80
 __declspec(property(get=__get__serialized_principal, put=__set__serialized_principal)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _serialized_principal;

/// @brief Field _serialized_principal_version offset 0x88
 __declspec(property(get=__get__serialized_principal_version, put=__set__serialized_principal_version)) int32_t  _serialized_principal_version;

/// @brief Field appdomain_refs offset 0x90
 __declspec(property(get=__get_appdomain_refs, put=__set_appdomain_refs)) ::cordl_internals::intptr_t  appdomain_refs;

/// @brief Field interruption_requested offset 0x98
 __declspec(property(get=__get_interruption_requested, put=__set_interruption_requested)) int32_t  interruption_requested;

/// @brief Field longlived offset 0xa0
 __declspec(property(get=__get_longlived, put=__set_longlived)) ::cordl_internals::intptr_t  longlived;

/// @brief Field threadpool_thread offset 0xa8
 __declspec(property(get=__get_threadpool_thread, put=__set_threadpool_thread)) bool  threadpool_thread;

/// @brief Field thread_interrupt_requested offset 0xa9
 __declspec(property(get=__get_thread_interrupt_requested, put=__set_thread_interrupt_requested)) bool  thread_interrupt_requested;

/// @brief Field stack_size offset 0xac
 __declspec(property(get=__get_stack_size, put=__set_stack_size)) int32_t  stack_size;

/// @brief Field apartment_state offset 0xb0
 __declspec(property(get=__get_apartment_state, put=__set_apartment_state)) uint8_t  apartment_state;

/// @brief Field critical_region_level offset 0xb4
 __declspec(property(get=__get_critical_region_level, put=__set_critical_region_level)) int32_t  critical_region_level;

/// @brief Field managed_id offset 0xb8
 __declspec(property(get=__get_managed_id, put=__set_managed_id)) int32_t  managed_id;

/// @brief Field small_id offset 0xbc
 __declspec(property(get=__get_small_id, put=__set_small_id)) int32_t  small_id;

/// @brief Field manage_callback offset 0xc0
 __declspec(property(get=__get_manage_callback, put=__set_manage_callback)) ::cordl_internals::intptr_t  manage_callback;

/// @brief Field flags offset 0xc8
 __declspec(property(get=__get_flags, put=__set_flags)) ::cordl_internals::intptr_t  flags;

/// @brief Field thread_pinning_ref offset 0xd0
 __declspec(property(get=__get_thread_pinning_ref, put=__set_thread_pinning_ref)) ::cordl_internals::intptr_t  thread_pinning_ref;

/// @brief Field abort_protected_block_count offset 0xd8
 __declspec(property(get=__get_abort_protected_block_count, put=__set_abort_protected_block_count)) ::cordl_internals::intptr_t  abort_protected_block_count;

/// @brief Field priority offset 0xe0
 __declspec(property(get=__get_priority, put=__set_priority)) int32_t  priority;

/// @brief Field owned_mutex offset 0xe8
 __declspec(property(get=__get_owned_mutex, put=__set_owned_mutex)) ::cordl_internals::intptr_t  owned_mutex;

/// @brief Field suspended_event offset 0xf0
 __declspec(property(get=__get_suspended_event, put=__set_suspended_event)) ::cordl_internals::intptr_t  suspended_event;

/// @brief Field self_suspended offset 0xf8
 __declspec(property(get=__get_self_suspended, put=__set_self_suspended)) int32_t  self_suspended;

/// @brief Field thread_state offset 0x100
 __declspec(property(get=__get_thread_state, put=__set_thread_state)) ::cordl_internals::intptr_t  thread_state;

/// @brief Field netcore0 offset 0x108
 __declspec(property(get=__get_netcore0, put=__set_netcore0)) ::cordl_internals::intptr_t  netcore0;

/// @brief Field netcore1 offset 0x110
 __declspec(property(get=__get_netcore1, put=__set_netcore1)) ::cordl_internals::intptr_t  netcore1;

/// @brief Field netcore2 offset 0x118
 __declspec(property(get=__get_netcore2, put=__set_netcore2)) ::cordl_internals::intptr_t  netcore2;

/// @brief Field last offset 0x120
 __declspec(property(get=__get_last, put=__set_last)) ::cordl_internals::intptr_t  last;

constexpr void __set_lock_thread_id(int32_t  value) ;

constexpr int32_t& __get_lock_thread_id() ;

constexpr int32_t const& __get_lock_thread_id() const;

constexpr void __set_handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_handle() ;

constexpr ::cordl_internals::intptr_t const& __get_handle() const;

constexpr void __set_native_handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_native_handle() ;

constexpr ::cordl_internals::intptr_t const& __get_native_handle() const;

constexpr void __set_name_chars(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_name_chars() ;

constexpr ::cordl_internals::intptr_t const& __get_name_chars() const;

constexpr void __set_name_free(int32_t  value) ;

constexpr int32_t& __get_name_free() ;

constexpr int32_t const& __get_name_free() const;

constexpr void __set_name_length(int32_t  value) ;

constexpr int32_t& __get_name_length() ;

constexpr int32_t const& __get_name_length() const;

constexpr void __set_state(::System::Threading::ThreadState  value) ;

constexpr ::System::Threading::ThreadState& __get_state() ;

constexpr ::System::Threading::ThreadState const& __get_state() const;

constexpr void __set_abort_exc(::System::Object*  value) ;

constexpr ::System::Object* __get_abort_exc() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_abort_exc() const;

constexpr void __set_abort_state_handle(int32_t  value) ;

constexpr int32_t& __get_abort_state_handle() ;

constexpr int32_t const& __get_abort_state_handle() const;

constexpr void __set_thread_id(int64_t  value) ;

constexpr int64_t& __get_thread_id() ;

constexpr int64_t const& __get_thread_id() const;

constexpr void __set_debugger_thread(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_debugger_thread() ;

constexpr ::cordl_internals::intptr_t const& __get_debugger_thread() const;

constexpr void __set_static_data(::cordl_internals::uintptr_t  value) ;

constexpr ::cordl_internals::uintptr_t& __get_static_data() ;

constexpr ::cordl_internals::uintptr_t const& __get_static_data() const;

constexpr void __set_runtime_thread_info(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_runtime_thread_info() ;

constexpr ::cordl_internals::intptr_t const& __get_runtime_thread_info() const;

constexpr void __set_current_appcontext(::System::Object*  value) ;

constexpr ::System::Object* __get_current_appcontext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_current_appcontext() const;

constexpr void __set_root_domain_thread(::System::Object*  value) ;

constexpr ::System::Object* __get_root_domain_thread() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_root_domain_thread() const;

constexpr void __set__serialized_principal(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__serialized_principal() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__serialized_principal() const;

constexpr void __set__serialized_principal_version(int32_t  value) ;

constexpr int32_t& __get__serialized_principal_version() ;

constexpr int32_t const& __get__serialized_principal_version() const;

constexpr void __set_appdomain_refs(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_appdomain_refs() ;

constexpr ::cordl_internals::intptr_t const& __get_appdomain_refs() const;

constexpr void __set_interruption_requested(int32_t  value) ;

constexpr int32_t& __get_interruption_requested() ;

constexpr int32_t const& __get_interruption_requested() const;

constexpr void __set_longlived(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_longlived() ;

constexpr ::cordl_internals::intptr_t const& __get_longlived() const;

constexpr void __set_threadpool_thread(bool  value) ;

constexpr bool& __get_threadpool_thread() ;

constexpr bool const& __get_threadpool_thread() const;

constexpr void __set_thread_interrupt_requested(bool  value) ;

constexpr bool& __get_thread_interrupt_requested() ;

constexpr bool const& __get_thread_interrupt_requested() const;

constexpr void __set_stack_size(int32_t  value) ;

constexpr int32_t& __get_stack_size() ;

constexpr int32_t const& __get_stack_size() const;

constexpr void __set_apartment_state(uint8_t  value) ;

constexpr uint8_t& __get_apartment_state() ;

constexpr uint8_t const& __get_apartment_state() const;

constexpr void __set_critical_region_level(int32_t  value) ;

constexpr int32_t& __get_critical_region_level() ;

constexpr int32_t const& __get_critical_region_level() const;

constexpr void __set_managed_id(int32_t  value) ;

constexpr int32_t& __get_managed_id() ;

constexpr int32_t const& __get_managed_id() const;

constexpr void __set_small_id(int32_t  value) ;

constexpr int32_t& __get_small_id() ;

constexpr int32_t const& __get_small_id() const;

constexpr void __set_manage_callback(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_manage_callback() ;

constexpr ::cordl_internals::intptr_t const& __get_manage_callback() const;

constexpr void __set_flags(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_flags() ;

constexpr ::cordl_internals::intptr_t const& __get_flags() const;

constexpr void __set_thread_pinning_ref(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_thread_pinning_ref() ;

constexpr ::cordl_internals::intptr_t const& __get_thread_pinning_ref() const;

constexpr void __set_abort_protected_block_count(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_abort_protected_block_count() ;

constexpr ::cordl_internals::intptr_t const& __get_abort_protected_block_count() const;

constexpr void __set_priority(int32_t  value) ;

constexpr int32_t& __get_priority() ;

constexpr int32_t const& __get_priority() const;

constexpr void __set_owned_mutex(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_owned_mutex() ;

constexpr ::cordl_internals::intptr_t const& __get_owned_mutex() const;

constexpr void __set_suspended_event(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_suspended_event() ;

constexpr ::cordl_internals::intptr_t const& __get_suspended_event() const;

constexpr void __set_self_suspended(int32_t  value) ;

constexpr int32_t& __get_self_suspended() ;

constexpr int32_t const& __get_self_suspended() const;

constexpr void __set_thread_state(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_thread_state() ;

constexpr ::cordl_internals::intptr_t const& __get_thread_state() const;

constexpr void __set_netcore0(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_netcore0() ;

constexpr ::cordl_internals::intptr_t const& __get_netcore0() const;

constexpr void __set_netcore1(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_netcore1() ;

constexpr ::cordl_internals::intptr_t const& __get_netcore1() const;

constexpr void __set_netcore2(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_netcore2() ;

constexpr ::cordl_internals::intptr_t const& __get_netcore2() const;

constexpr void __set_last(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_last() ;

constexpr ::cordl_internals::intptr_t const& __get_last() const;

/// @brief Method Thread_free_internal addr 0x261f804 size 0x4 virtual false final false
inline void Thread_free_internal() ;

/// @brief Method Finalize addr 0x261f808 size 0x94 virtual true final false
inline void Finalize() ;

static inline ::System::Threading::InternalThread* New_ctor() ;

/// @brief Method .ctor addr 0x261f89c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InternalThread", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalThread(InternalThread && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalThread", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalThread(InternalThread const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InternalThread()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::InternalThread, 0x128>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::InternalThread);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::InternalThread*, "System.Threading", "InternalThread");
