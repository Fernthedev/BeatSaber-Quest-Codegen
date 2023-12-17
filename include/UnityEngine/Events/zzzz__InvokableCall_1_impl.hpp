#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
constexpr void UnityEngine::Events::InvokableCall_1<T1>::__set_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<T1>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<T1>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
constexpr ::UnityEngine::Events::UnityAction_1<T1>* UnityEngine::Events::InvokableCall_1<T1>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<T1>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T1>*> UnityEngine::Events::InvokableCall_1<T1>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<T1>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::add_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::remove_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline ::UnityEngine::Events::InvokableCall_1<T1>* UnityEngine::Events::InvokableCall_1<T1>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<T1>*>(target, theFunction));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline ::UnityEngine::Events::InvokableCall_1<T1>* UnityEngine::Events::InvokableCall_1<T1>::New_ctor(::UnityEngine::Events::UnityAction_1<T1>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<T1>*>(action));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::_ctor(::UnityEngine::Events::UnityAction_1<T1>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::Invoke(T1  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
inline bool UnityEngine::Events::InvokableCall_1<T1>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>.add_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::add_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>.remove_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::remove_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::__set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x10>(this);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(target, theFunction));
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::New_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(action));
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::Invoke(::UnityEngine::InputSystem::__InputAction__CallbackContext  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
inline bool UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>.add_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::add_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>.remove_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::remove_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::UnityEngine::Vector2)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::__set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>(value));
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*> UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*, 0x10>(this);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>* UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>(target, theFunction));
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>* UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::New_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>(action));
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::Invoke(::UnityEngine::Vector2  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
inline bool UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>.add_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<float_t>::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::UnityEngine::Events::InvokableCall_1<float_t>::add_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>.remove_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<float_t>::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::UnityEngine::Events::InvokableCall_1<float_t>::remove_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<float_t>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<float_t>::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::UnityEngine::Events::InvokableCall_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<float_t>::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::UnityEngine::Events::InvokableCall_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<float_t>::*)(float_t)>(&::UnityEngine::Events::InvokableCall_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<float_t>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Events::InvokableCall_1<float_t>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<float_t>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_1<float_t>::__set_Delegate(::UnityEngine::Events::UnityAction_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<float_t>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<float_t>*>(value));
}
constexpr ::UnityEngine::Events::UnityAction_1<float_t>* UnityEngine::Events::InvokableCall_1<float_t>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<float_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<float_t>*> UnityEngine::Events::InvokableCall_1<float_t>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<float_t>*, 0x10>(this);
}
inline void UnityEngine::Events::InvokableCall_1<float_t>::add_Delegate(::UnityEngine::Events::UnityAction_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall_1<float_t>::remove_Delegate(::UnityEngine::Events::UnityAction_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Events::InvokableCall_1<float_t>* UnityEngine::Events::InvokableCall_1<float_t>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<float_t>*>(target, theFunction));
}
inline void UnityEngine::Events::InvokableCall_1<float_t>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::InvokableCall_1<float_t>* UnityEngine::Events::InvokableCall_1<float_t>::New_ctor(::UnityEngine::Events::UnityAction_1<float_t>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<float_t>*>(action));
}
inline void UnityEngine::Events::InvokableCall_1<float_t>::_ctor(::UnityEngine::Events::UnityAction_1<float_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall_1<float_t>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall_1<float_t>::Invoke(float_t  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
inline bool UnityEngine::Events::InvokableCall_1<float_t>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<float_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>.add_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::add_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>.remove_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::remove_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::UnityEngine::Color)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::__set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>(value));
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*> UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*, 0x10>(this);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>* UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>(target, theFunction));
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>* UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::New_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>(action));
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::Invoke(::UnityEngine::Color  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
inline bool UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>.add_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<bool>::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::UnityEngine::Events::InvokableCall_1<bool>::add_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>.remove_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<bool>::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::UnityEngine::Events::InvokableCall_1<bool>::remove_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<bool>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<bool>::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::UnityEngine::Events::InvokableCall_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<bool>::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::UnityEngine::Events::InvokableCall_1<bool>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<bool>::*)(bool)>(&::UnityEngine::Events::InvokableCall_1<bool>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<bool>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Events::InvokableCall_1<bool>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<bool>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_1<bool>::__set_Delegate(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<bool>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<bool>*>(value));
}
constexpr ::UnityEngine::Events::UnityAction_1<bool>* UnityEngine::Events::InvokableCall_1<bool>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<bool>*> UnityEngine::Events::InvokableCall_1<bool>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<bool>*, 0x10>(this);
}
inline void UnityEngine::Events::InvokableCall_1<bool>::add_Delegate(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall_1<bool>::remove_Delegate(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Events::InvokableCall_1<bool>* UnityEngine::Events::InvokableCall_1<bool>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<bool>*>(target, theFunction));
}
inline void UnityEngine::Events::InvokableCall_1<bool>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::InvokableCall_1<bool>* UnityEngine::Events::InvokableCall_1<bool>::New_ctor(::UnityEngine::Events::UnityAction_1<bool>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<bool>*>(action));
}
inline void UnityEngine::Events::InvokableCall_1<bool>::_ctor(::UnityEngine::Events::UnityAction_1<bool>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall_1<bool>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall_1<bool>::Invoke(bool  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
inline bool UnityEngine::Events::InvokableCall_1<bool>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<bool>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>.add_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::add_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>.remove_Delegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::remove_Delegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(::UnityEngine::Events::UnityAction_1<int32_t>*)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(int32_t)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::InvokableCall_1<int32_t>.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Events::InvokableCall_1<int32_t>::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::InvokableCall_1<int32_t>::Find)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Events::InvokableCall_1<int32_t>::__set_Delegate(::UnityEngine::Events::UnityAction_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<int32_t>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<int32_t>*>(value));
}
constexpr ::UnityEngine::Events::UnityAction_1<int32_t>* UnityEngine::Events::InvokableCall_1<int32_t>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<int32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<int32_t>*> UnityEngine::Events::InvokableCall_1<int32_t>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<int32_t>*, 0x10>(this);
}
inline void UnityEngine::Events::InvokableCall_1<int32_t>::add_Delegate(::UnityEngine::Events::UnityAction_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Events::InvokableCall_1<int32_t>::remove_Delegate(::UnityEngine::Events::UnityAction_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Events::InvokableCall_1<int32_t>* UnityEngine::Events::InvokableCall_1<int32_t>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<int32_t>*>(target, theFunction));
}
inline void UnityEngine::Events::InvokableCall_1<int32_t>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
inline ::UnityEngine::Events::InvokableCall_1<int32_t>* UnityEngine::Events::InvokableCall_1<int32_t>::New_ctor(::UnityEngine::Events::UnityAction_1<int32_t>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<int32_t>*>(action));
}
inline void UnityEngine::Events::InvokableCall_1<int32_t>::_ctor(::UnityEngine::Events::UnityAction_1<int32_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::Events::InvokableCall_1<int32_t>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
inline void UnityEngine::Events::InvokableCall_1<int32_t>::Invoke(int32_t  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
inline bool UnityEngine::Events::InvokableCall_1<int32_t>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<int32_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void UnityEngine::Events::InvokableCall_1<T1>::__set_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_1<T1>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_1<T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::UnityEngine::Events::UnityAction_1<T1>* UnityEngine::Events::InvokableCall_1<T1>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<T1>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T1>*> UnityEngine::Events::InvokableCall_1<T1>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_1<T1>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::add_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::remove_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::UnityEngine::Events::InvokableCall_1<T1>* UnityEngine::Events::InvokableCall_1<T1>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<T1>*>(target, theFunction));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::UnityEngine::Events::InvokableCall_1<T1>* UnityEngine::Events::InvokableCall_1<T1>::New_ctor(::UnityEngine::Events::UnityAction_1<T1>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_1<T1>*>(action));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::_ctor(::UnityEngine::Events::UnityAction_1<T1>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_1<T1>::Invoke(T1  args0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool UnityEngine::Events::InvokableCall_1<T1>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_1<T1>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
