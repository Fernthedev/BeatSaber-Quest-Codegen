#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)(bool, bool, bool)>(&::GlobalNamespace::RecordingToolLoggingViewController::DidActivate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22d5f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)()>(&::GlobalNamespace::RecordingToolLoggingViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingToolLoggingViewController::__set__textPageScrollView(::HMUI::TextPageScrollView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView*, 0x70>(this, std::forward<::HMUI::TextPageScrollView*>(value));
}
constexpr ::HMUI::TextPageScrollView* GlobalNamespace::RecordingToolLoggingViewController::__get__textPageScrollView()  {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> GlobalNamespace::RecordingToolLoggingViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x70>(this);
}
constexpr void GlobalNamespace::RecordingToolLoggingViewController::__set__listLogger(::GlobalNamespace::ListLogger*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ListLogger*, 0x78>(this, std::forward<::GlobalNamespace::ListLogger*>(value));
}
constexpr ::GlobalNamespace::ListLogger* GlobalNamespace::RecordingToolLoggingViewController::__get__listLogger()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ListLogger*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListLogger*> GlobalNamespace::RecordingToolLoggingViewController::__get__listLogger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ListLogger*, 0x78>(this);
}
inline void GlobalNamespace::RecordingToolLoggingViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::RecordingToolLoggingViewController* GlobalNamespace::RecordingToolLoggingViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolLoggingViewController*>());
}
inline void GlobalNamespace::RecordingToolLoggingViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
