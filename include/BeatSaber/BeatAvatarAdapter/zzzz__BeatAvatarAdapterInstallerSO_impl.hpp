#pragma once
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarAdapterInstallerSO_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarColorViewController_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSetSO_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModelSO_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystemSettings_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe14484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)(::Zenject::DiContainer*)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xe14494;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe146a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*, 0x20>(this, std::forward<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__avatarPartsModel()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*> BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__avatarPartsModel() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*, 0x20>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__skinColorSet(::BeatSaber::BeatAvatarSDK::SkinColorSetSO*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*, 0x28>(this, std::forward<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__skinColorSet()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*> BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__skinColorSet() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*, 0x28>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*, 0x30>(this, std::forward<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__settings()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__settings() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*, 0x30>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__beatAvatarEditorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, 0x38>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__beatAvatarEditorViewController()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__beatAvatarEditorViewController() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*, 0x38>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__editAvatarColorView(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, 0x40>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__editAvatarColorView()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*> BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__editAvatarColorView() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, 0x40>(this);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>());
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
