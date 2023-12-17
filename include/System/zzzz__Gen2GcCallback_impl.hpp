#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/zzzz__Gen2GcCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::System::Gen2GcCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2597368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_2<::System::Object*,bool>*, ::System::Object*)>(&::System::Gen2GcCallback::Register)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2597370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)(::System::Func_2<::System::Object*,bool>*, ::System::Object*)>(&::System::Gen2GcCallback::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25973f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::Finalize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2597418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
constexpr void System::Gen2GcCallback::__set__callback(::System::Func_2<::System::Object*,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Object*,bool>*, 0x10>(this, std::forward<::System::Func_2<::System::Object*,bool>*>(value));
}
constexpr ::System::Func_2<::System::Object*,bool>* System::Gen2GcCallback::__get__callback()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Object*,bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Object*,bool>*> System::Gen2GcCallback::__get__callback() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Object*,bool>*, 0x10>(this);
}
constexpr void System::Gen2GcCallback::__set__weakTargetObj(::System::Runtime::InteropServices::GCHandle  value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x18>(this, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::Gen2GcCallback::__get__weakTargetObj()  {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x18>(this);
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::Gen2GcCallback::__get__weakTargetObj() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x18>(this);
}
inline ::System::Gen2GcCallback* System::Gen2GcCallback::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Gen2GcCallback*>());
}
inline void System::Gen2GcCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Gen2GcCallback::Register(::System::Func_2<::System::Object*,bool>*  callback, ::System::Object*  targetObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback, targetObj);
}
inline void System::Gen2GcCallback::Setup(::System::Func_2<::System::Object*,bool>*  callback, ::System::Object*  targetObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, targetObj);
}
inline void System::Gen2GcCallback::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Gen2GcCallback*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
