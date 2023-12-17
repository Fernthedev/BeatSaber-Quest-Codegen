#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoKernel_impl.hpp"
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::Zenject::__ProjectKernel____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ProjectKernel____c__DisplayClass4_0::*)()>(&::Zenject::__ProjectKernel____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f16414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ProjectKernel____c__DisplayClass4_0._ForceUnloadAllScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::__ProjectKernel____c__DisplayClass4_0::*)(::Zenject::SceneContext*)>(&::Zenject::__ProjectKernel____c__DisplayClass4_0::_ForceUnloadAllScenes_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f16a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            "<ForceUnloadAllScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ProjectKernel____c__DisplayClass4_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::__ProjectKernel____c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f16af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ProjectKernel____c__DisplayClass4_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__ProjectKernel____c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f16b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::__ProjectKernel____c__DisplayClass4_0::__set_sceneOrder(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* Zenject::__ProjectKernel____c__DisplayClass4_0::__get_sceneOrder()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*> Zenject::__ProjectKernel____c__DisplayClass4_0::__get_sceneOrder() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*, 0x10>(this);
}
constexpr void Zenject::__ProjectKernel____c__DisplayClass4_0::__set___9__0(::System::Func_2<::Zenject::SceneContext*,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::SceneContext*,int32_t>*, 0x18>(this, std::forward<::System::Func_2<::Zenject::SceneContext*,int32_t>*>(value));
}
constexpr ::System::Func_2<::Zenject::SceneContext*,int32_t>* Zenject::__ProjectKernel____c__DisplayClass4_0::__get___9__0()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::SceneContext*,int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::SceneContext*,int32_t>*> Zenject::__ProjectKernel____c__DisplayClass4_0::__get___9__0() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::SceneContext*,int32_t>*, 0x18>(this);
}
inline ::Zenject::__ProjectKernel____c__DisplayClass4_0* Zenject::__ProjectKernel____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ProjectKernel____c__DisplayClass4_0*>());
}
inline void Zenject::__ProjectKernel____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t Zenject::__ProjectKernel____c__DisplayClass4_0::_ForceUnloadAllScenes_b__0(::Zenject::SceneContext*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            "<ForceUnloadAllScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x);
}
inline ::System::Object* Zenject::__ProjectKernel____c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ProjectKernel____c__DisplayClass4_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ProjectKernel____c__DisplayClass4_0*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::ProjectKernel.OnApplicationQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f15f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.DestroyEverythingInOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::DestroyEverythingInOrder)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f15f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "DestroyEverythingInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.ForceUnloadAllScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)(bool)>(&::Zenject::ProjectKernel::ForceUnloadAllScenes)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2f1602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "ForceUnloadAllScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f1646c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenFieldSetter0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::ProjectKernel::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2f16474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenFieldSetter1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::ProjectKernel::__zenFieldSetter1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2f165a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "__zenFieldSetter1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ProjectKernel::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2f166dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::ProjectKernel::__set__settings(::Zenject::ZenjectSettings*  value)  {
::cordl_internals::setInstanceField<::Zenject::ZenjectSettings*, 0x38>(this, std::forward<::Zenject::ZenjectSettings*>(value));
}
constexpr ::Zenject::ZenjectSettings* Zenject::ProjectKernel::__get__settings()  {
return ::cordl_internals::getInstanceField<::Zenject::ZenjectSettings*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> Zenject::ProjectKernel::__get__settings() const {
return ::cordl_internals::getInstanceField<::Zenject::ZenjectSettings*, 0x38>(this);
}
constexpr void Zenject::ProjectKernel::__set__contextRegistry(::Zenject::SceneContextRegistry*  value)  {
::cordl_internals::setInstanceField<::Zenject::SceneContextRegistry*, 0x40>(this, std::forward<::Zenject::SceneContextRegistry*>(value));
}
constexpr ::Zenject::SceneContextRegistry* Zenject::ProjectKernel::__get__contextRegistry()  {
return ::cordl_internals::getInstanceField<::Zenject::SceneContextRegistry*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> Zenject::ProjectKernel::__get__contextRegistry() const {
return ::cordl_internals::getInstanceField<::Zenject::SceneContextRegistry*, 0x40>(this);
}
inline void Zenject::ProjectKernel::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::ProjectKernel::DestroyEverythingInOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "DestroyEverythingInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param immediate: bool (default: false)
inline void Zenject::ProjectKernel::ForceUnloadAllScenes(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "ForceUnloadAllScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, immediate);
}
inline ::Zenject::ProjectKernel* Zenject::ProjectKernel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ProjectKernel*>());
}
inline void Zenject::ProjectKernel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::ProjectKernel::__zenFieldSetter0(::System::Object*  P_0, ::System::Object*  P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
inline void Zenject::ProjectKernel::__zenFieldSetter1(::System::Object*  P_0, ::System::Object*  P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "__zenFieldSetter1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::ProjectKernel::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
