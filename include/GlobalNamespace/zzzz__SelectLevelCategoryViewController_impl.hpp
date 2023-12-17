#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
constexpr void GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::__SelectLevelCategoryViewController__LevelCategory(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::MusicPacks{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::CustomSongs{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::Favorites{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory::All{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::*)()>(&::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c38c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__set_levelCategory(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x10>(this, std::forward<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>(value));
}
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory& GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__get_levelCategory()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x10>(this);
}
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const& GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__get_levelCategory() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x10>(this);
}
constexpr void GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__set_localizedKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__get_localizedKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__get_localizedKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__set_categoryIcon(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x20>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__get_categoryIcon()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::__get_categoryIcon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x20>(this);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>());
}
inline void GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::*)()>(&::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0._Setup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::*)(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*)>(&::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::_Setup_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22c38d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0*>::get(),
                            "<Setup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::__set_enabledLevelCategories(::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>& GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::__get_enabledLevelCategories()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const& GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::__get_enabledLevelCategories() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>, 0x10>(this);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0* GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0*>());
}
inline void GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0::_Setup_b__0(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0*>::get(),
                            "<Setup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, data);
}
//  Writing Method size for method: ::GlobalNamespace::__SelectLevelCategoryViewController____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SelectLevelCategoryViewController____c::*)()>(&::GlobalNamespace::__SelectLevelCategoryViewController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectLevelCategoryViewController____c._Setup_b__12_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__IconSegmentedControl__DataItem* (::GlobalNamespace::__SelectLevelCategoryViewController____c::*)(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*)>(&::GlobalNamespace::__SelectLevelCategoryViewController____c::_Setup_b__12_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22c3994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get(),
                            "<Setup>b__12_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SelectLevelCategoryViewController____c._Setup_b__12_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory (::GlobalNamespace::__SelectLevelCategoryViewController____c::*)(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*)>(&::GlobalNamespace::__SelectLevelCategoryViewController____c::_Setup_b__12_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22c3a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get(),
                            "<Setup>b__12_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SelectLevelCategoryViewController____c::setStaticF___9(::GlobalNamespace::__SelectLevelCategoryViewController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__SelectLevelCategoryViewController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get>(std::forward<::GlobalNamespace::__SelectLevelCategoryViewController____c*>(value));
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController____c* GlobalNamespace::__SelectLevelCategoryViewController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__SelectLevelCategoryViewController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get>();
}
inline void GlobalNamespace::__SelectLevelCategoryViewController____c::setStaticF___9__12_1(::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::HMUI::__IconSegmentedControl__DataItem*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::HMUI::__IconSegmentedControl__DataItem*>*, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::HMUI::__IconSegmentedControl__DataItem*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::HMUI::__IconSegmentedControl__DataItem*>* GlobalNamespace::__SelectLevelCategoryViewController____c::getStaticF___9__12_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::HMUI::__IconSegmentedControl__DataItem*>*, "<>9__12_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get>();
}
inline void GlobalNamespace::__SelectLevelCategoryViewController____c::setStaticF___9__12_2(::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*, "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get>(std::forward<::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* GlobalNamespace::__SelectLevelCategoryViewController____c::getStaticF___9__12_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*, "<>9__12_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get>();
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController____c* GlobalNamespace::__SelectLevelCategoryViewController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SelectLevelCategoryViewController____c*>());
}
inline void GlobalNamespace::__SelectLevelCategoryViewController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HMUI::__IconSegmentedControl__DataItem* GlobalNamespace::__SelectLevelCategoryViewController____c::_Setup_b__12_1(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get(),
                            "<Setup>b__12_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__IconSegmentedControl__DataItem*, false>(*this, ___internal_method, x);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::__SelectLevelCategoryViewController____c::_Setup_b__12_2(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SelectLevelCategoryViewController____c*>::get(),
                            "<Setup>b__12_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.add_didSelectLevelCategoryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*)>(&::GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22bdf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "add_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.remove_didSelectLevelCategoryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*)>(&::GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22be674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "remove_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.get_selectedLevelCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory (::GlobalNamespace::SelectLevelCategoryViewController::*)()>(&::GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22bd268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>)>(&::GlobalNamespace::SelectLevelCategoryViewController::Setup)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x22bd868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectLevelCategoryViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22c3564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(bool, bool)>(&::GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22c3604;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController.LevelFilterCategoryIconSegmentedControlDidSelectCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)(::HMUI::SegmentedControl*, int32_t)>(&::GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x22c36a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "LevelFilterCategoryIconSegmentedControlDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectLevelCategoryViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelCategoryViewController::*)()>(&::GlobalNamespace::SelectLevelCategoryViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c38c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__allLevelCategoryInfos(::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>, 0x70>(this, std::forward<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>& GlobalNamespace::SelectLevelCategoryViewController::__get__allLevelCategoryInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>, 0x70>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> const& GlobalNamespace::SelectLevelCategoryViewController::__get__allLevelCategoryInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>, 0x70>(this);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__levelFilterCategoryIconSegmentedControl(::HMUI::IconSegmentedControl*  value)  {
::cordl_internals::setInstanceField<::HMUI::IconSegmentedControl*, 0x78>(this, std::forward<::HMUI::IconSegmentedControl*>(value));
}
constexpr ::HMUI::IconSegmentedControl* GlobalNamespace::SelectLevelCategoryViewController::__get__levelFilterCategoryIconSegmentedControl()  {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControl*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControl*> GlobalNamespace::SelectLevelCategoryViewController::__get__levelFilterCategoryIconSegmentedControl() const {
return ::cordl_internals::getInstanceField<::HMUI::IconSegmentedControl*, 0x78>(this);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x80>(this, std::forward<::GlobalNamespace::IAnalyticsModel*>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::SelectLevelCategoryViewController::__get__analyticsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> GlobalNamespace::SelectLevelCategoryViewController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0x80>(this);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*, 0x88>(this, std::forward<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* GlobalNamespace::SelectLevelCategoryViewController::__get_didSelectLevelCategoryEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> GlobalNamespace::SelectLevelCategoryViewController::__get_didSelectLevelCategoryEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*, 0x88>(this);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__prevSelectedLevelCategory(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x90>(this, std::forward<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>(value));
}
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory& GlobalNamespace::SelectLevelCategoryViewController::__get__prevSelectedLevelCategory()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x90>(this);
}
constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const& GlobalNamespace::SelectLevelCategoryViewController::__get__prevSelectedLevelCategory() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x90>(this);
}
constexpr void GlobalNamespace::SelectLevelCategoryViewController::__set__levelCategoryInfos(::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>, 0x98>(this, std::forward<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>& GlobalNamespace::SelectLevelCategoryViewController::__get__levelCategoryInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>, 0x98>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> const& GlobalNamespace::SelectLevelCategoryViewController::__get__levelCategoryInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>, 0x98>(this);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::add_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "add_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::remove_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "remove_didSelectLevelCategoryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::SelectLevelCategoryViewController::get_selectedLevelCategory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "get_selectedLevelCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::Setup(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory  selectedCategory, ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>  enabledLevelCategories)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectedCategory, enabledLevelCategories);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::SelectLevelCategoryViewController::LevelFilterCategoryIconSegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            "LevelFilterCategoryIconSegmentedControlDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SegmentedControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, segmentedControl, index);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController* GlobalNamespace::SelectLevelCategoryViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectLevelCategoryViewController*>());
}
inline void GlobalNamespace::SelectLevelCategoryViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
