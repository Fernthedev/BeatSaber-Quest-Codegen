#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__TestFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::TestFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)()>(&::GlobalNamespace::TestFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TestFlowCoordinator::__set__viewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0xa8>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* GlobalNamespace::TestFlowCoordinator::__get__viewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> GlobalNamespace::TestFlowCoordinator::__get__viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xa8>(this);
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__leftViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0xb0>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* GlobalNamespace::TestFlowCoordinator::__get__leftViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> GlobalNamespace::TestFlowCoordinator::__get__leftViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xb0>(this);
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__rightViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0xb8>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* GlobalNamespace::TestFlowCoordinator::__get__rightViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> GlobalNamespace::TestFlowCoordinator::__get__rightViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xb8>(this);
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__bottomScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0xc0>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* GlobalNamespace::TestFlowCoordinator::__get__bottomScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> GlobalNamespace::TestFlowCoordinator::__get__bottomScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xc0>(this);
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__topScreenViewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0xc8>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* GlobalNamespace::TestFlowCoordinator::__get__topScreenViewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> GlobalNamespace::TestFlowCoordinator::__get__topScreenViewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0xc8>(this);
}
inline void GlobalNamespace::TestFlowCoordinator::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::TestFlowCoordinator* GlobalNamespace::TestFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TestFlowCoordinator*>());
}
inline void GlobalNamespace::TestFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
