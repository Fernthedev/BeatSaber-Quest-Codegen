#pragma once
#include "UnityEngine/Events/zzzz__BaseInvokableCall_impl.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
constexpr void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::__set_Delegate(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
constexpr ::UnityEngine::Events::UnityAction_3<T1,bool,T3>* UnityEngine::Events::InvokableCall_3<T1,bool,T3>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*> UnityEngine::Events::InvokableCall_3<T1,bool,T3>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::add_Delegate(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::remove_Delegate(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline ::UnityEngine::Events::InvokableCall_3<T1,bool,T3>* UnityEngine::Events::InvokableCall_3<T1,bool,T3>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>(target, theFunction));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline ::UnityEngine::Events::InvokableCall_3<T1,bool,T3>* UnityEngine::Events::InvokableCall_3<T1,bool,T3>::New_ctor(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>(action));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::_ctor(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,bool,T3>::Invoke(T1  args0, bool  args1, T3  args2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0, args1, args2);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
inline bool UnityEngine::Events::InvokableCall_3<T1,bool,T3>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,bool,T3>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__set_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr ::UnityEngine::Events::UnityAction_3<T1,T2,T3>* UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*> UnityEngine::Events::InvokableCall_3<T1,T2,T3>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::add_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::remove_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::UnityEngine::Events::InvokableCall_3<T1,T2,T3>* UnityEngine::Events::InvokableCall_3<T1,T2,T3>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>(target, theFunction));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline ::UnityEngine::Events::InvokableCall_3<T1,T2,T3>* UnityEngine::Events::InvokableCall_3<T1,T2,T3>::New_ctor(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>(action));
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::_ctor(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline void UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Invoke(T1  args0, T2  args1, T3  args2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0, args1, args2);
}
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
inline bool UnityEngine::Events::InvokableCall_3<T1,T2,T3>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,T2,T3>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::__set_Delegate(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*, 0x10>(this, std::forward<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>* UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::__get_Delegate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*> UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::__get_Delegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::add_Delegate(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            "add_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::remove_Delegate(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            "remove_Delegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>* UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>(target, theFunction));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, target, theFunction);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>* UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::New_ctor(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>(action));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::_ctor(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::Invoke(T1  args0, int32_t  args1, int32_t  args2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, args0, args1, args2);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline bool UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>::Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetObj, method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
