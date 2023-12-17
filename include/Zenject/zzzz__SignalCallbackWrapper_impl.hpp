#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalCallbackWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalCallbackWrapper::*)(::Zenject::SignalBindingBindInfo*, ::System::Action_1<::System::Object*>*, ::Zenject::SignalBus*)>(&::Zenject::SignalCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ec1c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBindingBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBus*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.OnSignalFired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalCallbackWrapper::*)(::System::Object*)>(&::Zenject::SignalCallbackWrapper::OnSignalFired)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec1cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "OnSignalFired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalCallbackWrapper::*)()>(&::Zenject::SignalCallbackWrapper::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ec1d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::SignalCallbackWrapper::__zenCreate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ec1db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2ec1f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  Zenject::SignalCallbackWrapper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void Zenject::SignalCallbackWrapper::__set__signalBus(::Zenject::SignalBus*  value)  {
::cordl_internals::setInstanceField<::Zenject::SignalBus*, 0x10>(this, std::forward<::Zenject::SignalBus*>(value));
}
constexpr ::Zenject::SignalBus* Zenject::SignalCallbackWrapper::__get__signalBus()  {
return ::cordl_internals::getInstanceField<::Zenject::SignalBus*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBus*> Zenject::SignalCallbackWrapper::__get__signalBus() const {
return ::cordl_internals::getInstanceField<::Zenject::SignalBus*, 0x10>(this);
}
constexpr void Zenject::SignalCallbackWrapper::__set__action(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Object*>*, 0x18>(this, std::forward<::System::Action_1<::System::Object*>*>(value));
}
constexpr ::System::Action_1<::System::Object*>* Zenject::SignalCallbackWrapper::__get__action()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Object*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> Zenject::SignalCallbackWrapper::__get__action() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Object*>*, 0x18>(this);
}
constexpr void Zenject::SignalCallbackWrapper::__set__signalType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x20>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Zenject::SignalCallbackWrapper::__get__signalType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Zenject::SignalCallbackWrapper::__get__signalType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr void Zenject::SignalCallbackWrapper::__set__identifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::SignalCallbackWrapper::__get__identifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::SignalCallbackWrapper::__get__identifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
inline ::Zenject::SignalCallbackWrapper* Zenject::SignalCallbackWrapper::New_ctor(::Zenject::SignalBindingBindInfo*  bindInfo, ::System::Action_1<::System::Object*>*  action, ::Zenject::SignalBus*  signalBus)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SignalCallbackWrapper*>(bindInfo, action, signalBus));
}
inline void Zenject::SignalCallbackWrapper::_ctor(::Zenject::SignalBindingBindInfo*  bindInfo, ::System::Action_1<::System::Object*>*  action, ::Zenject::SignalBus*  signalBus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBindingBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBus*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindInfo, action, signalBus);
}
inline void Zenject::SignalCallbackWrapper::OnSignalFired(::System::Object*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "OnSignalFired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, signal);
}
inline void Zenject::SignalCallbackWrapper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* Zenject::SignalCallbackWrapper::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalCallbackWrapper*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
