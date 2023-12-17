#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__PCAppInit_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.AppStartAndMultiSceneEditorSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2229668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.RepeatableSetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::RepeatableSetupAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22296d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x222976c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2229840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PCAppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this, std::forward<::GlobalNamespace::MainSystemInit*>(value));
}
constexpr ::GlobalNamespace::MainSystemInit* GlobalNamespace::PCAppInit::__get__mainSystemInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSystemInit*> GlobalNamespace::PCAppInit::__get__mainSystemInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit*, 0x48>(this);
}
constexpr void GlobalNamespace::PCAppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this, std::forward<::GlobalNamespace::DefaultScenesTransitionsFromInit*>(value));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit* GlobalNamespace::PCAppInit::__get__defaultScenesTransitionsFromInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DefaultScenesTransitionsFromInit*> GlobalNamespace::PCAppInit::__get__defaultScenesTransitionsFromInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit*, 0x50>(this);
}
constexpr void GlobalNamespace::PCAppInit::__set__goStraightToMenuCommandArgument(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PCAppInit::__get__goStraightToMenuCommandArgument()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& GlobalNamespace::PCAppInit::__get__goStraightToMenuCommandArgument() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void GlobalNamespace::PCAppInit::__set__goStraightToEditorCommandArgument(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PCAppInit::__get__goStraightToEditorCommandArgument()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& GlobalNamespace::PCAppInit::__get__goStraightToEditorCommandArgument() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
inline void GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                            "AppStartAndMultiSceneEditorSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PCAppInit::RepeatableSetupAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                            "RepeatableSetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PCAppInit::TransitionToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PCAppInit::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PCAppInit* GlobalNamespace::PCAppInit::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PCAppInit*>());
}
inline void GlobalNamespace::PCAppInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
