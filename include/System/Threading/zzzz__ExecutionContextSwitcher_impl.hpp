#pragma once
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ExecutionContextSwitcher.UndoNoThrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContextSwitcher::*)()>(&::System::Threading::ExecutionContextSwitcher::UndoNoThrow)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2616c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(),
                            "UndoNoThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContextSwitcher.Undo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContextSwitcher::*)()>(&::System::Threading::ExecutionContextSwitcher::Undo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2616cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(),
                            "Undo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::ExecutionContextSwitcher::__set_outerEC(::System::Threading::__ExecutionContext__Reader  value)  {
::cordl_internals::setInstanceField<::System::Threading::__ExecutionContext__Reader, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::__ExecutionContext__Reader>(value));
}
constexpr ::System::Threading::__ExecutionContext__Reader& System::Threading::ExecutionContextSwitcher::__get_outerEC()  {
return ::cordl_internals::getInstanceField<::System::Threading::__ExecutionContext__Reader, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::__ExecutionContext__Reader const& System::Threading::ExecutionContextSwitcher::__get_outerEC() const {
return ::cordl_internals::getInstanceField<::System::Threading::__ExecutionContext__Reader, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_outerECBelongsToScope(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Threading::ExecutionContextSwitcher::__get_outerECBelongsToScope()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Threading::ExecutionContextSwitcher::__get_outerECBelongsToScope() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_hecsw(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::ExecutionContextSwitcher::__get_hecsw()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::ExecutionContextSwitcher::__get_hecsw() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::ExecutionContextSwitcher::__set_thread(::System::Threading::Thread*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Thread*>(value));
}
constexpr ::System::Threading::Thread* System::Threading::ExecutionContextSwitcher::__get_thread()  {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> System::Threading::ExecutionContextSwitcher::__get_thread() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool System::Threading::ExecutionContextSwitcher::UndoNoThrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(),
                            "UndoNoThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Threading::ExecutionContextSwitcher::Undo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(),
                            "Undo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "outerEC", ty: "::System::Threading::__ExecutionContext__Reader", modifiers: "", def_value: Some("{}") }, CppParam { name: "outerECBelongsToScope", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hecsw", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "thread", ty: "::System::Threading::Thread*", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Threading::ExecutionContextSwitcher::ExecutionContextSwitcher(::System::Threading::__ExecutionContext__Reader  outerEC, bool  outerECBelongsToScope, ::System::Object*  hecsw, ::System::Threading::Thread*  thread) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->outerEC = outerEC;
this->outerECBelongsToScope = outerECBelongsToScope;
this->hecsw = hecsw;
this->thread = thread;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
