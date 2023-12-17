#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__InternalThread_def.hpp"
#include "System/Threading/zzzz__ThreadState_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::InternalThread.Thread_free_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::InternalThread::*)()>(&::System::Threading::InternalThread::Thread_free_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261f804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                            "Thread_free_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::InternalThread.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::InternalThread::*)()>(&::System::Threading::InternalThread::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x261f808;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::InternalThread._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::InternalThread::*)()>(&::System::Threading::InternalThread::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x261f89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::InternalThread::__set_lock_thread_id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_lock_thread_id()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_lock_thread_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Threading::InternalThread::__set_handle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_handle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this);
}
constexpr void System::Threading::InternalThread::__set_native_handle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_native_handle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_native_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this);
}
constexpr void System::Threading::InternalThread::__set_name_chars(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_name_chars()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_name_chars() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this);
}
constexpr void System::Threading::InternalThread::__set_name_free(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_name_free()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_name_free() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void System::Threading::InternalThread::__set_name_length(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_name_length()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_name_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void System::Threading::InternalThread::__set_state(::System::Threading::ThreadState  value)  {
::cordl_internals::setInstanceField<::System::Threading::ThreadState, 0x38>(this, std::forward<::System::Threading::ThreadState>(value));
}
constexpr ::System::Threading::ThreadState& System::Threading::InternalThread::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Threading::ThreadState, 0x38>(this);
}
constexpr ::System::Threading::ThreadState const& System::Threading::InternalThread::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Threading::ThreadState, 0x38>(this);
}
constexpr void System::Threading::InternalThread::__set_abort_exc(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x40>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::InternalThread::__get_abort_exc()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::InternalThread::__get_abort_exc() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr void System::Threading::InternalThread::__set_abort_state_handle(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_abort_state_handle()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_abort_state_handle() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void System::Threading::InternalThread::__set_thread_id(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::InternalThread::__get_thread_id()  {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr int64_t const& System::Threading::InternalThread::__get_thread_id() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr void System::Threading::InternalThread::__set_debugger_thread(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x58>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_debugger_thread()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x58>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_debugger_thread() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x58>(this);
}
constexpr void System::Threading::InternalThread::__set_static_data(::cordl_internals::uintptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::uintptr_t, 0x60>(this, std::forward<::cordl_internals::uintptr_t>(value));
}
constexpr ::cordl_internals::uintptr_t& System::Threading::InternalThread::__get_static_data()  {
return ::cordl_internals::getInstanceField<::cordl_internals::uintptr_t, 0x60>(this);
}
constexpr ::cordl_internals::uintptr_t const& System::Threading::InternalThread::__get_static_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::uintptr_t, 0x60>(this);
}
constexpr void System::Threading::InternalThread::__set_runtime_thread_info(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x68>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_runtime_thread_info()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x68>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_runtime_thread_info() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x68>(this);
}
constexpr void System::Threading::InternalThread::__set_current_appcontext(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x70>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::InternalThread::__get_current_appcontext()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::InternalThread::__get_current_appcontext() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x70>(this);
}
constexpr void System::Threading::InternalThread::__set_root_domain_thread(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x78>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::InternalThread::__get_root_domain_thread()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::InternalThread::__get_root_domain_thread() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x78>(this);
}
constexpr void System::Threading::InternalThread::__set__serialized_principal(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x80>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Threading::InternalThread::__get__serialized_principal()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x80>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Threading::InternalThread::__get__serialized_principal() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x80>(this);
}
constexpr void System::Threading::InternalThread::__set__serialized_principal_version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get__serialized_principal_version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get__serialized_principal_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this);
}
constexpr void System::Threading::InternalThread::__set_appdomain_refs(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x90>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_appdomain_refs()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x90>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_appdomain_refs() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x90>(this);
}
constexpr void System::Threading::InternalThread::__set_interruption_requested(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_interruption_requested()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_interruption_requested() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void System::Threading::InternalThread::__set_longlived(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xa0>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_longlived()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xa0>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_longlived() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xa0>(this);
}
constexpr void System::Threading::InternalThread::__set_threadpool_thread(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::InternalThread::__get_threadpool_thread()  {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this);
}
constexpr bool const& System::Threading::InternalThread::__get_threadpool_thread() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this);
}
constexpr void System::Threading::InternalThread::__set_thread_interrupt_requested(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa9>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::InternalThread::__get_thread_interrupt_requested()  {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this);
}
constexpr bool const& System::Threading::InternalThread::__get_thread_interrupt_requested() const {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this);
}
constexpr void System::Threading::InternalThread::__set_stack_size(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xac>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_stack_size()  {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_stack_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this);
}
constexpr void System::Threading::InternalThread::__set_apartment_state(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0xb0>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Threading::InternalThread::__get_apartment_state()  {
return ::cordl_internals::getInstanceField<uint8_t, 0xb0>(this);
}
constexpr uint8_t const& System::Threading::InternalThread::__get_apartment_state() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xb0>(this);
}
constexpr void System::Threading::InternalThread::__set_critical_region_level(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_critical_region_level()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_critical_region_level() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr void System::Threading::InternalThread::__set_managed_id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_managed_id()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_managed_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr void System::Threading::InternalThread::__set_small_id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xbc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_small_id()  {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_small_id() const {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this);
}
constexpr void System::Threading::InternalThread::__set_manage_callback(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xc0>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_manage_callback()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xc0>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_manage_callback() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xc0>(this);
}
constexpr void System::Threading::InternalThread::__set_flags(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xc8>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_flags()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xc8>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_flags() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xc8>(this);
}
constexpr void System::Threading::InternalThread::__set_thread_pinning_ref(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xd0>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_thread_pinning_ref()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xd0>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_thread_pinning_ref() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xd0>(this);
}
constexpr void System::Threading::InternalThread::__set_abort_protected_block_count(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xd8>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_abort_protected_block_count()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xd8>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_abort_protected_block_count() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xd8>(this);
}
constexpr void System::Threading::InternalThread::__set_priority(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xe0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_priority()  {
return ::cordl_internals::getInstanceField<int32_t, 0xe0>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe0>(this);
}
constexpr void System::Threading::InternalThread::__set_owned_mutex(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xe8>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_owned_mutex()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xe8>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_owned_mutex() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xe8>(this);
}
constexpr void System::Threading::InternalThread::__set_suspended_event(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xf0>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_suspended_event()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xf0>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_suspended_event() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xf0>(this);
}
constexpr void System::Threading::InternalThread::__set_self_suspended(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xf8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::InternalThread::__get_self_suspended()  {
return ::cordl_internals::getInstanceField<int32_t, 0xf8>(this);
}
constexpr int32_t const& System::Threading::InternalThread::__get_self_suspended() const {
return ::cordl_internals::getInstanceField<int32_t, 0xf8>(this);
}
constexpr void System::Threading::InternalThread::__set_thread_state(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x100>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_thread_state()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x100>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_thread_state() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x100>(this);
}
constexpr void System::Threading::InternalThread::__set_netcore0(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x108>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_netcore0()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x108>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_netcore0() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x108>(this);
}
constexpr void System::Threading::InternalThread::__set_netcore1(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x110>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_netcore1()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x110>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_netcore1() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x110>(this);
}
constexpr void System::Threading::InternalThread::__set_netcore2(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x118>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_netcore2()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x118>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_netcore2() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x118>(this);
}
constexpr void System::Threading::InternalThread::__set_last(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x120>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::InternalThread::__get_last()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x120>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::InternalThread::__get_last() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x120>(this);
}
inline void System::Threading::InternalThread::Thread_free_internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                            "Thread_free_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::InternalThread::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::InternalThread* System::Threading::InternalThread::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::InternalThread*>());
}
inline void System::Threading::InternalThread::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
