#pragma once
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked2CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
//  Writing Method size for method: ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2613958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::*)(bool)>(&::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2613cc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__set__reg1(::System::Threading::CancellationTokenRegistration  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenRegistration, 0x40>(this, std::forward<::System::Threading::CancellationTokenRegistration>(value));
}
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__get__reg1()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenRegistration, 0x40>(this);
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__get__reg1() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenRegistration, 0x40>(this);
}
constexpr void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__set__reg2(::System::Threading::CancellationTokenRegistration  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenRegistration, 0x58>(this, std::forward<::System::Threading::CancellationTokenRegistration>(value));
}
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__get__reg2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenRegistration, 0x58>(this);
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__get__reg2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenRegistration, 0x58>(this);
}
inline ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource* System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::New_ctor(::System::Threading::CancellationToken  token1, ::System::Threading::CancellationToken  token2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>(token1, token2));
}
inline void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::_ctor(::System::Threading::CancellationToken  token1, ::System::Threading::CancellationToken  token2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, token1, token2);
}
inline void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
