#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
constexpr void GlobalNamespace::__CreditsData__TextStyle::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__CreditsData__TextStyle::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__CreditsData__TextStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CreditsData__TextStyle::__CreditsData__TextStyle(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__CreditsData__TextStyle  GlobalNamespace::__CreditsData__TextStyle::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__CreditsData__TextStyle  GlobalNamespace::__CreditsData__TextStyle::Title{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__CreditsData__TextStyle  GlobalNamespace::__CreditsData__TextStyle::Header{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__Text.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__Text::*)()>(&::GlobalNamespace::__CreditsData__Text::IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22834d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__Text.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__CreditsData__Text::*)()>(&::GlobalNamespace::__CreditsData__Text::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22834f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__Text._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CreditsData__Text::*)()>(&::GlobalNamespace::__CreditsData__Text::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22835b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__CreditsData__Text::__set_text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__CreditsData__Text::__get_text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__CreditsData__Text::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__CreditsData__Text::__set_localized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__CreditsData__Text::__get_localized()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__CreditsData__Text::__get_localized() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::__CreditsData__Text::__set_style(::GlobalNamespace::__CreditsData__TextStyle  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CreditsData__TextStyle, 0x1c>(this, std::forward<::GlobalNamespace::__CreditsData__TextStyle>(value));
}
constexpr ::GlobalNamespace::__CreditsData__TextStyle& GlobalNamespace::__CreditsData__Text::__get_style()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__TextStyle, 0x1c>(this);
}
constexpr ::GlobalNamespace::__CreditsData__TextStyle const& GlobalNamespace::__CreditsData__Text::__get_style() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__TextStyle, 0x1c>(this);
}
inline bool GlobalNamespace::__CreditsData__Text::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__CreditsData__Text::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__CreditsData__Text* GlobalNamespace::__CreditsData__Text::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CreditsData__Text*>());
}
inline void GlobalNamespace::__CreditsData__Text::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem.HasTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__RootCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22835c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem.HasText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__RootCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22835d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem.HasRowItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__RootCreditsItem::HasRowItems)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22835e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            "HasRowItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__RootCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__set_title(::GlobalNamespace::__CreditsData__Text*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x10>(this, std::forward<::GlobalNamespace::__CreditsData__Text*>(value));
}
constexpr ::GlobalNamespace::__CreditsData__Text* GlobalNamespace::__CreditsData__RootCreditsItem::__get_title()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> GlobalNamespace::__CreditsData__RootCreditsItem::__get_title() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x10>(this);
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__set_text(::GlobalNamespace::__CreditsData__Text*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x18>(this, std::forward<::GlobalNamespace::__CreditsData__Text*>(value));
}
constexpr ::GlobalNamespace::__CreditsData__Text* GlobalNamespace::__CreditsData__RootCreditsItem::__get_text()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> GlobalNamespace::__CreditsData__RootCreditsItem::__get_text() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x18>(this);
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__set_rowCountOverride(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__CreditsData__RootCreditsItem::__get_rowCountOverride()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__CreditsData__RootCreditsItem::__get_rowCountOverride() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__set_creditsItems(::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>& GlobalNamespace::__CreditsData__RootCreditsItem::__get_creditsItems()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*> const& GlobalNamespace::__CreditsData__RootCreditsItem::__get_creditsItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>, 0x28>(this);
}
inline bool GlobalNamespace::__CreditsData__RootCreditsItem::HasTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__CreditsData__RootCreditsItem::HasText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__CreditsData__RootCreditsItem::HasRowItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            "HasRowItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__CreditsData__RootCreditsItem* GlobalNamespace::__CreditsData__RootCreditsItem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CreditsData__RootCreditsItem*>());
}
inline void GlobalNamespace::__CreditsData__RootCreditsItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__ChildCreditsItem.HasTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__ChildCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__ChildCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2283608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__ChildCreditsItem.HasText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__ChildCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__ChildCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2283618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__ChildCreditsItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CreditsData__ChildCreditsItem::*)()>(&::GlobalNamespace::__CreditsData__ChildCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__CreditsData__ChildCreditsItem::__set_title(::GlobalNamespace::__CreditsData__Text*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x10>(this, std::forward<::GlobalNamespace::__CreditsData__Text*>(value));
}
constexpr ::GlobalNamespace::__CreditsData__Text* GlobalNamespace::__CreditsData__ChildCreditsItem::__get_title()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> GlobalNamespace::__CreditsData__ChildCreditsItem::__get_title() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x10>(this);
}
constexpr void GlobalNamespace::__CreditsData__ChildCreditsItem::__set_text(::GlobalNamespace::__CreditsData__Text*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x18>(this, std::forward<::GlobalNamespace::__CreditsData__Text*>(value));
}
constexpr ::GlobalNamespace::__CreditsData__Text* GlobalNamespace::__CreditsData__ChildCreditsItem::__get_text()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> GlobalNamespace::__CreditsData__ChildCreditsItem::__get_text() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CreditsData__Text*, 0x18>(this);
}
inline bool GlobalNamespace::__CreditsData__ChildCreditsItem::HasTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                            "HasTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__CreditsData__ChildCreditsItem::HasText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                            "HasText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__CreditsData__ChildCreditsItem* GlobalNamespace::__CreditsData__ChildCreditsItem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CreditsData__ChildCreditsItem*>());
}
inline void GlobalNamespace::__CreditsData__ChildCreditsItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::CreditsData.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CreditsData* (*)(::StringW)>(&::GlobalNamespace::CreditsData::Deserialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22833c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CreditsData::*)()>(&::GlobalNamespace::CreditsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22834cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CreditsData::__set_creditsItems(::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>& GlobalNamespace::CreditsData::__get_creditsItems()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*> const& GlobalNamespace::CreditsData::__get_creditsItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>, 0x10>(this);
}
inline ::GlobalNamespace::CreditsData* GlobalNamespace::CreditsData::Deserialize(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreditsData*, false>(nullptr, ___internal_method, text);
}
inline ::GlobalNamespace::CreditsData* GlobalNamespace::CreditsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CreditsData*>());
}
inline void GlobalNamespace::CreditsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
