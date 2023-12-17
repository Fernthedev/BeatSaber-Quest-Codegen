#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__AnimatorMoveHandlerManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IAnimatorMoveHandler_def.hpp"
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AnimatorMoveHandlerManager::*)(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*)>(&::Zenject::AnimatorMoveHandlerManager::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0ea9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.OnAnimatorMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AnimatorMoveHandlerManager::*)()>(&::Zenject::AnimatorMoveHandlerManager::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2f0eaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "OnAnimatorMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AnimatorMoveHandlerManager::*)()>(&::Zenject::AnimatorMoveHandlerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0ec54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.__zenInjectMethod0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::AnimatorMoveHandlerManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f0ec5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::AnimatorMoveHandlerManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2f0ed38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::AnimatorMoveHandlerManager::__set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* Zenject::AnimatorMoveHandlerManager::__get__handlers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*> Zenject::AnimatorMoveHandlerManager::__get__handlers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*, 0x18>(this);
}
inline void Zenject::AnimatorMoveHandlerManager::Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*  handlers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, handlers);
}
inline void Zenject::AnimatorMoveHandlerManager::OnAnimatorMove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "OnAnimatorMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::AnimatorMoveHandlerManager* Zenject::AnimatorMoveHandlerManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::AnimatorMoveHandlerManager*>());
}
inline void Zenject::AnimatorMoveHandlerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::AnimatorMoveHandlerManager::__zenInjectMethod0(::System::Object*  P_0, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::AnimatorMoveHandlerManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AnimatorMoveHandlerManager*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
