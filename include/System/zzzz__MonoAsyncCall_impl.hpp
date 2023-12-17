#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoAsyncCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MonoAsyncCall._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoAsyncCall::*)()>(&::System::MonoAsyncCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25fa554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoAsyncCall*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::MonoAsyncCall::__set_msg(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::MonoAsyncCall::__get_msg()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::MonoAsyncCall::__get_msg() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void System::MonoAsyncCall::__set_cb_method(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::MonoAsyncCall::__get_cb_method()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this);
}
constexpr ::cordl_internals::intptr_t const& System::MonoAsyncCall::__get_cb_method() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this);
}
constexpr void System::MonoAsyncCall::__set_cb_target(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::MonoAsyncCall::__get_cb_target()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::MonoAsyncCall::__get_cb_target() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::MonoAsyncCall::__set_state(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::MonoAsyncCall::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::MonoAsyncCall::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::MonoAsyncCall::__set_res(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::MonoAsyncCall::__get_res()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::MonoAsyncCall::__get_res() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr void System::MonoAsyncCall::__set_out_args(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x38>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::MonoAsyncCall::__get_out_args()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::MonoAsyncCall::__get_out_args() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
inline ::System::MonoAsyncCall* System::MonoAsyncCall::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::MonoAsyncCall*>());
}
inline void System::MonoAsyncCall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoAsyncCall*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
