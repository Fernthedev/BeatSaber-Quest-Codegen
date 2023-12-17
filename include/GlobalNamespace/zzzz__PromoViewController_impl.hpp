#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PromoViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PromoViewController_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelPackSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair.get_annotatedBeatmapLevelCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IAnnotatedBeatmapLevelCollection* (::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::*)()>(&::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::get_annotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d5d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(),
                            "get_annotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::*)()>(&::GlobalNamespace::__PromoViewController__ButtonPromoTypePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__set_button(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x10>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_button()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_button() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x10>(this);
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__set_previewLevelPack(::GlobalNamespace::PreviewBeatmapLevelPackSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PreviewBeatmapLevelPackSO*, 0x18>(this, std::forward<::GlobalNamespace::PreviewBeatmapLevelPackSO*>(value));
}
constexpr ::GlobalNamespace::PreviewBeatmapLevelPackSO* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_previewLevelPack()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PreviewBeatmapLevelPackSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelPackSO*> GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_previewLevelPack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PreviewBeatmapLevelPackSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__set_levelPack(::GlobalNamespace::BeatmapLevelPackSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackSO*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapLevelPackSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackSO* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_levelPack()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackSO*> GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_levelPack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackSO*, 0x20>(this);
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__set_beatmapLevel(::GlobalNamespace::BeatmapLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapLevelSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_beatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get_beatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x28>(this);
}
constexpr void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, 0x30>(this, std::forward<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>(value));
}
constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get__annotatedBeatmapLevelCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*> GlobalNamespace::__PromoViewController__ButtonPromoTypePair::__get__annotatedBeatmapLevelCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, 0x30>(this);
}
inline ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::get_annotatedBeatmapLevelCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(),
                            "get_annotatedBeatmapLevelCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* GlobalNamespace::__PromoViewController__ButtonPromoTypePair::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>());
}
inline void GlobalNamespace::__PromoViewController__ButtonPromoTypePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::*)()>(&::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0._DidActivate_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::*)()>(&::GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_DidActivate_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d5e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(),
                            "<DidActivate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__set_item(::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, 0x10>(this, std::forward<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>(value));
}
constexpr ::GlobalNamespace::__PromoViewController__ButtonPromoTypePair* GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__get_item()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*> GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__get_item() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*, 0x10>(this);
}
constexpr void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__set___4__this(::GlobalNamespace::PromoViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PromoViewController*, 0x18>(this, std::forward<::GlobalNamespace::PromoViewController*>(value));
}
constexpr ::GlobalNamespace::PromoViewController* GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PromoViewController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PromoViewController*> GlobalNamespace::__PromoViewController____c__DisplayClass5_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PromoViewController*, 0x18>(this);
}
inline ::GlobalNamespace::__PromoViewController____c__DisplayClass5_0* GlobalNamespace::__PromoViewController____c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PromoViewController____c__DisplayClass5_0::_DidActivate_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PromoViewController____c__DisplayClass5_0*>::get(),
                            "<DidActivate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PromoViewController.add_promoButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::PromoViewController::add_promoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d5ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            "add_promoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoViewController.remove_promoButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::PromoViewController::remove_promoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d5b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            "remove_promoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PromoViewController::DidActivate)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x22d5c34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PromoViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PromoViewController::*)()>(&::GlobalNamespace::PromoViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d5d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PromoViewController::__set__elements(::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>, 0x70>(this, std::forward<::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>& GlobalNamespace::PromoViewController::__get__elements()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>, 0x70>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*> const& GlobalNamespace::PromoViewController::__get__elements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*,::Array<::GlobalNamespace::__PromoViewController__ButtonPromoTypePair*>*>, 0x70>(this);
}
constexpr void GlobalNamespace::PromoViewController::__set_promoButtonWasPressedEvent(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x78>(this, std::forward<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*>(value));
}
constexpr ::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::PromoViewController::__get_promoButtonWasPressedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*> GlobalNamespace::PromoViewController::__get_promoButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0x78>(this);
}
inline void GlobalNamespace::PromoViewController::add_promoButtonWasPressedEvent(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            "add_promoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PromoViewController::remove_promoButtonWasPressedEvent(::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            "remove_promoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::PromoViewController*,::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PromoViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::PromoViewController* GlobalNamespace::PromoViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PromoViewController*>());
}
inline void GlobalNamespace::PromoViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PromoViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
